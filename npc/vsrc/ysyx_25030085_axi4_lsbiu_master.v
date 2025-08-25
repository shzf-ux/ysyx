
`include "define.vh"

module ysyx_25030085_lsbiu_axi4_lite_master #(
    parameter READ_MAX_DELAY  = 20,  // 随机延迟最大值
    parameter WRITE_MAX_DELAY = 20 , // 随机延迟最大值
    parameter LFSR_WIDTH =8
)(
    input               clock         ,
    input               reset         ,  
    
    // 与LSU交互的信号
    input       [31:0]  lsu_addr    ,
    input               lsu_wwe     ,
    input               lsu_rwe     ,
    input       [31:0]  lsu_wdata   ,
    input       [3:0]   lsu_strb    ,
    input               lsu_req     ,       //请求信号
    input       [2:0]   lsu_arsize  ,   
    input       [2:0]   lsu_awsize  ,

    output reg  [31:0]  biu_rdata   ,
    output reg          biu_wresp   ,       //写响应
    output reg          biu_rresp   ,       //读响应


    
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
    input               M_AXI_RLAST     ,//是否最后一个数据，0表示数据未处理，1表示最后一个数据

    
    //************写地址通道*************//
    output reg  [31:0]  M_AXI_AWADDR,
    output reg          M_AXI_AWVALID,
    input               M_AXI_AWREADY,
    //***********新增信号***************//
    output reg  [3:0]   M_AXI_AWID      , //写事务id，为乱序传输发起的多个请求分配id
    output reg  [1:0]   M_AXI_AWBURST   , //写突发类型，设置01，每次按照arsize大小递增度对地址读取
    output reg  [7:0]   M_AXI_AWLEN     , //突发长度，一次读取的地址数-1，传输1个数据设置0；
    output reg  [2:0]   M_AXI_AWSIZE    , //数据字节数，1表示写1个字节  

    
    //************写数据通道*************//
    output reg  [31:0]  M_AXI_WDATA     ,
    output reg  [3:0]   M_AXI_WSTRB     ,
    output reg          M_AXI_WVALID    ,
    input               M_AXI_WREADY    ,
   //***********新增信号***************//  
    output              M_AXI_WLAST     ,//发送数据的一方来确定last信号

    //写响应
    input       [1:0]   M_AXI_BRESP     ,
    input               M_AXI_BVALID    ,
    output reg          M_AXI_BREADY    ,
    input       [3:0]   M_AXI_BID
);
    parameter UART_ADDR_LOW  = 32'h10000000;  // 范围起始地址
    parameter UART_ADDR_HIGH = 32'h10000FFF;  // 范围结束地址

    wire         AW_active              ;
    wire         W_active               ;
    wire         B_active               ;
    wire         AR_active              ;
    wire         R_active               ;



    assign       AW_active = M_AXI_AWVALID & M_AXI_AWREADY;
    assign       W_active  = M_AXI_WVALID  & M_AXI_WREADY;    
    assign       B_active  = M_AXI_BREADY  & M_AXI_BVALID;

    assign       AR_active = M_AXI_ARVALID & M_AXI_ARREADY;     //读
    assign       R_active  = M_AXI_RVALID  & M_AXI_RREADY ;  

    reg [3:0]  strb_reg;//无延迟可以不加  //锁存strb，这个只持续1周期  
    reg [2:0]  awsize_reg;
    reg [2:0]  arsize_reg;
    reg [31:0] wdata_reg; //锁存strb，这个只持续1周期 

    // 读延迟计数器
    reg [LFSR_WIDTH-1:0] read_cnt;
    reg                  read_pending;  // 读地址请求挂起标志  

    reg [LFSR_WIDTH-1:0] write_addr_cnt;
    reg                  write_addr_pending;  // 写地址请求挂起标志  

    reg [LFSR_WIDTH-1:0] write_data_cnt;
    reg                  write_data_pending;  // 写数据请求挂起标志  



    wire is_uart_addr;
    assign is_uart_addr=(lsu_addr>=UART_ADDR_LOW)&&(lsu_addr<=UART_ADDR_HIGH);




    //LFSR模块（生成伪随机数）
    reg [LFSR_WIDTH-1:0] lfsr_addr;         //最大为8位
    reg [LFSR_WIDTH-1:0] lfsr_data;         //最大为8位
    wire      lfsrr_feedback;
    wire      lfsrw_feedback;

    // 反馈多项式：x^8 + x^6 + x^5 + x^4 + 1（
    assign lfsrr_feedback = lfsr_addr[7] ^ lfsr_addr[5] ^ lfsr_addr[4] ^ lfsr_addr[3];
    assign lfsrw_feedback = lfsr_data[7] ^ lfsr_data[4] ^ lfsr_data[3] ^ lfsr_data[2];
    // LFSR更新逻辑
    always @(posedge clock or negedge reset) begin
        if (reset) begin
            lfsr_addr <= 8'h01;  // 初始值不能为全0，否则会锁定
            lfsr_data <= 8'h02;
        end else begin
            lfsr_addr <= {lfsr_addr[6:0], lfsrr_feedback};  // 左移一位，补反馈位
            lfsr_data <= {lfsr_data[6:0], lfsrw_feedback};
        end
    end


// LFSR生成的随机延迟（根据宏控制是否为0）
wire [LFSR_WIDTH-1:0] read_rand_delay  = 
    `ifdef DISABLE_LS_DELAY 
        0  // 宏定义时，读延迟强制为0
    `else 
        lfsr_addr % READ_MAX_DELAY  // 宏未定义时，使用随机延迟
    `endif;

