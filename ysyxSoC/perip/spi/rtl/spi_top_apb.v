// define this macro to enable fast behavior simulation
// for flash by skipping SPI transfers
//`define FAST_FLASH

module spi_top_apb #(
  parameter flash_addr_start = 32'h30000000,
  parameter flash_addr_end   = 32'h3fffffff,
  parameter spi_ss_num       = 8
) (
  input         clock,
  input         reset,
  input  [31:0] in_paddr,
  input         in_psel,
  input         in_penable,
  input  [2:0]  in_pprot,
  input         in_pwrite,
  input  [31:0] in_pwdata,          //传输进来的为spi master信号
  input  [3:0]  in_pstrb,           //flash信号内部生成
  output        in_pready,
  output [31:0] in_prdata,
  output        in_pslverr,

  output                  spi_sck,
  output [spi_ss_num-1:0] spi_ss,
  output                  spi_mosi,
  input                   spi_miso,
  output                  spi_irq_out
);



`ifdef FAST_FLASH

wire [31:0] data;
parameter invalid_cmd = 8'h0;
flash_cmd flash_cmd_i(
  .clock(clock),
  .valid(in_psel && !in_penable),
  .cmd(in_pwrite ? invalid_cmd : 8'h03),
  .addr({8'b0, in_paddr[23:2], 2'b0}),
  .data(data)
);
assign spi_sck    = 1'b0;
assign spi_ss     = 8'b0;
assign spi_mosi   = 1'b1;
assign spi_irq_out= 1'b0;
assign in_pslverr = 1'b0;
assign in_pready  = in_penable && in_psel && !in_pwrite;
assign in_prdata  = data[31:0];

`else

//交给spi控制器的信号
wire  [31:0]  apb_paddr  ;
wire          apb_psel   ;
wire          apb_penable;
wire  [2:0]   apb_pprot  ;      //默认为1
wire          apb_pwrite ;
wire  [31:0]  apb_pwdata ;
wire  [3:0]   apb_pstrb  ;
wire          apb_pready ;
wire  [31:0]  apb_prdata ;
wire          apb_pslverr;

//xip信号，交给spi控制器
reg  [31:0]  xip_flash_paddr  ;
reg          xip_flash_penable;
reg  [2:0]   xip_flash_pprot  ;
reg          xip_flash_pwrite ;
reg  [31:0]  xip_flash_pwdata ;
reg  [3:0]   xip_flash_pstrb  ;
reg          xip_flash_pready ;
reg  [31:0]  xip_flash_prdata ;
reg          xip_flash_pslverr;

