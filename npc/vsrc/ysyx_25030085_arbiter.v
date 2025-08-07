module ysyx_25030085_arbiter(
    input               clock             ,
    input               reset             ,

    input               if_arvalid      ,  // 读地址有效
    output reg          if_arready      ,  // 读地址就绪
    input       [31:0]  if_araddr       ,  // 读地址
    input       [3:0]   if_arid         ,  // 读事务ID（新增）
    input       [7:0]   if_arlen        ,  // 突发长度（新增）
    input       [2:0]   if_arsize       ,  // 数据位宽（新增）
    input       [1:0]   if_arburst      ,  // 突发类型（新增）

    output reg          if_rvalid       ,  // 读数据有效
    input               if_rready       ,  // 读数据就绪
    output reg [31:0]   if_rdata        ,  // 读数据
    output reg [1:0]    if_rresp        ,  // 读响应
    output reg [3:0]    if_rid          ,  // 读响应ID（新增）
    output reg          if_rlast        ,  // 读最后一个数据（新增）
    
  
    input               ls_arvalid      ,  // 读地址有效
    output reg          ls_arready      ,  // 读地址就绪
    input       [31:0]  ls_araddr       ,  // 读地址
    input       [3:0]   ls_arid         ,  // 读事务ID（新增）
    input       [7:0]   ls_arlen        ,  // 突发长度（新增）
    input       [2:0]   ls_arsize       ,  // 数据位宽（新增）
    input       [1:0]   ls_arburst      ,  // 突发类型（新增）
   
    output reg          ls_rvalid       ,  // 读数据有效
    input               ls_rready       ,  // 读数据就绪
    output reg [31:0]   ls_rdata        ,  // 读数据
    output reg [1:0]    ls_rresp        ,  // 读响应
    output reg [3:0]    ls_rid          ,  // 读响应ID（新增）
    output reg          ls_rlast        ,  // 读最后一个数据（新增）

  
    // 写地址通道（AW）
    input               ls_awvalid      ,  // 写地址有效
    output reg          ls_awready      ,  // 写地址就绪
    input       [31:0]  ls_awaddr       ,  // 写地址
    input       [3:0]   ls_awid         ,  // 写事务ID（新增）
    input       [7:0]   ls_awlen        ,  // 突发长度（新增）
    input       [2:0]   ls_awsize       ,  // 数据位宽（新增）
    input       [1:0]   ls_awburst      ,  // 突发类型（新增）
    // 写数据通道（W）
    input               ls_wvalid       ,  // 写数据有效
    output reg          ls_wready       ,  // 写数据就绪
    input       [31:0]  ls_wdata        ,  // 写数据
    input       [3:0]   ls_wstrb        ,  // 写字节选通
    input               ls_wlast        ,  // 写最后一拍标记
    // 写响应通道（B）
    output reg          ls_bvalid       ,  // 写响应有效
    input               ls_bready       ,  // 写响应就绪
    output reg [1:0]    ls_bresp        ,  // 写响应
    output reg [3:0]    ls_bid          ,  // 写响应ID（新增）
    
    // 读通道（扩充至从设备）
    output reg          arbit_xbar_arvalid     ,  // 读地址有效
    input               arbit_xbar_arready     ,  // 读地址就绪
    output reg [31:0]   arbit_xbar_araddr      ,  // 读地址
    output reg [3:0]    arbit_xbar_arid        ,  // 读事务ID（新增）
    output reg [7:0]    arbit_xbar_arlen       ,  // 突发长度（新增）
    output reg [2:0]    arbit_xbar_arsize      ,  // 数据位宽（新增）
    output reg [1:0]    arbit_xbar_arburst     ,  // 突发类型（新增）
    
    input               arbit_xbar_rvalid      ,  // 读数据有效
    output reg          arbit_xbar_rready      ,  // 读数据就绪
    input       [31:0]  arbit_xbar_rdata       ,  // 读数据
    input       [1:0]   arbit_xbar_rresp       ,  // 读响应
    input       [3:0]   arbit_xbar_rid         ,  // 读响应ID（新增）
    input               arbit_xbar_rlast       ,  // 读最后一个数据（新增）

    // 写通道（扩充至从设备）
    output reg          arbit_xbar_awvalid     ,  // 写地址有效
    input               arbit_xbar_awready     ,  // 写地址就绪
    output reg [31:0]   arbit_xbar_awaddr      ,  // 写地址
    output reg [3:0]    arbit_xbar_awid        ,  // 写事务ID（新增）
    output reg [7:0]    arbit_xbar_awlen       ,  // 突发长度（新增）
    output reg [2:0]    arbit_xbar_awsize      ,  // 数据位宽（新增）
    output reg [1:0]    arbit_xbar_awburst     ,  // 突发类型（新增）

    output reg          arbit_xbar_wvalid      ,  // 写数据有效
    input               arbit_xbar_wready      ,  // 写数据就绪
    output reg [31:0]   arbit_xbar_wdata       ,  // 写数据
    output reg [3:0]    arbit_xbar_wstrb       ,  // 写字节选通
    output reg          arbit_xbar_wlast       ,  // 写最后一拍标记
    input               arbit_xbar_bvalid      , 
    output reg          arbit_xbar_bready      , 
    input       [1:0]   arbit_xbar_bresp       ,
    input       [3:0]   arbit_xbar_bid         // 写响应ID（新增）
);  

