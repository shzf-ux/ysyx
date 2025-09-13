

module ysyx_25030085_RegisterFile #(ADDR_WIDTH = 4, DATA_WIDTH = 32) (
  input clk,
  //写数据
  input [DATA_WIDTH-1:0] wdata,
  input [ADDR_WIDTH-1:0] waddr,
  input wen,

  //读数据
  input  [ADDR_WIDTH-1:0] arrs1,
  input  [ADDR_WIDTH-1:0] arrs2,
  output [DATA_WIDTH-1:0] rdata1,
  output [DATA_WIDTH-1:0] rdata2
);
  reg [DATA_WIDTH-1:0] rf [0:15];

//写
  always @(posedge clk) begin
    if (wen) rf[waddr] <=(waddr!=4'b0) ? wdata : 0;
  end
//读
    assign rdata1=rf[arrs1];
    assign rdata2=rf[arrs2];



`ifndef SYNTHESIS
    reg is_info_register;
    reg is_en_display;
    integer i; 
    initial begin
        is_info_register=0;
    end
    //打印寄存器
    export "DPI-C" function info_register_en;
    function void info_register_en(input bit enable,input bit en_display);
       is_info_register=enable;
       is_en_display=en_display;
    endfunction
  
    always @(posedge is_info_register) begin
        for(i=0;i<32;i++)begin
        info_register(rf[i],is_en_display);
        end
    end
`endif

endmodule




    
   



