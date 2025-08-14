module ysyx_25030085_arbiter#(
    parameter RTC_ADDR = 32'ha0000048  // RTC地址（仅支持读）
)(
    // 全局信号
    input               clock             ,
    input               reset             ,

    // IF Master 接口
    input               if_arvalid      ,  // 读地址有效
    output reg          if_arready      ,  // 读地址就绪
    input       [31:0]  if_araddr       ,  // 读地址
    input       [3:0]   if_arid         ,  // 读事务ID
    input       [7:0]   if_arlen        ,  // 突发长度
    input       [2:0]   if_arsize       ,  // 数据位宽
    input       [1:0]   if_arburst      ,  // 突发类型

    output reg          if_rvalid       ,  // 读数据有效
    input               if_rready       ,  // 读数据就绪
    output reg [31:0]   if_rdata        ,  // 读数据
    output reg [1:0]    if_rresp        ,  // 读响应
    output reg [3:0]    if_rid          ,  // 读响应ID
    output reg          if_rlast        ,  // 读最后一个数据
    
    // LS Master 接口
    input               ls_arvalid      ,  // 读地址有效
    output reg          ls_arready      ,  // 读地址就绪
    input       [31:0]  ls_araddr       ,  // 读地址
    input       [3:0]   ls_arid         ,  // 读事务ID
    input       [7:0]   ls_arlen        ,  // 突发长度
    input       [2:0]   ls_arsize       ,  // 数据位宽
    input       [1:0]   ls_arburst      ,  // 突发类型
   
    output reg          ls_rvalid       ,  // 读数据有效
    input               ls_rready       ,  // 读数据就绪
    output reg [31:0]   ls_rdata        ,  // 读数据
    output reg [1:0]    ls_rresp        ,  // 读响应
    output reg [3:0]    ls_rid          ,  // 读响应ID
    output reg          ls_rlast        ,  // 读最后一个数据

    // LS Write 通道
    input               ls_awvalid      ,  // 写地址有效
    output reg          ls_awready      ,  // 写地址就绪
    input       [31:0]  ls_awaddr       ,  // 写地址
    input       [3:0]   ls_awid         ,  // 写事务ID
    input       [7:0]   ls_awlen        ,  // 突发长度
    input       [2:0]   ls_awsize       ,  // 数据位宽
    input       [1:0]   ls_awburst      ,  // 突发类型
    
    input               ls_wvalid       ,  // 写数据有效
    output reg          ls_wready       ,  // 写数据就绪
    input       [31:0]  ls_wdata        ,  // 写数据
    input       [3:0]   ls_wstrb        ,  // 写字节选通
    input               ls_wlast        ,  // 写最后一拍标记
    
    output reg          ls_bvalid       ,  // 写响应有效
    input               ls_bready       ,  // 写响应就绪
    output reg [1:0]    ls_bresp        ,  // 写响应
    output reg [3:0]    ls_bid          ,  // 写响应ID
    
    // XBAR 从设备侧（RTC）
    output reg  [31:0]  rtc_araddr      ,    // RTC读地址
    output reg          rtc_arvalid     ,    // RTC读地址有效
    output reg  [3:0]   rtc_arid        ,    // RTC读事务ID
    output reg  [7:0]   rtc_arlen       ,    // RTC突发长度
    output reg  [2:0]   rtc_arsize      ,    // RTC数据位宽
    output reg  [1:0]   rtc_arburst     ,    // RTC突发类型
    input               rtc_arready     ,    // RTC读地址就绪

    input       [31:0]  rtc_rdata       ,    // RTC返回的读数据
    input               rtc_rvalid      ,    // RTC读数据有效
    input       [1:0]   rtc_rresp       ,    // RTC读响应
    input               rtc_rlast       ,    // RTC读最后一个数据
    input       [3:0]   rtc_rid         ,    // RTC读响应ID
    output reg          rtc_rready      ,    // RTC读数据就绪

    // XBAR 从设备侧（SOC）
    output reg  [31:0]  soc_awaddr      ,    // SOC写地址
    output reg          soc_awvalid     ,    // SOC写地址有效
    output reg  [3:0]   soc_awid        ,    // SOC写事务ID
    output reg  [7:0]   soc_awlen       ,    // SOC突发长度
    output reg  [2:0]   soc_awsize      ,    // SOC数据位宽
    output reg  [1:0]   soc_awburst     ,    // SOC突发类型
    input               soc_awready     ,    // SOC写地址就绪

    output reg  [31:0]  soc_wdata       ,    // SOC写数据
    output reg  [3:0]   soc_wstrb       ,    // SOC写字节选通
    output reg          soc_wvalid      ,    // SOC写数据有效
    output reg          soc_wlast       ,    // SOC最后一个写数据
    input               soc_wready      ,    // SOC写数据就绪

    input       [1:0]   soc_bresp       ,    // SOC写响应
    input               soc_bvalid      ,    // SOC写响应有效
    input       [3:0]   soc_bid         ,    // SOC响应ID
    output reg          soc_bready      ,    // SOC写响应就绪

    output reg  [31:0]  soc_araddr      ,    // SOC读地址
    output reg          soc_arvalid     ,    // SOC读地址有效
    output reg  [3:0]   soc_arid        ,    // SOC读事务ID
    output reg  [7:0]   soc_arlen       ,    // SOC突发长度
    output reg  [2:0]   soc_arsize      ,    // SOC数据位宽
    output reg  [1:0]   soc_arburst     ,    // SOC突发类型
    input               soc_arready     ,    // SOC读地址就绪

    input       [31:0]  soc_rdata       ,    // SOC返回的读数据
    input               soc_rvalid      ,    // SOC读数据有效
    input       [1:0]   soc_rresp       ,    // SOC读响应
    input               soc_rlast       ,    // SOC读最后一个数据
    input       [3:0]   soc_rid         ,    // SOC读响应ID
    output reg          soc_rready        // SOC读数据就绪
);  