reg           spi_master_psel;
wire          xip_flash_psel;
//进行一次信号仲裁,对输入地址选择
//spi   0x1000_1000~0x1000_1fff
//flash 0x3000_0000~0x3fff_ffff
assign  spi_master_psel = (in_paddr[31:12]==20'h10001)&&in_psel;
assign  xip_flash_psel  = (in_paddr[31:28]==4'h3)&&in_psel;

//sel位选信号
assign  apb_psel = spi_master_psel|sel_pending ;
//enable信号
assign  apb_penable =spi_master_psel?in_penable:(sel_pending?xip_flash_penable:0);
//addr 
assign  apb_paddr =spi_master_psel?in_paddr:(sel_pending?xip_flash_paddr:32'h0);
//prot  001
assign  apb_pprot =spi_master_psel?in_pprot:(sel_pending?xip_flash_pprot:3'h1);
assign  xip_flash_pprot=3'h1;
//write
assign  apb_pwrite =spi_master_psel?in_pwrite:(sel_pending?xip_flash_pwrite:0);
//wdata信号
assign  apb_pwdata=spi_master_psel?in_pwdata:(sel_pending?xip_flash_pwdata:32'h0);
//strb
assign  apb_pstrb=spi_master_psel?in_pstrb:(sel_pending?xip_flash_pstrb:4'h0);
assign  xip_flash_pstrb=(sel_pending&xip_flash_pwrite)?4'hf:0;
//输出端口ready rdata err
assign in_pready=spi_master_psel?apb_pready:(sel_pending? xip_flash_pready:0);
assign in_prdata=spi_master_psel?apb_prdata:(sel_pending? xip_flash_prdata:0);
assign in_pslverr=spi_master_psel?apb_pslverr:(sel_pending? xip_flash_pslverr:0);
assign xip_flash_pslverr=0;

//控制寄存器配置

localparam spi_go     = 1'b0;
localparam spi_len    = 7'd64;
localparam spi_rx_neg = 1'b0;
localparam spi_tx_neg = 1'b1;
localparam spi_ie     = 1'b1;
localparam spi_ass    = 1'b1;
localparam spi_lsb    = 1'b0;

localparam [31:0]flash_ctrl ={{18{1'b0}},spi_ass, spi_ie ,spi_lsb ,spi_tx_neg,spi_rx_neg,spi_go,1'b0,spi_len};

localparam [1:0] INIT_STEPS = 2'd3; 
localparam [31:0] init_addrs[0:2] = {
  `SPI_DEVIDE << 2,    // INIT_DIV对应地址
  `SPI_SS << 2,        // INIT_SS对应地址
  `SPI_CTRL << 2       // INIT_CTRL对应地址
};
localparam [31:0] init_data[0:2] = {
  32'd1,               // INIT_DIV数据
  32'd1,               // INIT_SS数据
  flash_ctrl           // INIT_CTRL数据
};
reg [1:0] init_step;      // 初始化步骤计数器（0:DIV, 1:SS, 2:CTRL）

typedef enum [3:0] {INIT,IDLE,TX_DATA,TX_GO,WAIT_IRQ,RDATA,ACK} state_t ;
reg [3:0]state;
reg sel_pending;    //位选信号挂起标志


always @(posedge clock) begin
   if (reset) begin
    state <= INIT;
    init_step <= 2'd0;
    sel_pending <= 1'b0;
    // 复位时统一清零xip相关信号，避免重复复位
    xip_flash_paddr  <= 32'h0;
    xip_flash_pwdata <= 32'h0;
    xip_flash_pwrite <= 1'b0;
    xip_flash_penable <= 1'b0;
    xip_flash_pready <= 1'b0;
   end

  else begin
    case (state)
    INIT: begin
        // 进入初始化步骤时，设置当前步骤的地址、数据
        sel_pending      <= 1'b1;
        xip_flash_pwrite <= 1'b1;
        xip_flash_paddr  <= init_addrs[init_step];
        xip_flash_pwdata <= init_data[init_step];
        xip_flash_penable <= 1'b1;  // sel_pending已置1，直接使能

        // 当前步骤完成（apb就绪）
        if (xip_flash_penable & apb_pready) begin
          // 复位当前步骤信号
          xip_flash_penable <= 1'b0;
          sel_pending      <= 1'b0;
          xip_flash_pwrite <= 1'b0;
          xip_flash_paddr  <= 32'h0;
          xip_flash_pwdata <= 32'h0;

          // 所有步骤完成，进入IDLE；否则继续下一步
          if (init_step == INIT_STEPS - 1) begin
            state <= IDLE;
            init_step <= 2'd0;  // 复位计数器
          end else begin
            init_step <= init_step + 1'b1;
          end
        end
      end

     IDLE: begin                          //收到flash请求 
     sel_pending<=0;    
     xip_flash_pready <= 1'b0;
     if(xip_flash_psel)begin              //写命令和数据
      sel_pending<=1;    
      state<=TX_DATA  ;    
     end
     else begin
      state<=IDLE;
     end
     end
     TX_DATA: begin
      xip_flash_penable<=1;     
      xip_flash_pwrite <=1;
      xip_flash_paddr  <= `SPI_TX_1<<2; 
      xip_flash_pwdata <={8'h03, in_paddr[23:0]};
      if(xip_flash_penable&apb_pready)begin
      xip_flash_penable<=0;
      sel_pending<=0;   
      state<=TX_GO;   
      end       
     end  
     TX_GO:begin
      xip_flash_penable<=1;
      sel_pending<=1;   
      xip_flash_paddr  <= `SPI_CTRL<<2; 
      xip_flash_pwdata <=flash_ctrl|(1<<`SPI_CTRL_GO);     //置位go
      if(xip_flash_penable&apb_pready)begin
      xip_flash_penable<=0;
      xip_flash_pwrite <=0;
      sel_pending<=0;   
      state<=WAIT_IRQ;   
      end  
     end    
     WAIT_IRQ:begin                             //等待go
      // xip_flash_penable<=1;
      // sel_pending<=1;   
      // xip_flash_paddr  <= `SPI_CTRL<<2;     //读地址
      // xip_flash_pwrite <=0;                //读信号
      // if(xip_flash_penable&apb_pready)begin
      //   if(apb_prdata==flash_ctrl)begin
      //   xip_flash_penable<=0;
      //   sel_pending<=0;   
      //   state<=RDATA; 
      //   end 
      // end 
      if(spi_irq_out)begin
        state<=RDATA;
      end
      else begin
        state<=WAIT_IRQ;
      end
     end
     RDATA:begin
      xip_flash_pready <= 1'b0;
      xip_flash_penable<=1;
      sel_pending<=1;   
      xip_flash_paddr  <=`SPI_RX_0<<2;     //读地址
      xip_flash_pwrite <=0;                //读信号
      if(xip_flash_penable&apb_pready)begin
      xip_flash_penable<=0;
      xip_flash_pready <= 1'b1;
      xip_flash_prdata <= {apb_prdata[7:0],  //字节修正
                         apb_prdata[15:8], 
                         apb_prdata[23:16], 
                         apb_prdata[31:24]}; 
      state<=ACK;   
      end 
     end
      ACK:begin
        if(!in_psel)begin
           sel_pending   <= 1'b0;
          xip_flash_pready <= 1'b0;
          state<=IDLE;
        end
        else begin
            state<=ACK;
        end
     end
    default: begin
    end
    endcase
  end
end


spi_top u0_spi_top (
  .wb_clk_i(clock),
  .wb_rst_i(reset),
  .wb_adr_i(apb_paddr[4:0]),
  .wb_dat_i(apb_pwdata),
  .wb_dat_o(apb_prdata),       //读出的数据，用来访问控制寄存器
  .wb_sel_i(apb_pstrb),
  .wb_we_i (apb_pwrite),
  .wb_stb_i(apb_psel),
  .wb_cyc_i(apb_penable),
  .wb_ack_o(apb_pready),
  .wb_err_o(apb_pslverr),
  .wb_int_o(spi_irq_out),

  .ss_pad_o(spi_ss),
  .sclk_pad_o(spi_sck),
  .mosi_pad_o(spi_mosi),
  .miso_pad_i(spi_miso)
);

`endif // FAST_FLASH

endmodule
