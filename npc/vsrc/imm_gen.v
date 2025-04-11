module ysyx_25030085_imm_gen (
    input [31:0] instr,
    output reg [31:0] imm 

);
    always @(*) begin //I型立即数
        imm = {{20{instr[31]}}, instr[31:20]};
    end
endmodule
    