localparam IDLE       = 3'b000;
localparam IF_MASTER  = 3'b001;  // IF读占用总线
localparam LS_READ    = 3'b010;  // LS读占用总线


reg [2:0] state, next_state; 

// 状态转换逻辑（优先级：IF读 > LS写 > LS读）
always @(*) begin
    case (state)
        IDLE: begin
            if (if_arvalid) begin
                next_state = IF_MASTER;
            end
            else if (ls_arvalid) begin  // LS有读请求
                next_state = LS_READ;
            end
            else begin
                next_state = IDLE;
            end
        end

        IF_MASTER: begin
            // IF读完成（最后一拍数据握手）
            if (if_rvalid && if_rready && if_rlast) begin
                if (if_arvalid) next_state = IF_MASTER;
                else if (ls_arvalid) next_state = LS_READ;
                else next_state = IDLE;
            end
            else next_state = IF_MASTER;  
        end

        LS_READ: begin
            if (ls_rvalid && ls_rready && ls_rlast) begin
                if (if_arvalid) next_state = IF_MASTER;
                else if (ls_arvalid) next_state = LS_READ;
                else next_state = IDLE;
            end
            else next_state = LS_READ;
        end

        default: next_state = IDLE;
    endcase
end

// 状态寄存器时序
always @(posedge clock or posedge reset) begin
    if (reset) state <= IDLE;
    else state <= next_state;
end



reg       is_rtc;    // 读地址是否指向RTC
reg       is_soc;    // 地址是否指向SOC

always @(*) begin
    is_rtc = 1'b0;
    is_soc = 1'b1;

    // 仅读事务需要判断RTC地址
    if (state == IF_MASTER) begin
        is_rtc = (if_araddr == RTC_ADDR);  // IF读的地址是否为RTC
        is_soc = !is_rtc;
    end
    else if (state == LS_READ) begin
        is_rtc = (ls_araddr == RTC_ADDR);  // LS读的地址是否为RTC
        is_soc = !is_rtc;
    end
end



