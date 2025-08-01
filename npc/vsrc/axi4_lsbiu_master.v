module ysyx_25030085_lsbiu_axi4_lite_master (
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


// 读地址通道
always @(posedge clk or negedge rst) begin
    if (rst) begin
        M_AXI_ARADDR <= 32'h0;
        M_AXI_ARVALID <= 1'b0;
    end else if (lsu_req &&lsu_rwe&&!M_AXI_ARVALID && !M_AXI_AWVALID) begin
        M_AXI_ARADDR <= lsu_addr;
        M_AXI_ARVALID <= 1'b1;
    end else if (AR_active) begin//地址握手成功置零
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
        biu_rresp    <= M_AXI_RRESP;
        biu_valid <= 1          ;
    end
    else begin
        M_AXI_RREADY <= 1'b0;
        biu_valid    <= 0   ; 
    end
end




// 写地址通道
always @(posedge clk or negedge rst) begin
    if (rst) begin
        M_AXI_AWADDR <= 32'h0;
        M_AXI_AWVALID <= 1'b0;
    end else if (lsu_req && lsu_wwe && !M_AXI_AWVALID && !M_AXI_ARVALID) begin
        M_AXI_AWADDR <= lsu_addr;
        M_AXI_AWVALID <= 1'b1;
    end else if (AW_active) begin
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
       biu_valid    <= 0   ;
    end
end




endmodule
