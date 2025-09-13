`ifndef SYNTHESIS
import "DPI-C" function void dpi_send_signals(
    input int pc,       // 32位信号用 [31:0] 表示
    input int inst,     // 32位指令
    input        valid,     // 单比特用 input 表示（默认reg类型）
    input        ready,
    input        done
);
import "DPI-C" function void ebreak_instruction (input int inst) ;
import "DPI-C" function void invalid_inst   (input int pc,input int inst);   
import "DPI-C"  function void info_register  (input int value,input bit en_display); 
`endif
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

`ifndef SYNTHESIS
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
`endif


localparam DATA_WIDTH = 32;  // RISC-V 32位架构
localparam REG_ADDR_WIDTH = 4;  // 32个通用寄存器（x0-x31）




wire if_id_valid;  // IF阶段输出有效
wire id_if_ready;  // ID阶段准备接收
wire [31:0] if_id_inst;  // IF阶段取出的指令
wire [31:0] if_id_pc;    // IF阶段的程序计数器


wire id_ex_valid;        
wire ex_id_ready;        
wire [31:0] id_ex_pc;    
wire [11:0] id_ex_ctrl;  
wire [31:0] id_ex_imm;   
wire [3:0] id_ex_rd;     
wire [31:0] id_ex_rs1;   
wire [31:0] id_ex_rs2;   


wire ex_mem_valid;     
wire mem_ex_ready;     
wire [31:0] ex_mem_pc; 
wire [11:0] ex_mem_ctrl;
wire [31:0] ex_mem_imm;
wire [3:0] ex_mem_rd;  
wire [31:0] ex_mem_alu;
wire [31:0] ex_mem_rs2;
wire [31:0] ex_mem_npc;
wire [31:0] csr_rdata;


wire mem_wb_valid;      
wire wb_mem_ready;      
wire [31:0] mem_wb_pc;  
wire [11:0] mem_wb_ctrl;
wire [31:0] mem_wb_imm; 
wire [3:0] mem_wb_rd;   
wire [31:0] mem_wb_alu; 
wire [31:0] mem_wb_mem; 
wire [31:0] mem_wb_npc; 
wire [31:0] mem_wb_csr; 


wire wb_done;            
wire [31:0] wb_next_pc;  


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


wire [REG_ADDR_WIDTH-1:0] id_reg_rs1_addr;  // rs1地址（译码生成）
wire [REG_ADDR_WIDTH-1:0] id_reg_rs2_addr;  // rs2地址（译码生成）
wire [DATA_WIDTH-1:0] id_reg_rs1_data;      // rs1数据（来自寄存器文件）
wire [DATA_WIDTH-1:0] id_reg_rs2_data;      // rs2数据（来自寄存器文件）

ysyx_25030085_id id(
    .clock         (clock),
    .reset         (reset),

    .in_valid      (if_id_valid),
    .in_inst       (if_id_inst),
    .in_pc         (if_id_pc),
    .in_ready      (id_if_ready),  // 反馈给IF阶段：ID准备接收

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
    .csr_data        (csr_rdata),
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



wire wb_reg_wen;          // 寄存器写使能
wire [3:0] wb_reg_waddr;  // 寄存器写地址
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
    .in_csr_rdata   (csr_rdata),
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