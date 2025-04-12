module ysyx_25030085_top (
    input clk,
    input rst,
    input [31:0] instruction,
    output [31:0] pc_out

);


    wire [31:0] Alu_Result;
    wire [31:0] Read_rs1;
    wire [31:0] Read_rs2;
    wire [31:0] ReadData;//数据存储器读出来的数据
    wire [31:0] imm;
    wire        MemRead;
    wire [1:0]  MemtoReg;
    wire        MemWrite;
    wire        RegWrite;
    wire        Branch;
    wire [1:0]  Jump;
    wire        ALUSrc;
    wire [3:0]  AluOp;
    wire [2:0]  MemOp;

    always @(instruction) begin
        //  $display("inst:0x%08x",instruction);
    end

  
ysyx_25030085_pc pc_init(

    .clk(clk),
    .rst(rst),
    .Jump(Jump),
    .imm(imm),
    .pc_out(pc_out),
    .Alu_Result(Alu_Result)
);

ysyx_25030085_control control_init(
    .pc(pc_out),
    .inst(instruction),
    .MemRead(MemRead),
    .MemtoReg(MemtoReg),
    .MemWrite(MemWrite),
    .RegWrite(RegWrite),
    .ALUSrc(ALUSrc),
    .AluOp(AluOp),
    .MemOp(MemOp),
    .Branch(Branch),
    .Jump(Jump),
    .imm(imm) 
    
);

ysyx_25030085_regfile regfile_init(
    .clk(clk),
    .rst(rst),
    .imm(imm),
    .pc_out(pc_out),
    .instruction(instruction),
    .RegWrite(RegWrite),
    .MemtoReg(MemtoReg),
    .Alu_Result(Alu_Result),
    .Read_rs1(Read_rs1),
    .Read_rs2(Read_rs2)
    
);
   
ysyx_25030085_alu alu_init(
    .rs1_data(Read_rs1),
    .rs2_data(Read_rs2),
    .pc(pc_out),
    .imm(imm),
    .AluOp(AluOp),
    .ALUSrc(ALUSrc),
    .Alu_Result(Alu_Result)
); 
ysyx_25030085_DataMem DataMem(
    .rst(rst),
    .MemOp(MemOp),
    .MemRead(MemRead),
    .MemWrite(MemWrite),//控制信号
    .Read_rs2(Read_rs2),//作存储时输入数据
    .addr(Alu_Result),//作储存时输入地址，作加载时，加载地址
    .ReadData(ReadData)//作加载时，加载出来的地址
);


endmodule