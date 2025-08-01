module ysyx_25030085_ifbiu_axi4_lite_master #(
      parameter READ_DELAY = 1,  // 固定读延迟（5/10/20等）
      parameter MAX_DELAY  =2 , // 随机延迟最大值
      parameter LFSR_WIDTH =8
)(
    input               clk         ,
    input               rst         ,
    
    //与if交互
    input               if_req      ,
    input       [31:0]  if_addr     ,
    output  reg [31:0]  biu_rdata    ,
    output  reg         biu_ready    ,
    output  reg [1:0]   biu_rresp   ,


    // 读地址通道
    output reg  [31:0]  M_AXI_ARADDR,
    output reg          M_AXI_ARVALID,
    input               M_AXI_ARREADY,
    
    // 读数据通道
    input       [31:0]  M_AXI_RDATA ,
    input       [1:0]   M_AXI_RRESP ,          //读响应
    input               M_AXI_RVALID,
    output reg          M_AXI_RREADY
    
/*    // 写地址通道
    output reg  [31:0]  M_AXI_AWADDR,
    output reg          M_AXI_AWVALID,
    input               M_AXI_AWREADY,
    
    // 写数据通道
    output reg  [31:0]  M_AXI_WDATA ,
    output reg  [3:0]   M_AXI_WSTRB ,
    output reg          M_AXI_WVALID,
    input               M_AXI_WREADY,
    
    // 写响应通道
    input       [1:0]   M_AXI_BRESP ,
    input               M_AXI_BVALID,
    output reg          M_AXI_BREADY*/
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
always @(posedge clk or negedge rst) begin
    if (rst) begin
        lfsr <= 8'b1;  // 初始值不能为全0，否则会锁定
    end else begin
        lfsr <= {lfsr[6:0], lfsr_feedback};  // 左移一位，补反馈位
    end
end
wire [LFSR_WIDTH-1:0] rand_delay = lfsr % MAX_DELAY;  // 取低5位并限制范围




// 读地址通道
always @(posedge clk or negedge rst) begin
    if (rst) begin
        M_AXI_ARADDR <= 32'h0;
        M_AXI_ARVALID <= 1'b0;
    end else if (if_req&&!M_AXI_ARVALID&&!read_pending) begin//没有挂起时
        read_pending<=1;
        read_cnt    <=0;
    end
    else if(read_pending&&read_cnt<rand_delay)begin     //延迟计数
        read_cnt<=read_cnt+1;       
    end
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
always @(posedge clk or negedge rst) begin
    if (rst) begin
        M_AXI_RREADY <= 1'b0;
        biu_rdata <= 32'h0;
    end
    else if(M_AXI_RVALID&!M_AXI_RREADY) begin
        M_AXI_RREADY <= 1'b1;  // 始终准备好接收读数据   
        biu_ready   <=1;   
        biu_rdata   <= M_AXI_RDATA;
        biu_rresp   <= M_AXI_RRESP;
    end
    else begin
        M_AXI_RREADY <= 1'b0; 
        biu_rdata<=biu_rdata;
        biu_ready<=0;
    end
end




endmodule