module sdram(
  input        clk,
  input        cke,   // 时钟使能
  input        cs,    // 总片选信号（低电平有效）
  input        ras,   // 行地址选通（低电平有效）
  input        cas,   // 列地址选通（低电平有效）
  input        we,    // 写使能（低电平有效）
  input [13:0] a,     // 地址信号（a[13]为字扩展高位地址）
  input [ 1:0] ba,    // 存储阵列选择（Bank地址）
  input [ 3:0] dqm,   // 数据掩码
  inout [31:0] dq     // 数据信号
);


wire cs_0   = !a[13] ? cs   : 1'b1;  // a[13]=0时选中子模块0
wire ras_0  = !a[13] ? ras  : 1'b1;
wire cas_0  = !a[13] ? cas  : 1'b1;
wire we_0   = !a[13] ? we   : 1'b1;

wire cs_1   =  a[13] ? cs   : 1'b1;  // a[13]=1时选中子模块1
wire ras_1  =  a[13] ? ras  : 1'b1;
wire cas_1  =  a[13] ? cas  : 1'b1;
wire we_1   =  a[13] ? we   : 1'b1;

// 子模块0：负责0~64MB地址范围
sdram_word_expansion sdram_0_to_64MB(
  .clk  (clk),
  .cke  (cke),
  .cs   (cs_0),           
  .ras  (ras_0),          
  .cas  (cas_0),          
  .we   (we_0),           
  .a    (a[12:0]),        
  .ba   (ba),             
  .dqm  (dqm),            
  .dq   (dq)              
);

// 子模块1：负责64~128MB地址范围
sdram_word_expansion sdram_64_to_128MB(
  .clk  (clk),
  .cke  (cke),
  .cs   (cs_1),          
  .ras  (ras_1),         
  .cas  (cas_1),         
  .we   (we_1),          
  .a    (a[12:0]),       
  .ba   (ba),            
  .dqm  (dqm),           
  .dq   (dq)             
);

endmodule
