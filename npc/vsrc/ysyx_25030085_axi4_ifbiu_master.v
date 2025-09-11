
`include "define.vh"
module ysyx_25030085_ifbiu_axi4_lite_master #(
    parameter MAX_DELAY  = 20,        // 随机延迟最大值
    parameter LFSR_WIDTH = 8
)(
    input               clock         ,
    input               reset         ,
    
    //与if交互
    input               if_req      ,
    input       [31:0]  if_addr     ,
    output  reg [31:0]  biu_rdata    ,
    output  reg         biu_rresp    ,


    // AXI4-Lite Master接口信号
    //************读地址通道**************//
    output reg  [31:0]  M_AXI_ARADDR    ,
    output reg          M_AXI_ARVALID   ,
    input               M_AXI_ARREADY   ,
    //***********新增信号***************//
    output reg  [3:0]   M_AXI_ARID      , //读事务id，为乱序传输发起的多个请求分配id
    output reg  [1:0]   M_AXI_ARBURST   , //读突发类型，设置01，每次按照arsize大小递增度对地址读取
    output reg  [7:0]   M_AXI_ARLEN     , //突发长度，一次读取的地址数-1，传输1个数据设置0；
    output reg  [2:0]   M_AXI_ARSIZE    , //数据字节数，1表示读1个字节


    //************读数据通道**************//
    input       [31:0]  M_AXI_RDATA     ,
    input       [1:0]   M_AXI_RRESP     , //00为ok
    input               M_AXI_RVALID    ,
    output reg          M_AXI_RREADY    ,
    //***********新增信号***************//
    input       [3:0]   M_AXI_RID       ,//对应响应事务对应id   
    input               M_AXI_RLAST     //是否最后一个数据，0表示数据未处理，1表示最后一个数据

   
  /* //************写地址通道*************
    output reg  [31:0]  M_AXI_AWADDR,
    output reg          M_AXI_AWVALID,
    input               M_AXI_AWREADY,
    //***********新增信号***************
    output reg  [3:0]   M_AXI_AWRID      , //写事务id，为乱序传输发起的多个请求分配id
    output reg  [1:0]   M_AXI_AWRBURST   , //写突发类型，设置01，每次按照arsize大小递增度对地址读取
    output reg  [7:0]   M_AXI_AWRLEN     , //突发长度，一次读取的地址数-1，传输1个数据设置0；
    output reg  [2:0]   M_AXI_AWRSIZE    , //数据字节数，1表示写1个字节  

    
    //************写数据通道*************
    output reg  [31:0]  M_AXI_WDATA     ,
    output reg  [3:0]   M_AXI_WSTRB     ,
    output reg          M_AXI_WVALID    ,
    input               M_AXI_WREADY    ,
   //***********新增信号***************  
    output              M_AXI_WLAST     ,//发送数据的一方来确定last信号

    //************写响应通道*************
    input       [1:0]   M_AXI_BRESP     ,
    input               M_AXI_BVALID    ,
    output reg          M_AXI_BREADY    ,
    input       [3:0]   M_AXI_BID               */     
);

  /*wire         AW_active              ;
    wire         W_active               ;
    wire         B_active               ;*/

    wire         AR_active              ;
    wire         R_active               ;

 /* assign       AW_active = M_AXI_AWVALID & M_AXI_AWREADY;
    assign       W_active = M_AXI_WVALID  & M_AXI_WREADY;    
    assign       B_active = M_AXI_BREADY  & M_AXI_BVALID;*/

    assign       AR_active = M_AXI_ARVALID & M_AXI_ARREADY;
    assign       R_active = M_AXI_RVALID  & M_AXI_RREADY;
    
 /*   //写通道设为0
    assign       M_AXI_WDATA  = 0 ;
    assign       M_AXI_WSTRB  = 0 ;
    assign       M_AXI_WVALID = 0 ;
    assign       M_AXI_BREADY = 0 ;
    assign       M_AXI_AWADDR = 0 ;
    assign       M_AXI_AWVALI = 0 ;*/

    // 读延迟计数器
    reg [LFSR_WIDTH-1:0] read_cnt;
    reg                 read_pending;  // 读请求挂起标志   


    //LFSR模块（生成伪随机数）
    reg [LFSR_WIDTH-1:0] lfsr;         //最大为8位
    wire      lfsr_feedback;

// 反馈多项式：x^8 + x^6 + x^5 + x^4 + 1（
assign lfsr_feedback = lfsr[7] ^ lfsr[5] ^ lfsr[4] ^ lfsr[3];
// LFSR更新逻辑
always @(posedge clock or posedge reset) begin
    if (reset) begin
        lfsr <= 8'b1;  // 初始值不能为全0，否则会锁定
    end else begin
        lfsr <= {lfsr[6:0], lfsr_feedback};  // 左移一位，补反馈位
    end
end


// 宏决定延迟值
wire [LFSR_WIDTH-1:0] rand_delay = `ifdef DISABLE_IF_DELAY 
                                      0  // 延迟为0
                                   `else 
                                      (lfsr % MAX_DELAY)  // 正常随机延迟
                                   `endif;



// 读地址通道
always @(posedge clock or posedge reset) begin
    if (reset) begin
        M_AXI_ARADDR <= 32'h0;
        M_AXI_ARVALID <= 1'b0;
        M_AXI_ARBURST <= 2'b01;  // 固定为递增模式（单周期传输可固定）
        M_AXI_ARLEN   <= 8'd0;   // 固定为单周期（传输1个数据，ARLEN = 0）
        M_AXI_ARSIZE  <= 3'd2;   //3'd2对应4字节
    end else if (if_req&&!M_AXI_ARVALID&&!read_pending) begin//没有挂起时
        read_pending<=1;
        read_cnt    <=0;
    end

    // 根据disable_delay参数决定是否启用延迟计数
    `ifndef DISABLE_IF_DELAY  // 当需要延迟时，保留计数逻辑
        else if (read_pending && read_cnt < rand_delay) begin     
            read_cnt <= read_cnt + 1;       
        end
    `endif  // 当延迟为0时，直接跳过这个分支

    else if(read_pending&&read_cnt==rand_delay)begin
        read_pending<=0;
        read_cnt    <=0;
        M_AXI_ARADDR <= if_addr;
        M_AXI_ARVALID <= 1'b1;
    end
    else if (AR_active) begin//地址握手成功置零
        M_AXI_ARVALID <= 1'b0;
    end
end




// 读数据通道
always @(posedge clock or posedge reset) begin
    if (reset) begin
        M_AXI_RREADY <= 1'b0;
        biu_rdata <= 32'h0;
        biu_rresp  <=0;
    end
    else if(M_AXI_RVALID&!M_AXI_RREADY) begin
        M_AXI_RREADY <= 1'b1;  // 始终准备好接收读数据    
        biu_rdata   <= M_AXI_RDATA;
        biu_rresp   <= M_AXI_RRESP==2'b00 ?  1 : 0;
    end
    else begin
        M_AXI_RREADY <= 1'b0; 
        biu_rdata<=biu_rdata;
        biu_rresp  <=0;
    end
end




`ifndef SYNTHESIS
    always @(*) begin
        if_performance_cnt (R_active);
    end
`endif





endmodule