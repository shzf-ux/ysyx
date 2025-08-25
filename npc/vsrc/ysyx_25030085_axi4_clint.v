module ysyx_25030085_axi4_clint
(
    input               clock               ,
    input               reset               ,
    

    input       [31:0]  S_AXI_ARADDR        , 
    input               S_AXI_ARVALID       , 
    input       [3:0]   S_AXI_ARID          , 
    input       [7:0]   S_AXI_ARLEN         , 
    input       [2:0]   S_AXI_ARSIZE        , 
    input       [1:0]   S_AXI_ARBURST       , 
    output reg          S_AXI_ARREADY       , 
    
    // ----------------------
    // 读数据通道（AXI标准信号）
    // ----------------------
    output reg  [31:0]  S_AXI_RDATA         , 
    output reg  [1:0]   S_AXI_RRESP         , 
    output reg          S_AXI_RVALID        , 
    output reg  [3:0]   S_AXI_RID           , 
    output reg          S_AXI_RLAST         , 
    input               S_AXI_RREADY          
);


wire         AR_active;  // 读地址握手成功
wire         R_active;   // 读数据握手成功

assign AR_active = S_AXI_ARVALID & S_AXI_ARREADY;
assign R_active  = S_AXI_RVALID  & S_AXI_RREADY;


reg [63:0] mtime;
always @(posedge clock or posedge reset) begin
    if (reset) begin
        mtime <= 64'h0;
    end else begin
        mtime <= mtime + 1'b1;  // 每时钟周期递增1
    end
end



// 读地址通道逻辑

always @(posedge clock or posedge reset) begin
    if (reset) begin
        S_AXI_ARREADY <= 1'b0;
    end else begin
        if (S_AXI_ARVALID && !S_AXI_ARREADY ) begin
            if (S_AXI_ARLEN == 8'd0 && S_AXI_ARSIZE == 3'b010) begin
                S_AXI_ARREADY <= 1'b1;  // 参数合法，允许握手
            end else begin
                S_AXI_ARREADY <= 1'b0;  
            end
        end else begin
            S_AXI_ARREADY <= 1'b0;  // 其他情况不就绪
        end
    end
end



always @(posedge clock or posedge reset) begin
    if (reset) begin
        S_AXI_RDATA  <= 32'h0;
        S_AXI_RRESP  <= 2'b00;  // 响应：OKAY
        S_AXI_RVALID <= 1'b0;
        S_AXI_RID    <= 4'h0;
        S_AXI_RLAST  <= 1'b0;
    end else if (AR_active) begin
        // 地址握手成功后，驱动读数据信号
        S_AXI_RDATA  <= mtime[31:0];  // 返回mtime低32位
        S_AXI_RRESP  <= 2'b00;        // 响应：OKAY（成功）
        S_AXI_RVALID <= 1'b1;         // 数据有效
        S_AXI_RID    <= S_AXI_ARID;   // 响应ID与请求ID一致
        S_AXI_RLAST  <= 1'b1;         // 单周期读，最后一个数据标记为1
    end else if (R_active) begin
        // 数据握手成功后，清除有效信号
        S_AXI_RVALID <= 1'b0;
        S_AXI_RLAST  <= 1'b0;
    end
    // 其他情况保持信号不变（避免latch）
end


endmodule