localparam IDLE       = 3'b000;
localparam IF_MASTER  = 3'b001;  // IF读占用总线
localparam LS_READ    = 3'b010;  // LS读占用总线
localparam LS_WRITE   = 3'b100;  // LS写占用总线

reg [2:0] state, next_state; 


// 状态转换逻辑（保持原有优先级：IF读 > LS写 > LS读）
always @(*) begin
    case (state)
        IDLE: begin
            if (if_arvalid) begin
                next_state = IF_MASTER;
            end
            else if (ls_awvalid || ls_wvalid) begin  // LS有写请求
                next_state = LS_WRITE;
            end
            else if (ls_arvalid) begin  // LS有读请求
                next_state = LS_READ;
            end
            else begin
                next_state = IDLE;
            end
        end

        IF_MASTER: begin
            // IF读完成（读数据最后一拍握手）
            if (if_rvalid && if_rready && if_rlast) begin
                if (if_arvalid) begin
                    next_state = IF_MASTER;
                end
                else if (ls_awvalid || ls_wvalid) begin
                    next_state = LS_WRITE;
                end
                else if (ls_arvalid) begin
                    next_state = LS_READ;
                end
                else begin
                    next_state = IDLE;
                end
            end
            else begin
                next_state = IF_MASTER;  
            end
        end

        LS_READ: begin
            // LS读完成（读数据最后一拍握手）
            if (ls_rvalid && ls_rready && ls_rlast) begin
                if (if_arvalid) begin
                    next_state = IF_MASTER;
                end
                else if (ls_awvalid || ls_wvalid) begin
                    next_state = LS_WRITE;
                end
                else if (ls_arvalid) begin
                    next_state = LS_READ;
                end
                else begin
                    next_state = IDLE;
                end
            end
            else begin
                next_state = LS_READ;
            end
        end

        LS_WRITE: begin
            // LS写完成（写响应握手）
            if (ls_bvalid && ls_bready) begin
                if (if_arvalid) begin
                    next_state = IF_MASTER;
                end
                else if (ls_awvalid || ls_wvalid) begin
                    next_state = LS_WRITE;
                end
                else if (ls_arvalid) begin
                    next_state = LS_READ;
                end
                else begin
                    next_state = IDLE;
                end
            end
            else begin
                next_state = LS_WRITE;
            end
        end

        default: next_state = IDLE;
    endcase
end

// 状态寄存器时序
always @(posedge clock or posedge reset) begin
    if (reset) begin
        state <= IDLE;
    end
    else begin
        state <= next_state;
    end
end


