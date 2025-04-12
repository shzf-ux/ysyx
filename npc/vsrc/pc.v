module ysyx_25030085_pc (
    input clk,
    input rst,
    input[31:0]imm,
    input [31:0]Alu_Result,
    input [1:0]Jump,

    output reg [31:0] pc_out
);
always @(posedge clk or posedge rst) begin
    if(rst)
    pc_out<=32'h8000_0000;//复位值
    else if(Jump==2'b01)begin//JAL
    pc_out<=imm+pc_out;  //JAL跳转地址
    end
    else if(Jump==2'b10)begin//jalr
   
    pc_out<=(Alu_Result&32'hFFFFFFFE);
    end
    else 
    pc_out<=pc_out+4; 
end
always@(pc_out)begin
   // $display("pc:0x%08x",pc_out);
end

endmodule