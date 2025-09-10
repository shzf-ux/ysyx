module ysyx_25030085 (
    input         clock,
    input         reset,

    output        io_ifu_reqValid,
    output[31:0]  io_ifu_addr,
    input         io_ifu_respValid,
    input [31:0]  io_ifu_rdata,

    output        io_lsu_reqValid,
    output[31:0]  io_lsu_addr,
    output[1:0]   io_lsu_size,
    output        io_lsu_wen,
    output[31:0]  io_lsu_wdata,
    output[3:0]   io_lsu_wmask,
    input         io_lsu_respValid,
    input [31:0]  io_lsu_rdata
);


    reg [31:0] top_pc;
    reg [31:0] top_inst;
    reg  top_valid;
    reg  top_ready;
    reg  inst_done;

    assign top_valid=if_id_valid    ;
    assign top_ready =id_if_ready   ;
    assign top_inst =if_id_inst     ;
    assign top_pc  =wb_next_pc         ;

    always @(posedge clock or posedge reset) begin
        if(reset)begin
            inst_done<=0;
        end
        else begin
            inst_done<=wb_done;
        end
    end
always @(*) begin
   // $display("%08x",top_pc);
        dpi_send_signals(
            top_pc,        // 
            top_inst,      
            top_valid, 
            top_ready, 
            inst_done  
    );
end


// ============================================================================
// 1. 全局参数与类型定义（解决寄存器文件数据宽度匹配问题）
// ============================================================================
localparam DATA_WIDTH = 32;  // RISC-V 32位架构
localparam REG_ADDR_WIDTH = 5;  // 32个通用寄存器（x0-x31）


// ============================================================================
// 2. 流水线寄存器：连接各阶段的中间信号（IF-ID → ID-EX → EX-MEM → MEM-WB）
// ============================================================================
// -------------------------- IF-ID 阶段寄存器 --------------------------
wire if_id_valid;  // IF阶段输出有效
wire id_if_ready;  // ID阶段准备接收
wire [31:0] if_id_inst;  // IF阶段取出的指令
wire [31:0] if_id_pc;    // IF阶段的程序计数器

// -------------------------- ID-EX 阶段寄存器 --------------------------
wire id_ex_valid;        // ID阶段输出有效
wire ex_id_ready;        // EX阶段准备接收
wire [31:0] id_ex_pc;    // 传递PC（用于分支计算、AUIPC等）
wire [11:0] id_ex_ctrl;  // 控制信号（ALU操作、访存类型、写回使能等）
wire [31:0] id_ex_imm;   // 译码生成的立即数
wire [4:0] id_ex_rd;     // 目标寄存器地址（rd）
wire [31:0] id_ex_rs1;   // 源寄存器1数据（rs1）
wire [31:0] id_ex_rs2;   // 源寄存器2数据（rs2）

// -------------------------- EX-MEM 阶段寄存器 --------------------------
wire ex_mem_valid;       // EX阶段输出有效
wire mem_ex_ready;       // MEM阶段准备接收
wire [31:0] ex_mem_pc;   // 传递PC
wire [11:0] ex_mem_ctrl; // 精简控制信号（仅保留访存、写回相关）
wire [31:0] ex_mem_imm;  // 传递立即数
wire [4:0] ex_mem_rd;    // 传递目标寄存器地址
wire [31:0] ex_mem_alu;  // ALU运算结果（用于访存地址/写回数据）
wire [31:0] ex_mem_rs2;  // 源寄存器2数据（用于存储指令的写数据）
wire [31:0] ex_mem_npc;  // 下一条PC（正常/分支跳转后）
wire [31:0] ex_mem_csr;  // CSR寄存器数据（若涉及CSR指令）

// -------------------------- MEM-WB 阶段寄存器 --------------------------
wire mem_wb_valid;       // MEM阶段输出有效
wire wb_mem_ready;       // WB阶段准备接收
wire [31:0] mem_wb_pc;   // 传递PC
wire [11:0] mem_wb_ctrl; // 精简控制信号（仅保留写回相关）
wire [31:0] mem_wb_imm;  // 传递立即数
wire [4:0] mem_wb_rd;    // 传递目标寄存器地址
wire [31:0] mem_wb_alu;  // 传递ALU结果
wire [31:0] mem_wb_mem;  // 访存读取的数据（Load指令）
wire [31:0] mem_wb_npc;  // 传递下一条PC（用于JAL/JALR写回）
wire [31:0] mem_wb_csr;  // 传递CSR数据（用于CSR指令写回）

