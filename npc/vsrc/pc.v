
module ysyx_25030085_if (
    input clk,
    input rst,
    input  [31:0]next_pc,
    output  reg [31:0] pc
);

always @(posedge clk) begin
    if(rst) begin
     pc <= 32'h8000_0000;  // 复位值     
    end    
    else begin
    pc<=next_pc;
    end 

end





endmodule