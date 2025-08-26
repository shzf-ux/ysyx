import "DPI-C" function int psram_read(input int addr);
import "DPI-C" function void psram_write(input int addr, input int data,input int mask);
module psram(
  input sck,
  input ce_n,
  inout [3:0] dio
);

localparam QPI_MODE=1;

typedef enum [2:0]{CMD,ADDR,NOP,WDATA,RDATA,ERROR}state_t;
state_t state;

reg qpi_state;

reg [7:0] cnt;
reg [7:0] cmd;
reg [23:0]addr;
reg [31:0]wdata;
reg [31:0]rdata,raw_rdata;
reg [3:0] din;//输入
reg [3:0] dout;//输出// 总线方向控制：仅读状态输出，其他状态高阻（允许输入）



assign dio = (state == RDATA) ? dout : 4'hz;
assign din = (state == CMD)||(state == ADDR)||(state == WDATA)?dio:0;





always @(posedge sck or posedge ce_n) begin
  if(ce_n)begin
    cnt<=0;
    state<=CMD;
  end
  else begin
    case (state)
    CMD:if(!qpi_state)begin
      cnt  <=(cnt<8'd7) ? cnt+1 :0;
      state<=(cnt==8'd7)? ADDR:CMD;     
    end 
    else begin
      cnt  <=(cnt<8'd1) ? cnt+1 :0;
      state<=(cnt==8'd1)? ADDR:CMD;        
    end

    ADDR:begin
      cnt  <=(cnt<8'd5) ? cnt+1 :0;
      state<=(cnt==8'd5)? ((cmd==8'h38)? WDATA:(cmd==8'heb)?NOP:ERROR):ADDR;  
    end
    WDATA:begin
      cnt  <= cnt+1;
      state<=WDATA;  
    end
    NOP:begin
      cnt  <=(cnt<8'd5) ? cnt+1 :0;
      state<=(cnt==8'd5)?RDATA:NOP;  
    end
    RDATA:begin
      cnt  <=(cnt<8'd8) ? cnt+1 :0;
      state<=(cnt==8'd8)?CMD:RDATA;  
    end
    default: begin
    end
  endcase  
  end
end



//接收cmd
always @(posedge sck or posedge ce_n) begin
  if(ce_n)begin
    cmd<=0;  
  end
  if(state==CMD)begin
    if(!qpi_state)begin
      cmd<={cmd[6:0],din[0]};
    end
    else begin
      cmd<={cmd[3:0],din};
    end 
  end
end
//接收qpi

always@(posedge ce_n) begin
  if(cmd==8'h35)begin
  qpi_state<=1;
  end
end


//接收addr
always@(posedge sck or posedge ce_n) begin
  if (ce_n) begin
      addr <= 24'd0;
  end
  else if (state == ADDR && cnt < 8'd6)
    addr <= { addr[19:0], din[3:0] };
end
//接收wdata
always@(posedge sck or posedge ce_n) begin
  if (ce_n) begin
      wdata <= 32'd0;
  end
  else if (state == WDATA)begin
    wdata <= { wdata[27:0], din[3:0] };   
  end 
end
//发送数据
always@(posedge sck) begin
 if (state == RDATA)begin
    dout<=rdata[31:28];
    rdata<={rdata[27:0],4'h0};
  end  
end



//写数据，u最后一个cn的上升沿
wire [31:0] wdata_rv = {wdata[7:0], wdata[15:8], wdata[23:16], wdata[31:24]};
wire [31:0] rdata_rv = {rdata[7:0], rdata[15:8], rdata[23:16], rdata[31:24]};
always@(posedge ce_n) begin
  if(state==WDATA)begin
    psram_write({8'd0,addr},wdata_rv,{24'd0,cnt});
  end
end

//读数据
always@(posedge sck) begin
  if(state==NOP&&cnt==0)begin
    raw_rdata = psram_read({8'd0, addr});
    // 转换为大端：0x12345678（与写入数据一致）
    rdata <= {raw_rdata[7:0], raw_rdata[15:8], raw_rdata[23:16], raw_rdata[31:24]};
  end
end



endmodule