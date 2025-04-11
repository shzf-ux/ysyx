module ysyx_25030085_alu(
    input [31:0] a,
    input [31:0] b,
    input [1:0] op,
    output reg [31:0] out
);
    always @(*) begin
        case(op)
            2'b00: out = a + b;  // 加法
            default: out = 32'b0;
        endcase
    end
endmodule