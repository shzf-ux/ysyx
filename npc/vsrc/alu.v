module ysyx_25030085_alu(
    input [31:0] rs1_data,
    input [31:0] rs2_data,
    input [31:0] imm,
    input [31:0] pc,
    input [3:0] AluOp,
    input       ALUSrc,//（0=寄存器，1=立即数）
    output reg [31:0] Alu_Result
);
    reg [31:0] B;
    assign B=ALUSrc?imm:rs2_data;

    always@(*)begin
        Alu_Result=32'h0000_0000;
        case (AluOp)
            4'b0000: begin
                Alu_Result=rs1_data+B;//
            end
            4'b1001:begin
                Alu_Result=pc+B;
            end

            default: begin
            end
        endcase
        





    end


endmodule