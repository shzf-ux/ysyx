module ysyx_25030085_pc (
    input clk,
    input rst,
    output reg [31:0] pc_out
);
always @(posedge clk) begin
    if(rst)
    pc_out<=32'h8000_0000;//复位值
    else
    pc_out<=pc_out+4; 
end
always@(*)begin
    $display("pc:0x%08x",pc_out);
end

endmodule