wire [LFSR_WIDTH-1:0] write_rand_delay = 
    `ifdef DISABLE_LS_DELAY 
        0  // 宏定义时，写延迟强制为0
    `else 
        lfsr_data % WRITE_MAX_DELAY  // 宏未定义时，使用随机延迟
    `endif;



// 读地址通道（单周期传输专用）
//读单子节size为0
// 补充AR_active定义：地址通道握手成功（主设备有效且从设备就绪）
assign AR_active = M_AXI_ARVALID && M_AXI_ARREADY;

always @(posedge clock or negedge reset) begin
    if (reset) begin  
        M_AXI_ARADDR  <= 32'h0;
        M_AXI_ARVALID <= 1'b0;
        M_AXI_ARBURST <= 2'b01;  // 固定为递增模式（单周期传输可固定）
        M_AXI_ARLEN   <= 8'd0;   // 固定为单周期（传输1个数据，ARLEN = 0）
        M_AXI_ARSIZE  <= 3'd2;   //3'd2对应4字节
        read_pending  <= 1'b0;
        read_cnt      <= 8'd0;     
    end 
    // 触发读请求：当有读请求且当前无读写操作、无未完成读请求时
    else if (lsu_req && lsu_rwe && !M_AXI_ARVALID && !M_AXI_AWVALID && !read_pending) begin
        read_pending <= 1'b1; 
        read_cnt     <= 8'd0; 
        arsize_reg <=lsu_arsize;
    end
    // 延迟处理（如果启用）
    `ifndef DISABLE_LS_DELAY
    else if (read_pending && read_cnt < read_rand_delay) begin
        read_cnt <= read_cnt + 1'b1;  // 延迟计数递增
    end
    `endif
    // 延迟结束，发起读地址请求
    else if (read_pending && read_cnt == read_rand_delay) begin
        M_AXI_ARVALID <= 1'b1;    
        M_AXI_ARADDR  <= lsu_addr;
        read_pending  <= 1'b0;    
        read_cnt      <= 8'd0;   
        M_AXI_ARSIZE  <= arsize_reg;
    end
    
    else if (AR_active) begin
        M_AXI_ARVALID <= 1'b0;   
    end
end
    



// 读数据通道 
always @(posedge clock or negedge reset) begin
    if (reset) begin
        M_AXI_RREADY <= 1'b0;
        biu_rdata <= 32'h0;
    end
    else if(M_AXI_RVALID&!M_AXI_RREADY) begin
        M_AXI_RREADY <= 1'b1;  // 始终准备好接收读数据      
        biu_rdata <= M_AXI_RDATA;
        biu_rresp <= M_AXI_RRESP==2'b00 ?  1 : 0;
    end
    else begin
        M_AXI_RREADY <= 1'b0;
        biu_rresp    <=0;
    end
end

// 写地址通道
always @(posedge clock or negedge reset) begin
    if (reset) begin
        M_AXI_AWADDR  <= 32'h0;
        M_AXI_AWVALID <= 1'b0;
        M_AXI_AWBURST <= 2'b01;
        M_AXI_AWLEN   <= 8'd0; 
        M_AXI_AWSIZE  <= 3'd2; 
        write_addr_pending<=0;
        write_addr_cnt    <=0;
    end else if (lsu_req && lsu_wwe && !M_AXI_AWVALID && !M_AXI_ARVALID&&!write_addr_pending) begin
        write_addr_pending<=1;
        write_addr_cnt    <=0;
        awsize_reg<=lsu_awsize;
    end

    `ifndef DISABLE_LS_DELAY
        else if(write_addr_pending&&write_addr_cnt<read_rand_delay)begin
            write_addr_cnt <=write_addr_cnt+1;
        end 
    `endif 

    else if(write_addr_pending&&write_addr_cnt==read_rand_delay)begin
        write_addr_pending<=0;
        write_addr_cnt    <=0;
        M_AXI_AWADDR      <= lsu_addr;
        M_AXI_AWVALID     <= 1'b1;  
        M_AXI_AWLEN       <= 8'd0; 
        M_AXI_AWSIZE      <= awsize_reg; 
    end
    else if (AW_active) begin
        M_AXI_AWVALID <= 1'b0;
    end
end



// 写数据通道
always @(posedge clock or negedge reset) begin
    if (reset) begin
        M_AXI_WDATA     <= 32'h0;
        M_AXI_WSTRB     <= 4'h0;
        M_AXI_WVALID    <= 1'b0;
        M_AXI_WLAST     <= 1'b0;
    end else if (lsu_req && lsu_wwe && !M_AXI_WVALID&&!write_data_pending) begin
        strb_reg<=lsu_strb ;          //锁存strb，这个只持续1周期
        wdata_reg<=lsu_wdata;
        write_data_pending<=1;
        write_data_cnt<=0;
    end

    `ifndef DISABLE_LS_DELAY
        else if(write_data_pending&&write_data_cnt<write_rand_delay)begin
            write_data_cnt<=write_data_cnt+1;
        end
    `endif 

    else if(write_data_pending&&write_data_cnt==write_rand_delay)begin
        write_data_pending  <=  0           ;
        write_data_cnt      <=  0           ;
        M_AXI_WDATA         <=  wdata_reg   ;
        M_AXI_WSTRB         <=  strb_reg    ;
        M_AXI_WVALID        <=  1'b1        ;
        M_AXI_WLAST         <=  1'b1        ;       //仅1个数据，因此wlast置1
    end
    else if (W_active) begin
        M_AXI_WVALID <= 1'b0;
    end
    else begin
        M_AXI_WLAST    <= 1'b0;
    end
end



always @(posedge clock or negedge reset) begin
    if (reset) begin
        M_AXI_BREADY <= 1'b0;      
    end 
    else begin        // 始终准备好接收响应,而不是valid置位才ready置，那1111                             
        M_AXI_BREADY <= 1'b1;  
       
        if (M_AXI_BVALID && M_AXI_BREADY) begin
            biu_wresp <= (M_AXI_BRESP==2'b00) ? 1 : 0;
        end
    end
end










endmodule
