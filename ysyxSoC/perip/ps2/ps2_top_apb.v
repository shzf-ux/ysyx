module ps2_top_apb(
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

  input         ps2_clk,
  input         ps2_data
);

reg [7:0]cnt;
reg [7:0]mcode;
reg [7:0]scan_code;
reg is_extend,is_break;
typedef enum [3:0]{IDLE,MCODE,VERIFY,STOP} state_t;
state_t state;

always @(posedge ps2_clk) begin
  case(state)
  IDLE:begin
    state<=!ps2_data?MCODE:IDLE;
    
  end
  MCODE:begin
    cnt<=cnt<7?cnt+1:0;
    state<=cnt==7?VERIFY:MCODE;
  end
  VERIFY:begin
    state<=STOP;  
  end
  STOP:begin
    state<=IDLE;
  end
  default:begin
    
  end
  endcase
end
//奇数个1异或为1，偶数为0

always @(posedge ps2_clk) begin
  if(state==MCODE)begin
    mcode<={ps2_data,mcode[7:1]};
  end
  else if(state==VERIFY&&((^mcode)^ps2_data))begin
    if (mcode == 8'he0) begin
     is_extend <= 1;
    end 
    else if (mcode == 8'hf0) begin
    is_break <= 1;
    end
    else begin
      scan_code<=mcode;
    end
  end
  else if(in_pready)begin
    scan_code<=0;
    is_break<=0;
    is_extend<=0;
  end
end
assign in_pready = (state == STOP) && (scan_code != 0) && (scan_code != 8'he0) && (scan_code != 8'hf0);
assign in_prdata = {22'h0, is_break,is_extend,scan_code};






endmodule
