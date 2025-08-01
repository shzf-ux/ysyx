module ysyx_25030085_lsbiu_axi4_lite_master #(
    parameter READ_MAX_DELAY  = 20,  // 随机延迟最大值
    parameter WRITE_MAX_DELAY = 40 , // 随机延迟最大值
    parameter LFSR_WIDTH =8
)(
    input               clk         ,
    input               rst         ,  
    
    // 与LSU交互的信号
    input       [31:0]  lsu_addr    ,
    input               lsu_wwe     ,
    input               lsu_rwe     ,
    input       [31:0]  lsu_wdata   ,
    input       [3:0]   lsu_strb    ,
    input               lsu_req     ,       //请求信号

    output reg  [31:0]  biu_rdata   ,
    output reg  [1:0]   biu_wresp   ,
    output reg  [1:0]   biu_rresp   ,   
    output reg          biu_valid   ,       //数据有效

    
    // AXI4-Lite Master接口信号
    //读地址
    output reg  [31:0]  M_AXI_ARADDR,
    output reg          M_AXI_ARVALID,
    input               M_AXI_ARREADY,

    //读数据
    input       [31:0]  M_AXI_RDATA ,
    input       [1:0]   M_AXI_RRESP ,
    input               M_AXI_RVALID,
    output reg          M_AXI_RREADY,
    
    //写地址
    output reg  [31:0]  M_AXI_AWADDR,
    output reg          M_AXI_AWVALID,
    input               M_AXI_AWREADY,
    
    //写数据
    output reg  [31:0]  M_AXI_WDATA ,
    output reg  [3:0]   M_AXI_WSTRB ,
    output reg          M_AXI_WVALID,
    input               M_AXI_WREADY,

    //写响应
    input       [1:0]   M_AXI_BRESP ,
    input               M_AXI_BVALID,
    output reg          M_AXI_BREADY
);

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

    // 读延迟计数器
    reg [LFSR_WIDTH-1:0] read_cnt;
    reg                  read_pending;  // 读地址请求挂起标志  

    reg [LFSR_WIDTH-1:0] write_addr_cnt;
    reg                  write_addr_pending;  // 写地址请求挂起标志  

    reg [LFSR_WIDTH-1:0] write_data_cnt;
    reg                  write_data_pending;  // 写数据请求挂起标志  


    //LFSR模块（生成伪随机数）
    reg [LFSR_WIDTH-1:0] lfsr_addr;         //最大为8位
    reg [LFSR_WIDTH-1:0] lfsr_data;         //最大为8位
    wire      lfsrr_feedback;
    wire      lfsrw_feedback;

    // 反馈多项式：x^8 + x^6 + x^5 + x^4 + 1（
    assign lfsrr_feedback = lfsr_addr[7] ^ lfsr_addr[5] ^ lfsr_addr[4] ^ lfsr_addr[3];
    assign lfsrw_feedback = lfsr_data[7] ^ lfsr_data[4] ^ lfsr_data[3] ^ lfsr_data[2];
    // LFSR更新逻辑
    always @(posedge clk or negedge rst) begin
        if (rst) begin
            lfsr_addr <= 8'h01;  // 初始值不能为全0，否则会锁定
            lfsr_data <= 8'h02;
        end else begin
            lfsr_addr <= {lfsr_addr[6:0], lfsrr_feedback};  // 左移一位，补反馈位
            lfsr_data <= {lfsr_data[6:0], lfsrw_feedback};
        end
    end
    wire [LFSR_WIDTH-1:0] read_rand_delay  = lfsr_addr % READ_MAX_DELAY;  // 取低5位并限制范围
    wire [LFSR_WIDTH-1:0] write_rand_delay = lfsr_data % WRITE_MAX_DELAY;  // 取低5位并限制范围



// 读地址通道
always @(posedge clk or negedge rst) begin
    if (rst) begin
        M_AXI_ARADDR <= 32'h0;
        M_AXI_ARVALID <= 1'b0;
    end else if (lsu_req &&lsu_rwe&&!M_AXI_ARVALID && !M_AXI_AWVALID&&!read_pending) begin
        read_pending<=1;
        read_cnt    <=0;
    end
    else if(read_pending&&read_cnt<read_rand_delay)begin
        read_cnt<=read_cnt+1;       
    end 
    else if(read_pending&&read_cnt==read_rand_delay)begin
        M_AXI_ARVALID<=1;
        M_AXI_ARADDR<=lsu_addr;
        read_pending<=0;
        read_cnt    <=0;      
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
        biu_rdata <= M_AXI_RDATA;
        biu_rresp <= M_AXI_RRESP;
        biu_valid <= 1          ;
    end
    else begin
        M_AXI_RREADY <= 1'b0;
        biu_valid    <= 0   ; 
        biu_rresp    <=0;
    end
end


// 写地址通道
always @(posedge clk or negedge rst) begin
    if (rst) begin
        M_AXI_AWADDR <= 32'h0;
        M_AXI_AWVALID <= 1'b0;
    end else if (lsu_req && lsu_wwe && !M_AXI_AWVALID && !M_AXI_ARVALID&&!write_addr_pending) begin
        write_addr_pending<=1;
        write_data_cnt <=0;
    end
    else if(write_addr_pending&&write_data_cnt<write_rand_delay)begin
        write_data_cnt <=write_data_cnt+1;
    end 
    else if(write_addr_pending&&write_data_cnt==write_rand_delay)begin
        write_addr_pending<=0;
        write_data_cnt    <=0;
        M_AXI_AWADDR      <= lsu_addr;
        M_AXI_AWVALID <= 1'b1;  
    end
    else if (AW_active) begin
        M_AXI_AWVALID <= 1'b0;
    end
end



// 写数据通道
always @(posedge clk or negedge rst) begin
    if (rst) begin
        M_AXI_WDATA <= 32'h0;
        M_AXI_WSTRB <= 4'h0;
        M_AXI_WVALID <= 1'b0;
    end else if (lsu_req && lsu_wwe && !M_AXI_WVALID) begin
        M_AXI_WDATA <= lsu_wdata;
        M_AXI_WSTRB <= lsu_strb;
        M_AXI_WVALID <= 1'b1;
    end else if (W_active) begin
        M_AXI_WVALID <= 1'b0;
    end
end

// 写响应通道
always @(posedge clk or negedge rst) begin
    if (rst) begin
        M_AXI_BREADY <= 1'b0;
        biu_valid    <= 0   ;
    end 
    else if(M_AXI_BVALID&!M_AXI_BREADY)begin
        M_AXI_BREADY <= 1'b1;
        biu_wresp<=M_AXI_BRESP ;
        biu_valid <= 1      ;
    end
    else begin
       M_AXI_BREADY <= 1'b0; 
       biu_wresp    <=0;
    end
end




endmodule