// -------------------------- WB阶段反馈信号 --------------------------
wire wb_done;            // WB阶段完成（反馈给IF阶段，用于流水线同步）
wire [31:0] wb_next_pc;  // WB阶段最终确定的下一条PC（反馈给IF阶段取指）


ysyx_25030085_if ifu(
    .clock          (clock),
    .reset          (reset),

    // WB阶段反馈：下一条PC与完成信号
    .wb_done        (wb_done),
    .next_pc        (wb_next_pc),

    // 外部指令存储器接口
    .ifu_respValid  (io_ifu_respValid),
    .ifu_rdata      (io_ifu_rdata),
    .ifu_addr       (io_ifu_addr),
    .ifu_reqValid   (io_ifu_reqValid),

    // 输出到IF-ID寄存器
    .out_valid      (if_id_valid),
    .inst           (if_id_inst),
    .pc             (if_id_pc),
    .out_ready      (id_if_ready)  // 接收ID阶段的准备信号
);

// -------------------------- 3.2 译码阶段（ID）：ysyx_25030085_id --------------------------
// ID阶段需要的寄存器文件接口信号
wire [REG_ADDR_WIDTH-1:0] id_reg_rs1_addr;  // rs1地址（译码生成）
wire [REG_ADDR_WIDTH-1:0] id_reg_rs2_addr;  // rs2地址（译码生成）
wire [DATA_WIDTH-1:0] id_reg_rs1_data;      // rs1数据（来自寄存器文件）
wire [DATA_WIDTH-1:0] id_reg_rs2_data;      // rs2数据（来自寄存器文件）

ysyx_25030085_id id(
    .clock         (clock),
    .reset         (reset),

    // 输入来自IF-ID寄存器
    .in_valid      (if_id_valid),
    .in_inst       (if_id_inst),
    .in_pc         (if_id_pc),
    .in_ready      (id_if_ready),  // 反馈给IF阶段：ID准备接收

    // 寄存器文件接口（读操作）
    .rs1_addr      (id_reg_rs1_addr),
    .rs2_addr      (id_reg_rs2_addr),
    .rs1_data      (id_reg_rs1_data),
    .rs2_data      (id_reg_rs2_data),
    
    // 输出到ID-EX寄存器
    .out_valid     (id_ex_valid),
    .pc_out        (id_ex_pc),
    .out_rs1_data  (id_ex_rs1),
    .out_rs2_data  (id_ex_rs2),
    .ctrl_out      (id_ex_ctrl),
    .imm_out       (id_ex_imm),
    .rd_out        (id_ex_rd),
    .out_ready     (ex_id_ready)  // 接收EX阶段的准备信号
);

// -------------------------- 3.3 通用寄存器文件：ysyx_25030085_RegisterFile --------------------------
ysyx_25030085_RegisterFile regfile(
    .clk     (clock),                // 时钟（与顶层一致）
    .wdata   (wb_reg_wdata),         // 写数据（来自WB阶段）
    .waddr   (wb_reg_waddr),         // 写地址（来自WB阶段）
    .wen     (wb_reg_wen),           // 写使能（来自WB阶段）
    .arrs1   (id_reg_rs1_addr),      // 读地址1（来自ID阶段rs1）
    .arrs2   (id_reg_rs2_addr),      // 读地址2（来自ID阶段rs2）
    .rdata1  (id_reg_rs1_data),      // 读数据1（输出到ID阶段rs1）
    .rdata2  (id_reg_rs2_data)       // 读数据2（输出到ID阶段rs2）
);

