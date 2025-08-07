// Xbar模块（RTC仅支持读，SOC支持完整读写）- 扩充主机侧输入信号
module ysyx_25030085_xbar#(
    parameter RTC_ADDR = 32'ha0000048  // RTC地址（仅支持读）
)(
    input               clock             ,
    input               reset             ,

    // ----------------------
    // 主机侧写地址通道（扩充输入信号）
    // ----------------------
    input       [31:0]  m_awaddr        ,    // 写地址
    input               m_awvalid       ,    // 写地址有效
    input       [3:0]   m_awid          ,    // 写事务ID（新增）
    input       [7:0]   m_awlen         ,    // 突发长度（新增）
    input       [2:0]   m_awsize        ,    // 数据位宽（新增）
    input       [1:0]   m_awburst       ,    // 突发类型（新增）
    output reg          m_awready       ,    // 写地址就绪

    // ----------------------
    // 主机侧写数据通道（扩充输入信号）
    // ----------------------
    input       [31:0]  m_wdata         ,    // 写数据
    input       [3:0]   m_wstrb         ,    // 写字节选通
    input               m_wvalid        ,    // 写数据有效
    input               m_wlast         ,    // 最后一个写数据（新增）
    output reg          m_wready        ,    // 写数据就绪

    // ----------------------
    // 主机侧写响应通道
    // ----------------------
    output reg  [1:0]   m_bresp         ,    // 写响应
    output reg          m_bvalid        ,    // 写响应有效
    output reg  [3:0]   m_bid           ,    // 响应事务ID（新增）
    input               m_bready        ,    // 写响应就绪

    // ----------------------
    // 主机侧读地址通道（扩充输入信号）
    // ----------------------
    input       [31:0]  m_araddr        ,    // 读地址
    input               m_arvalid       ,    // 读地址有效
    input       [3:0]   m_arid          ,    // 读事务ID（新增）
    input       [7:0]   m_arlen         ,    // 突发长度（新增）
    input       [2:0]   m_arsize        ,    // 数据位宽（新增）
    input       [1:0]   m_arburst       ,    // 突发类型（新增）
    output reg          m_arready       ,    // 读地址就绪

    // ----------------------
    // 主机侧读数据通道
    // ----------------------
    input  reg           m_rready        ,    // 主机准备接收读数据
    output       [31:0]  m_rdata         ,    // 读数据（从设备返回）
    output               m_rvalid        ,    // 读数据有效
    output       [1:0]   m_rresp         ,    // 读响应
    output               m_rlast         ,    // 读最后一个数据标记
    output       [3:0]   m_rid           ,    // 读响应事务ID（新增）


    // ----------------------
    // 从设备侧（RTC）：仅读通道
    // ----------------------
    output reg  [31:0]  rtc_araddr      ,    // RTC读地址
    output reg          rtc_arvalid     ,    // RTC读地址有效
    output reg  [3:0]   rtc_arid        ,    // RTC读事务ID（新增）
    output reg  [7:0]   rtc_arlen       ,    // RTC突发长度（新增）
    output reg  [2:0]   rtc_arsize      ,    // RTC数据位宽（新增）
    output reg  [1:0]   rtc_arburst     ,    // RTC突发类型（新增）
    input               rtc_arready     ,    // RTC读地址就绪

    input       [31:0]  rtc_rdata       ,    // RTC返回的读数据
    input               rtc_rvalid      ,    // RTC读数据有效
    input       [1:0]   rtc_rresp       ,    // RTC读响应
    input               rtc_rlast       ,    // RTC读最后一个数据
    input       [3:0]   rtc_rid         ,    // RTC读响应ID（新增）
    output reg          rtc_rready      ,    // RTC读数据就绪（主机侧控制）


    // ----------------------
    // 从设备侧（SOC）：完整读写通道
    // ----------------------
    // SOC写地址通道
    output reg  [31:0]  soc_awaddr      ,    // SOC写地址
    output reg          soc_awvalid     ,    // SOC写地址有效
    output reg  [3:0]   soc_awid        ,    // SOC写事务ID（新增）
    output reg  [7:0]   soc_awlen       ,    // SOC突发长度（新增）
    output reg  [2:0]   soc_awsize      ,    // SOC数据位宽（新增）
    output reg  [1:0]   soc_awburst     ,    // SOC突发类型（新增）
    input               soc_awready     ,    // SOC写地址就绪

    // SOC写数据通道
    output reg  [31:0]  soc_wdata       ,    // SOC写数据
    output reg  [3:0]   soc_wstrb       ,    // SOC写字节选通
    output reg          soc_wvalid      ,    // SOC写数据有效
    output reg          soc_wlast       ,    // SOC最后一个写数据（新增）
    input               soc_wready      ,    // SOC写数据就绪

    // SOC写响应通道
    input       [1:0]   soc_bresp       ,    // SOC写响应
    input               soc_bvalid      ,    // SOC写响应有效
    input       [3:0]   soc_bid         ,    // SOC响应ID（新增）
    output reg          soc_bready      ,    // SOC写响应就绪（主机侧控制）

    // SOC读地址通道
    output reg  [31:0]  soc_araddr      ,    // SOC读地址
    output reg          soc_arvalid     ,    // SOC读地址有效
    output reg  [3:0]   soc_arid        ,    // SOC读事务ID（新增）
    output reg  [7:0]   soc_arlen       ,    // SOC突发长度（新增）
    output reg  [2:0]   soc_arsize      ,    // SOC数据位宽（新增）
    output reg  [1:0]   soc_arburst     ,    // SOC突发类型（新增）
    input               soc_arready     ,    // SOC读地址就绪

    // SOC读数据通道
    input       [31:0]  soc_rdata       ,    // SOC返回的读数据
    input               soc_rvalid      ,    // SOC读数据有效
    input       [1:0]   soc_rresp       ,    // SOC读响应
    input               soc_rlast       ,    // SOC读最后一个数据
    input       [3:0]   soc_rid         ,    // SOC读响应ID（新增）
    output reg          soc_rready        // SOC读数据就绪（主机侧控制）
);