// 1. 读地址通道（转发到RTC/SOC）
always @(*) begin
    // 默认值（所有信号无效）
    rtc_arvalid = 1'b0;
    rtc_araddr  = 32'h0;
    rtc_arid    = 4'h0;
    rtc_arlen   = 8'h0;
    rtc_arsize  = 3'h0;
    rtc_arburst = 2'h0;

    soc_arvalid = 1'b0;
    soc_araddr  = 32'h0;
    soc_arid    = 4'h0;
    soc_arlen   = 8'h0;
    soc_arsize  = 3'h0;
    soc_arburst = 2'h0;

    if_arready  = 1'b0;
    ls_arready  = 1'b0;

    case (state)
        IF_MASTER: begin  // IF读占用总线
            if (is_rtc) begin  // 读RTC
                rtc_arvalid = if_arvalid;
                rtc_araddr  = if_araddr;
                rtc_arid    = if_arid;
                rtc_arlen   = if_arlen;
                rtc_arsize  = if_arsize;
                rtc_arburst = if_arburst;
                if_arready  = rtc_arready;  // RTC就绪反馈给IF
            end
            else begin  // 读SOC
                soc_arvalid = if_arvalid;
                soc_araddr  = if_araddr;
                soc_arid    = if_arid;
                soc_arlen   = if_arlen;
                soc_arsize  = if_arsize;
                soc_arburst = if_arburst;
                if_arready  = soc_arready;  // SOC就绪反馈给IF
            end
        end

        LS_READ: begin  // LS读占用总线
            if (is_rtc) begin  // 读RTC
                rtc_arvalid = ls_arvalid;
                rtc_araddr  = ls_araddr;
                rtc_arid    = ls_arid;
                rtc_arlen   = ls_arlen;
                rtc_arsize  = ls_arsize;
                rtc_arburst = ls_arburst;
                ls_arready  = rtc_arready;  // RTC就绪反馈给LS
            end
            else begin  // 读SOC
                soc_arvalid = ls_arvalid;
                soc_araddr  = ls_araddr;
                soc_arid    = ls_arid;
                soc_arlen   = ls_arlen;
                soc_arsize  = ls_arsize;
                soc_arburst = ls_arburst;
                ls_arready  = soc_arready;  // SOC就绪反馈给LS
            end
        end
        default: ;  // 其他状态读地址无效
    endcase
end

//  读数据通道（从RTC/SOC转发到IF/LS）
always @(*) begin
    // 默认值（所有信号无效）
    if_rvalid  = 1'b0;
    if_rdata   = 32'h0;
    if_rresp   = 2'b00;
    if_rid     = 4'h0;
    if_rlast   = 1'b0;

    ls_rvalid  = 1'b0;
    ls_rdata   = 32'h0;
    ls_rresp   = 2'b00;
    ls_rid     = 4'h0;
    ls_rlast   = 1'b0;

    rtc_rready = 1'b0;
    soc_rready = 1'b0;

    case (state)
        IF_MASTER: begin  // IF读占用总线
            if (is_rtc) begin  // 从RTC读
                if_rvalid  = rtc_rvalid;
                if_rdata   = rtc_rdata;
                if_rresp   = rtc_rresp;
                if_rid     = rtc_rid;
                if_rlast   = rtc_rlast;
                rtc_rready = if_rready;  // IF就绪反馈给RTC
            end
            else begin  // 从SOC读
                if_rvalid  = soc_rvalid;
                if_rdata   = soc_rdata;
                if_rresp   = soc_rresp;
                if_rid     = soc_rid;
                if_rlast   = soc_rlast;
                soc_rready = if_rready;  // IF就绪反馈给SOC
            end
        end

        LS_READ: begin  // LS读占用总线
            if (is_rtc) begin  // 从RTC读
                ls_rvalid  = rtc_rvalid;
                ls_rdata   = rtc_rdata;
                ls_rresp   = rtc_rresp;
                ls_rid     = rtc_rid;
                ls_rlast   = rtc_rlast;
                rtc_rready = ls_rready;  // LS就绪反馈给RTC
            end
            else begin  // 从SOC读
                ls_rvalid  = soc_rvalid;
                ls_rdata   = soc_rdata;
                ls_rresp   = soc_rresp;
                ls_rid     = soc_rid;
                ls_rlast   = soc_rlast;
                soc_rready = ls_rready;  // LS就绪反馈给SOC
            end
        end
        default: ;  // 其他状态读数据无效
    endcase
end


assign soc_awvalid = ls_awvalid;
assign soc_awaddr  = ls_awaddr;
assign soc_awid    = ls_awid;
assign soc_awlen   = ls_awlen;
assign soc_awsize  = ls_awsize;
assign soc_awburst = ls_awburst;
assign ls_awready  = soc_awready;

// 2. 写数据通道（直接连接）
assign soc_wvalid = ls_wvalid;
assign soc_wdata  = ls_wdata;
assign soc_wstrb  = ls_wstrb;
assign soc_wlast  = ls_wlast;
assign ls_wready  = soc_wready;

// 3. 写响应通道（直接连接）
assign ls_bvalid  = soc_bvalid;
assign ls_bresp   = soc_bresp;
assign ls_bid     = soc_bid;
assign soc_bready = ls_bready;

endmodule