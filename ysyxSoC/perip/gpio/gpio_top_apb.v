module gpio_top_apb(
  input         clock,
  input         reset,

  input  [31:0] in_paddr,
  input         in_psel,
  input         in_penable,
  input  [2:0]  in_pprot,
  input         in_pwrite,
  input  [31:0] in_pwdata,
  input  [3:0]  in_pstrb,
  output        in_pready,
  output [31:0] in_prdata,
  output        in_pslverr,

  output [15:0] gpio_out,   //输出给外部芯片led
  input  [15:0] gpio_in,    //芯片外部输入 、拨码开关

  output [7:0]  gpio_seg_0,
  output [7:0]  gpio_seg_1,
  output [7:0]  gpio_seg_2,
  output [7:0]  gpio_seg_3,
  output [7:0]  gpio_seg_4,
  output [7:0]  gpio_seg_5,
  output [7:0]  gpio_seg_6,
  output [7:0]  gpio_seg_7
);
//gpio 输出
localparam LED   =4'h0;
localparam SWITCH=4'h4;
localparam SEG   =4'h8;
reg [15:0] led_reg;
reg [15:0] switch_reg;
reg [31:0] seg_reg;

wire apb_write=in_psel&in_penable&in_pwrite;
wire apb_read=in_psel&in_penable&~in_pwrite;



//处理地址和数据
always@(posedge clock or posedge reset)begin
  if(reset)begin
   
  end
  else if(in_psel) begin
    case (in_paddr[3:0])
    LED:begin
      led_reg<=in_pwdata[15:0];     //向外发送
    end
    SWITCH:begin
      switch_reg<=gpio_in;  //读取数据
    end
    SEG:begin
     
      seg_reg<=in_pwdata;           //发送数据
    end
    default:begin
      
    end
    endcase   
  end
  else begin
    //$display("sw:%16b",switch_reg);
    // $display("seg:%08x",seg_reg);
  end
end




function [7:0] seg_decoder;
  input [3:0] data;
  begin
    case(data)
      4'h0: seg_decoder = 8'b00000011; // 0
      4'h1: seg_decoder = 8'b10011111; // 1
      4'h2: seg_decoder = 8'b00100101; // 2
      4'h3: seg_decoder = 8'b00001101; // 3
      4'h4: seg_decoder = 8'b10011001; // 4
      4'h5: seg_decoder = 8'b01001001; // 5
      4'h6: seg_decoder = 8'b01000001; // 6
      4'h7: seg_decoder = 8'b00011111; // 7
      4'h8: seg_decoder = 8'b00000001; // 8
      4'h9: seg_decoder = 8'b00001001; // 9
      4'ha: seg_decoder = 8'b00010001; // A
      4'hb: seg_decoder = 8'b11000001; // b
      4'hc: seg_decoder = 8'b01100011; // C
      4'hd: seg_decoder = 8'b10000101; // d
      4'he: seg_decoder = 8'b01100001; // E
      4'hf: seg_decoder = 8'b01110001; // F
      default: seg_decoder = 8'b11111111; // 熄灭
    endcase
  end
endfunction

//七段数码管输出赋值
assign gpio_seg_0 = seg_decoder(seg_reg[3:0]);
assign gpio_seg_1 = seg_decoder(seg_reg[7:4]);
assign gpio_seg_2 = seg_decoder(seg_reg[11:8]);
assign gpio_seg_3 = seg_decoder(seg_reg[15:12]);
assign gpio_seg_4 = seg_decoder(seg_reg[19:16]);
assign gpio_seg_5 = seg_decoder(seg_reg[23:20]);
assign gpio_seg_6 = seg_decoder(seg_reg[27:24]);
assign gpio_seg_7 = seg_decoder(seg_reg[31:28]);

assign gpio_out   =led_reg;

assign in_prdata  ={16'b0,switch_reg};
assign in_pready=1;




endmodule
