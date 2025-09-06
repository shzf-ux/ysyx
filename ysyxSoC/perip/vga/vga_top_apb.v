module vga_top_apb(
  input         clock,
  input         reset,
  input  [31:0] in_paddr,
  input         in_psel,
  input         in_penable,
  input  [2:0]  in_pprot,
  input         in_pwrite,
  input  [31:0] in_pwdata,    //上层模块提供的VGA颜色数据
  input  [3:0]  in_pstrb,
  output        in_pready,
  output [31:0] in_prdata,    //提供给上层模块的当前扫描像素点坐标
  output        in_pslverr,

  output [7:0]  vga_r,    // 红
  output [7:0]  vga_g,    // 绿
  output [7:0]  vga_b,    // 蓝
  output        vga_hsync,  //行同步
  output        vga_vsync,  //列同步
  output        vga_valid   //有效
);
  localparam  VSRAM_WIDTH=640*480;
  reg [23:0] vsram[0:VSRAM_WIDTH-1];

//640x480分辨率下的VGA参数设置
  parameter    h_frontporch = 96;
  parameter    h_active = 144;
  parameter    h_backporch = 784;
  parameter    h_total = 800;

  parameter    v_frontporch = 2;
  parameter    v_active = 35;
  parameter    v_backporch = 515;
  parameter    v_total = 525;

  //像素计数值
  reg [9:0]    x_cnt;
  reg [9:0]    y_cnt;
  wire         h_valid;
  wire         v_valid;
  wire [9:0]    h_addr;   
  wire [9:0]    v_addr;

  reg [18:0]   fb_ptr ;

  reg sync_reg;

//     存储像素数据和同步寄存器数据

  always @(posedge reset or posedge clock) begin
    if(in_psel&in_penable&in_pwrite)begin
      if(in_paddr[20:0]==21'h1ffff0)
        sync_reg<=in_pwdata[0];
      end  
      else begin
        vsram[in_paddr[20:2]]<=in_pwdata[23:0];    
      end 
  end


  always @(posedge reset or posedge clock) begin//行像素计数,同步寄存器为1开始
      if (reset == 1'b1)
        x_cnt <= 1;
      else if(sync_reg)begin
        if (x_cnt == h_total)
            x_cnt <= 1;
        else
            x_cnt <= x_cnt + 10'd1;
      end
  end

  always @(posedge clock)begin //列像素计数
      if (reset == 1'b1)
        y_cnt <= 1;
      else begin
        if (y_cnt == v_total & x_cnt == h_total)
            y_cnt <= 1;
        else if (x_cnt == h_total)
            y_cnt <= y_cnt + 10'd1;
      end
  end

  always @(posedge clock)begin 
      if (reset == 1'b1)
        fb_ptr <= 1;
      else if(vga_valid)begin
        fb_ptr<=fb_ptr+1;
      end
      else if(y_cnt==v_total)begin
        fb_ptr<=0;
      end
  end



  //生成同步信号
  assign vga_hsync = (x_cnt > h_frontporch);
  assign vga_vsync = (y_cnt > v_frontporch);
  //生成消隐信号
  assign h_valid = (x_cnt > h_active) & (x_cnt <= h_backporch);
  assign v_valid = (y_cnt > v_active) & (y_cnt <= v_backporch);
  assign vga_valid = h_valid & v_valid;

  //计算当前有效像素坐标
  assign h_addr = h_valid ? (x_cnt - 10'd145) : {10{1'b0}};
  assign v_addr = v_valid ? (y_cnt - 10'd36) : {10{1'b0}};
  assign in_prdata={12'b0,h_addr,v_addr};

  //设置输出的颜色值
  assign vga_r =vga_valid?vsram[fb_ptr][23:16]:0;
  assign vga_g =vga_valid?vsram[fb_ptr][15:8] :0;
  assign vga_b =vga_valid?vsram[fb_ptr][7:0]  :0;

  assign in_pready=1;



endmodule