// ------------------------ 读地址通道仲裁（IF和LS读） ------------------------
always @(*) begin
    // 默认值
    arbit_xbar_arvalid = 1'b0;
    arbit_xbar_araddr  = 32'h0;
    arbit_xbar_arid    = 4'h0;
    arbit_xbar_arlen   = 8'h0;
    arbit_xbar_arsize  = 3'h0;
    arbit_xbar_arburst = 2'h0;
    if_arready  = 1'b0;
    ls_arready  = 1'b0;

    case (state)
        IF_MASTER: begin
            arbit_xbar_arvalid = if_arvalid;
            arbit_xbar_araddr  = if_araddr;
            arbit_xbar_arid    = if_arid;      // 转发事务ID
            arbit_xbar_arlen   = if_arlen;     // 转发突发长度
            arbit_xbar_arsize  = if_arsize;    // 转发数据位宽
            arbit_xbar_arburst = if_arburst;   // 转发突发类型
            if_arready  = arbit_xbar_arready;
        end
        LS_READ: begin
            arbit_xbar_arvalid = ls_arvalid;
            arbit_xbar_araddr  = ls_araddr;
            arbit_xbar_arid    = ls_arid;
            arbit_xbar_arlen   = ls_arlen;
            arbit_xbar_arsize  = ls_arsize;
            arbit_xbar_arburst = ls_arburst;
            ls_arready  = arbit_xbar_arready;
        end
        default: ;  
    endcase
end


// ------------------------ 读数据通道仲裁（IF和LS读） ------------------------
always @(*) begin
    // 默认值
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
    arbit_xbar_rready = 1'b0;

    case (state)
        IF_MASTER: begin
            if_rvalid  = arbit_xbar_rvalid;
            if_rdata   = arbit_xbar_rdata;
            if_rresp   = arbit_xbar_rresp;
            if_rid     = arbit_xbar_rid;      // 转发响应ID
            if_rlast   = arbit_xbar_rlast;    // 转发最后一个数据标记
            arbit_xbar_rready = if_rready;
        end
        LS_READ: begin
            ls_rvalid  = arbit_xbar_rvalid;
            ls_rdata   = arbit_xbar_rdata;
            ls_rresp   = arbit_xbar_rresp;
            ls_rid     = arbit_xbar_rid;
            ls_rlast   = arbit_xbar_rlast;
            arbit_xbar_rready = ls_rready;
        end
        default: ;  
    endcase
end


// ------------------------ 写地址通道仲裁（LS写） ------------------------
always @(*) begin
    // 默认值
    arbit_xbar_awvalid = 1'b0;
    arbit_xbar_awaddr  = 32'h0;
    arbit_xbar_awid    = 4'h0;
    arbit_xbar_awlen   = 8'h0;
    arbit_xbar_awsize  = 3'h0;
    arbit_xbar_awburst = 2'h0;
    ls_awready  = 1'b0;

    if (state == LS_WRITE) begin
        arbit_xbar_awvalid = ls_awvalid;
        arbit_xbar_awaddr  = ls_awaddr;
        arbit_xbar_awid    = ls_awid;      // 转发事务ID
        arbit_xbar_awlen   = ls_awlen;     // 转发突发长度
        arbit_xbar_awsize  = ls_awsize;    // 转发数据位宽
        arbit_xbar_awburst = ls_awburst;   // 转发突发类型
        ls_awready  = arbit_xbar_awready;
    end
end


// ------------------------ 写数据通道仲裁（LS写） ------------------------
always @(*) begin
    // 默认值
    arbit_xbar_wvalid = 1'b0;
    arbit_xbar_wdata  = 32'h0;
    arbit_xbar_wstrb  = 4'h0;
    arbit_xbar_wlast  = 1'b0;
    ls_wready  = 1'b0;

    if (state == LS_WRITE) begin
        arbit_xbar_wvalid = ls_wvalid;
        arbit_xbar_wdata  = ls_wdata;
        arbit_xbar_wstrb  = ls_wstrb;
        arbit_xbar_wlast  = ls_wlast;
        ls_wready  = arbit_xbar_wready;
    end
end


// ------------------------ 写响应通道仲裁（LS写） ------------------------
always @(*) begin
    // 默认值
    ls_bvalid = 1'b0;
    ls_bresp  = 2'b00;
    ls_bid    = 4'h0;
    arbit_xbar_bready = 1'b0;

    if (state == LS_WRITE) begin
        ls_bvalid = arbit_xbar_bvalid;
        ls_bresp  = arbit_xbar_bresp;
        ls_bid    = arbit_xbar_bid;      // 转发响应ID
        arbit_xbar_bready = ls_bready;
    end
end


endmodule