// ----------------------
// 设备类型与地址译码
// ----------------------
localparam DEV_NONE = 2'b00;
localparam DEV_SOC  = 2'b01;
localparam DEV_RTC  = 2'b10;

reg       is_rtc;    // 地址是否指向RTC（仅用于读）
reg       is_soc;    // 地址是否指向SOC（读写共用）

always @(*) begin
    // 读地址译码：区分RTC和SOC
    is_rtc  = (m_araddr == RTC_ADDR);
    is_soc  = !is_rtc;  // 非RTC地址均为SOC（包括读写）

    // 写地址强制指向SOC（RTC无写通道，写RTC地址视为无效）
    if (m_awvalid) begin
        is_soc = 1'b1;  // 写操作仅SOC有效
        is_rtc = 1'b0;  // 写RTC地址视为无效
    end
end



// 写通道逻辑（仅SOC有效）

localparam W_IDLE = 3'd0;
localparam W_AW   = 3'd1;
localparam W_W    = 3'd2;
localparam W_B    = 3'd3;

reg [2:0] w_state, w_next_state;

// 写状态机：仅处理SOC写操作
always @(posedge clock or posedge reset) begin
    if (reset) begin
        w_state <= W_IDLE;
    end else begin
        w_state <= w_next_state;
    end
end

// 写状态转换
always @(*) begin
    case (w_state)
        W_IDLE: w_next_state = m_awvalid ? W_AW : W_IDLE;  // 检测到写请求
        W_AW:   w_next_state = (m_awvalid & m_awready) ? W_W : W_AW;  // 地址握手成功
        W_W:    w_next_state = (m_wvalid & m_wready) ? W_B : W_W;     // 数据握手成功
        W_B:    w_next_state = (m_bvalid & m_bready) ? W_IDLE : W_B;  // 响应握手成功
        default: w_next_state = W_IDLE;
    endcase
end

// 写地址通道（仅转发到SOC，包含新增控制信号）
always @(*) begin
    soc_awvalid = 1'b0;
    soc_awaddr  = 32'h0;
    soc_awid    = 4'h0;
    soc_awlen   = 8'h0;
    soc_awsize  = 3'h0;
    soc_awburst = 2'h0;
    m_awready   = 1'b0;

    if (w_state == W_AW) begin
        soc_awvalid = m_awvalid;
        soc_awaddr  = m_awaddr;
        soc_awid    = m_awid;      // 转发写事务ID
        soc_awlen   = m_awlen;     // 转发突发长度
        soc_awsize  = m_awsize;    // 转发数据位宽
        soc_awburst = m_awburst;   // 转发突发类型
        m_awready   = soc_awready; // SOC就绪反馈给主机
    end
end

// 写数据通道（仅转发到SOC）
always @(*) begin
    soc_wvalid = 1'b0;
    soc_wdata  = 32'h0;
    soc_wstrb  = 4'h0;
    soc_wlast  = 1'b0;
    m_wready   = 1'b0;

    if (w_state == W_W) begin
        soc_wvalid = m_wvalid;
        soc_wdata  = m_wdata;
        soc_wstrb  = m_wstrb;
        soc_wlast  = m_wlast;      // 转发最后一个数据标记
        m_wready   = soc_wready;   // SOC就绪反馈给主机
    end
