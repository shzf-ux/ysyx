module ysyx_25030085_imem (//指令存储器
    input[31:0] address,
    output [31:0]inst
    
);
  import "DPI-C" function void ebreak_handler(input int pc);
reg [31:0] mem [0:255];
initial begin
    mem[0] = 32'h00500093;  // addi x1,x0,5
    mem[1] = 32'h00100113;  // addi x2,x0,1
    mem[2] = 32'h00200113;  // addi x2,x0,2
    mem[3] = 32'h00508113;  // addi x2,x1,5
    mem[4] = 32'h00100073;  // ebreak
end
assign inst=mem[(address-32'h8000_0000)>>2];//把地址从0x80000000映射到mem[0],取指令
 
    always @(*) begin
        if (inst=== 32'h00100073) begin  
            ebreak_handler(address);  
        end
    end
    
endmodule