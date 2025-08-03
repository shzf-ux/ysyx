module ysyx_25030085_axi4_clint(
    input               clk                 ,
    input               rst                 ,
    
    // 读地址通道
    input       [31:0]  S_AXI_ARADDR        ,
    input               S_AXI_ARVALID       ,
    output reg          S_AXI_ARREADY       ,
    
    // 读数据通道
    output reg  [31:0]  S_AXI_RDATA         ,
    output reg  [1:0]   S_AXI_RRESP         ,   //读响应
    output reg          S_AXI_RVALID        ,
    input               S_AXI_RREADY        
);

    wire         AR_active              ;
    wire         R_active               ;
    assign       AR_active = S_AXI_ARVALID & S_AXI_ARREADY;     //读
    assign       R_active  = S_AXI_RVALID  & S_AXI_RREADY   ;

    reg [63:0]   mtime;


    //维护mtime时间
always @(posedge clk or posedge rst) begin
    if(rst)begin
        mtime<=0;
    end
    else begin
        mtime<=mtime+1;
    end
end


// 读地址通道
always @(posedge clk or negedge rst) begin
    if (rst) begin
        S_AXI_ARREADY<=0;
    end
    else if (S_AXI_ARVALID&!S_AXI_ARREADY)begin
        S_AXI_ARREADY<=1;
    end
    else begin
        S_AXI_ARREADY<=0;
    end
end

// 读数据通道握手
always @(posedge clk or negedge rst) begin
    if (rst) begin
        S_AXI_RDATA  <= 32'h0;
        S_AXI_RRESP  <= 2'b00;  // 初始化响应信号
    end
    else if(AR_active)begin                     //地址握手成功
        S_AXI_RDATA <=  mtime[31:0];            //读取时间
        S_AXI_RVALID<=1;
        S_AXI_RRESP<=2'b01;
    end
    else if(R_active)begin                  //数据握手成功
    S_AXI_RVALID<=0;
    end
    else begin
        S_AXI_RVALID <= S_AXI_RVALID;
        S_AXI_RDATA  <= S_AXI_RDATA;
        S_AXI_RRESP  <= 2'b00;
    end
end


endmodule