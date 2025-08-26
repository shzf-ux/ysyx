module sdram(
  input        clk,
  input        cke,   //时钟使能
  input        cs,    //片选有效
  input        ras,
  input        cas,
  input        we,
  input [12:0] a,     //地址信号
  input [ 1:0] ba,    //储存阵列
  input [ 3:0] dqm,   //数据掩码
  inout [31:0] dq     //数据信号
);



sdram_bit_expansion sdram_bitex_high(
  .clk 	(clk  ),
  .cke 	(cke  ),
  .cs  	(cs   ),
  .ras 	(ras  ),
  .cas 	(cas  ),
  .we  	(we   ),
  .a   	(a    ),
  .ba  	(ba   ),
  .dqm 	(dqm[3:2] ),
  .dq  	(dq[31:16] )
);

sdram_bit_expansion  sdram_bitex_low(
  .clk 	(clk  ),
  .cke 	(cke  ),
  .cs  	(cs   ),
  .ras 	(ras  ),
  .cas 	(cas  ),
  .we  	(we   ),
  .a   	(a    ),
  .ba  	(ba   ),
  .dqm 	(dqm[1:0]  ),
  .dq  	(dq[15:0]   )
);

endmodule