end

// 写响应通道（仅来自SOC，包含新增控制信号）
always @(*) begin
    soc_bready = 1'b0;
    m_bvalid   = 1'b0;
    m_bresp    = 2'b00;
    m_bid      = 4'h0;

    if (w_state == W_B) begin
        m_bvalid   = soc_bvalid;
        m_bresp    = soc_bresp;
        m_bid      = soc_bid;      // 转发响应事务ID
        soc_bready = m_bready;     // 主机就绪反馈给SOC
    end
end


localparam R_IDLE = 3'd0;
localparam R_AR   = 3'd1;
localparam R_R    = 3'd2;

reg [2:0] r_state, r_next_state;
reg [1:0] r_target_dev;  // 读目标设备（RTC/SOC）

// 读状态机：处理RTC和SOC的读操作
always @(posedge clock or posedge reset) begin
    if (reset) begin
        r_state <= R_IDLE;
        r_target_dev <= DEV_NONE;
    end else begin
        r_state <= r_next_state;
        // 读地址有效时确定目标设备
        if (m_arvalid) begin
            r_target_dev <= is_rtc ? DEV_RTC : DEV_SOC;
        end
    end
end

// 读状态转换
always @(*) begin
    case (r_state)
        R_IDLE: r_next_state = m_arvalid ? R_AR : R_IDLE;  // 检测到读请求
        R_AR:   r_next_state = (m_arvalid & m_arready) ? R_R : R_AR;  // 地址握手成功
        R_R:    r_next_state = (m_rvalid & m_rready) ? R_IDLE : R_R;  // 数据握手成功
        default: r_next_state = R_IDLE;
    endcase
end

// 读地址通道（根据目标设备转发，包含新增控制信号）
always @(*) begin
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
    
    m_arready   = 1'b0;

    if (r_state == R_AR) begin
        case (r_target_dev)
            DEV_RTC: begin  // 读RTC
                rtc_arvalid = m_arvalid;
                rtc_araddr  = m_araddr;
                rtc_arid    = m_arid;      // 转发读事务ID
                rtc_arlen   = m_arlen;     // 转发突发长度
                rtc_arsize  = m_arsize;    // 转发数据位宽
                rtc_arburst = m_arburst;   // 转发突发类型
                m_arready   = rtc_arready; // RTC就绪反馈给主机
            end
            DEV_SOC: begin  // 读SOC
                soc_arvalid = m_arvalid;
                soc_araddr  = m_araddr;
                soc_arid    = m_arid;      // 转发读事务ID
                soc_arlen   = m_arlen;     // 转发突发长度
                soc_arsize  = m_arsize;    // 转发数据位宽
                soc_arburst = m_arburst;   // 转发突发类型
                m_arready   = soc_arready; // SOC就绪反馈给主机
            end
            default: m_arready = 1'b0;
        endcase
    end
end
// 读数据通道（根据目标设备转发就绪信号及数据信号）
always @(*) begin
    // 初始化就绪信号为0
    rtc_rready = 1'b0;
    soc_rready = 1'b0;



    m_rdata   = 32'h0;
    m_rvalid  = 1'b0;
    m_rresp   = 2'b0;
    m_rlast   = 1'b0;
    m_rid     = 4'h0;

    if (r_state == R_R) begin
        
        
        case (r_target_dev)
            DEV_RTC: begin  // 读RTC时，转发RTC信号到主机
                // 主机就绪信号转发给RTC
                rtc_rready = m_rready;
                
                // RTC返回的信号转发给主机
                m_rdata   = rtc_rdata;
                m_rvalid  = rtc_rvalid;
                m_rresp   = rtc_rresp;
                m_rlast   = rtc_rlast;
                m_rid     = rtc_rid;
            end
            
            DEV_SOC: begin  // 读SOC时，转发SOC信号到主机
                // 主机就绪信号转发给SOC
                soc_rready = m_rready;
                
                // SOC返回的信号转发给主机
                m_rdata   = soc_rdata;
                m_rvalid  = soc_rvalid;
                m_rresp   = soc_rresp;
                m_rlast   = soc_rlast;
                m_rid     = soc_rid;
            end
            
            default: begin
                // 默认状态下所有信号保持初始值
                // 可根据需求添加错误处理（如返回错误响应）
                m_rresp = 2'b10;  // 示例：返回错误响应
            end
        endcase
    end
end

endmodule
