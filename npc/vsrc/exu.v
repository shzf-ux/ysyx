module ysyx_25030085_ex(
    input [31:0] rs1_data,
    input [31:0] rs2_data,
    input [31:0] imm,
    input [31:0] pc,
    input  Jump,
    input        ALUSrc,//（0=寄存器，1=立即数）
    output reg [31:0] alu_result,
    output reg [31:0] next_pc
);
    reg [31:0] B;
    
    assign B=ALUSrc?imm:rs2_data;

    assign alu_result = rs1_data + B;

    assign next_pc = Jump?{alu_result[31:1],1'b0} :pc+4;




endmodule