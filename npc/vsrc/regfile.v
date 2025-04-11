module ysyx_25030085_regfile ( 
    input clk,
    input [31:0] instruction,
    input RegWrite,
    input [31:0]alu_data,//alu计算结果
    output [31:0]data_rs1
   
    

);
    reg [4:0]rs1;
    reg [4:0]rd;
    assign rs1=instruction[19:15];
    assign rd =instruction[11:7];
    reg [31:0] register [0:31];
    integer i; 
   

    always @(posedge clk) begin
   
    if (RegWrite) register[rd] <= alu_data;//写回rd寄存器
   //  $display("Write: x%d = 0x%08x", rd, alu_data);
    end 
    
    assign data_rs1=register[rs1];//根据rs1寄存器编码找到对于数据


    always @(posedge clk) begin
     //   $display("Reg Status: x1=0x%08x, x2=0x%08x", 
    //            register[1], register[2]);
    end
endmodule