// -------------------------- 3.4 执行阶段（EX）：ysyx_25030085_ex --------------------------
ysyx_25030085_ex ex(
    .clock           (clock),
    .reset           (reset),

    // 输入来自ID-EX寄存器
    .in_valid        (id_ex_valid),
    .in_rs1_data     (id_ex_rs1),
    .in_rs2_data     (id_ex_rs2),
    .in_ctrl         (id_ex_ctrl),
    .in_imm          (id_ex_imm),
    .in_rd           (id_ex_rd),
    .in_pc           (id_ex_pc),
    .in_ready        (ex_id_ready),  // 反馈给ID阶段：EX准备接收

    // 输出到EX-MEM寄存器
    .out_valid       (ex_mem_valid),
    .next_pc     (ex_mem_npc),
    .out_Alu_Result  (ex_mem_alu),
    .out_rs2_data    (ex_mem_rs2),
    .out_ctrl        (ex_mem_ctrl),
    .csr_data        (ex_mem_csr),
    .rd_out          (ex_mem_rd),
    .imm_out         (ex_mem_imm),
    .pc_out          (ex_mem_pc),
    .out_ready       (mem_ex_ready)  // 接收MEM阶段的准备信号
);

// -------------------------- 3.5 访存阶段（MEM）：ysyx_25030085_lsu --------------------------
ysyx_25030085_lsu lsu(
    .clock          (clock),
    .reset          (reset),

    // 输入来自EX-MEM寄存器
    .in_valid       (ex_mem_valid),
    .in_ctrl        (ex_mem_ctrl),
    .in_rd          (ex_mem_rd),
    .in_imm         (ex_mem_imm),
    .in_npc         (ex_mem_npc),
    .in_pc          (ex_mem_pc),
    .in_lsu_wdata   (ex_mem_rs2),    // 存储指令的写数据（来自rs2）
    .in_lsu_addr    (ex_mem_alu),    // 访存地址（来自ALU结果）
    .in_ready       (mem_ex_ready),  // 反馈给EX阶段：MEM准备接收

    // 输出到MEM-WB寄存器
    .out_valid      (mem_wb_valid),
    .mem_rdata      (mem_wb_mem),    // 加载指令的读数据（来自外部存储器）
    .ctrl_out       (mem_wb_ctrl),
    .imm_out        (mem_wb_imm),
    .npc_out        (mem_wb_npc),
    .pc_out         (mem_wb_pc),
    .rd_out         (mem_wb_rd),
    .alu_result     (mem_wb_alu),
    .out_ready      (wb_mem_ready),  // 接收WB阶段的准备信号

    // 外部数据存储器接口
    .lsu_reqValid   (io_lsu_reqValid),
    .lsu_wen        (io_lsu_wen),
    .lsu_addr       (io_lsu_addr),
    .lsu_wdata      (io_lsu_wdata),
    .lsu_wmask      (io_lsu_wmask),
    .lsu_size       (io_lsu_size),
    .lsu_respValid  (io_lsu_respValid),
    .lsu_rdata      (io_lsu_rdata)
);

// -------------------------- 3.6 写回阶段（WB）：ysyx_25030085_wb --------------------------
// WB阶段输出到寄存器文件的信号
wire wb_reg_wen;          // 寄存器写使能
wire [4:0] wb_reg_waddr;  // 寄存器写地址
wire [31:0] wb_reg_wdata; // 寄存器写数据

ysyx_25030085_wb wb(
    .clock          (clock),
    .reset          (reset),

    // 输入来自MEM-WB寄存器
    .in_valid       (mem_wb_valid),
    .in_alu_result  (mem_wb_alu),
    .in_mem_rdata   (mem_wb_mem),
    .in_npc         (mem_wb_npc),
    .in_pc          (mem_wb_pc),
    .in_imm         (mem_wb_imm),
    .in_ctrl        (mem_wb_ctrl),
    .in_csr_rdata   (mem_wb_csr),
    .rd_addr        (mem_wb_rd),
    .in_ready       (wb_mem_ready),  // 反馈给MEM阶段：WB准备接收

    // 输出到寄存器文件（写操作）
    .reg_wen        (wb_reg_wen),
    .reg_waddr      (wb_reg_waddr),
    .reg_wdata      (wb_reg_wdata),

    // 反馈给IF阶段：下一条PC与完成信号
    .out_valid      (wb_done),
    .next_pc        (wb_next_pc)
);

endmodule