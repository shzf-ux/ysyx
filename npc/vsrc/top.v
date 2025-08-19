module ysyx_25030085_top (
    input         clk,
    input         rst,
    input  [31:0] instruction,
    output [31:0] pc_out
);


    wire [31:0] next_pc;
    wire [31:0] Alu_Result;
    wire [31:0] ReadData;
    wire [31:0] wb_data;
    wire [4:0]  waddr;
    wire [4:0]  rs1_addr;
    wire [4:0]  rs2_addr;
    wire [31:0] Read_rs1;
    wire [31:0] Read_rs2;

    // 控制信号
    reg        MemWrite;
    reg        MemRead;
    reg  [1:0] MemOp;
    reg  [1:0] MemtoReg;
    reg        RegWrite;
    reg        Jump;
    reg        ALUSrc;
    reg [31:0] imm;

    
    ysyx_25030085_if ifu (
        .clk      (clk),
        .rst      (rst),
        .next_pc  (next_pc),
        .pc       (pc_out)
    );

    ysyx_25030085_id idu (
        .inst      (instruction),
        .pc        (pc_out),
        .rs1_addr  (rs1_addr),
        .rs2_addr  (rs2_addr),
        .rd_addr   (waddr),
        .MemWrite  (MemWrite),
        .MemRead   (MemRead),
        .MemOp     (MemOp),
        .MemtoReg  (MemtoReg),
        .RegWrite  (RegWrite),
        .Jump      (Jump),
        .ALUSrc    (ALUSrc),
        .imm       (imm)
    );

    // 寄存器文件
    ysyx_25030085_RegisterFile regfile (
        .clk     (clk),
        .wdata   (wb_data),
        .waddr   (waddr),
        .wen     (RegWrite),
        .arrs1   (rs1_addr),
        .arrs2   (rs2_addr),
        .rdata1  (Read_rs1),
        .rdata2  (Read_rs2)
    );

    // 执行阶段 (EX)
    ysyx_25030085_ex exu (
        .rs1_data   (Read_rs1),
        .rs2_data   (Read_rs2),
        .imm        (imm),
        .Jump       (Jump),
        .pc         (pc_out),
        .ALUSrc     (ALUSrc),
        .alu_result (Alu_Result),
        .next_pc    (next_pc)
    );

    // 访存阶段 (MEM)
    ysyx_25030085_lsu lsu (
        .clk       (clk),
        .rst       (rst),
        .MemOp     (MemOp),
        .MemRead   (MemRead),
        .MemWrite  (MemWrite),
        .Read_rs2  (Read_rs2),
        .addr      (Alu_Result),
        .ReadData  (ReadData)
    );

    // 写回阶段 (WB)
    ysyx_25030085_writeback wbu (
        .MemtoReg   (MemtoReg),
        .Alu_Result (Alu_Result),
        .ReadData   (ReadData),
        .pc         (pc_out),
        .imm        (imm),
        .wb_data    (wb_data)
    );


endmodule
