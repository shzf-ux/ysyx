module ysyx_25030085_top (
    input clk,
    input rst,
    input [31:0] instruction,
    output [31:0] pc_out

);


    wire [31:0] alu_result;
    wire        RegWrite;
    wire        ALUSrc;
    wire [1:0]  alu_op;
    wire [31:0] ex_imm;
    wire [31:0] data_rs1;
ysyx_25030085_pc pc_init(

    .clk(clk),
    .rst(rst),
    .pc_out(pc_out)
);


ysyx_25030085_regfile regfile_init(
    .clk(clk),
    .instruction(instruction),
    .RegWrite(RegWrite),
    .alu_data(alu_result),
    .data_rs1(data_rs1)
    
);
ysyx_25030085_control control_init(
    .inst(instruction),
    .RegWrite(RegWrite),
    .ALUSrc(ALUSrc),
    .alu_op(alu_op)
);
ysyx_25030085_imm_gen imm_init(
    .instr(instruction),
    .imm(ex_imm)
);   
ysyx_25030085_alu alu_init(
    .a(data_rs1),
    .b(ex_imm),
    .op(alu_op),
    .out(alu_result)
); 


endmodule