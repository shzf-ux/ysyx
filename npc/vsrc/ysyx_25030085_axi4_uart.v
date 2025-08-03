module ysyx_25030085_axi4_lite_uart (
    input               clock                 ,
    input               reset                 ,
        
    // 写地址通道
    input       [31:0]  S_AXI_AWADDR        ,
    input               S_AXI_AWVALID       ,
    output reg          S_AXI_AWREADY       ,
    
    // 写数据通道
    input       [31:0]  S_AXI_WDATA         ,
    input       [3:0]   S_AXI_WSTRB         ,
    input               S_AXI_WVALID        ,
    output reg          S_AXI_WREADY        ,
    
    // 写响应通道
    output reg  [1:0]   S_AXI_BRESP         ,
    output reg          S_AXI_BVALID        ,
    input               S_AXI_BREADY        
);

// 地址FIFO：存储32位地址
ysyx_25030085_sync_fifo #(
    .DATA_WIDTH(32),
    .FIFO_DEPTH(8)  
) addr_fifo_uart (
    .clock      (clock),
    .reset      (reset),  
    .din      (S_AXI_AWADDR),
    .wr_en    (addr_wr_en),
    .full     (addr_full),
    .dout     (fifo_addr_out),
    .rd_en    (fifo_rd_en),
    .empty    (addr_empty)
);


ysyx_25030085_sync_fifo #(
    .DATA_WIDTH(32),  // 32位数据 + 4位WSTRB
    .FIFO_DEPTH(8)
) data_fifo_uart (
    .clock      (clock),
    .reset      (reset),
    .din      (S_AXI_WDATA),  
    .wr_en    (data_wr_en),
    .full     (data_full),
    .dout     (fifo_wdata_out),
    .rd_en    (fifo_rd_en),
    .empty    (data_empty)
);
wire        addr_full   ;
wire        data_full   ;
wire        addr_empty   ;
wire        data_empty   ;
wire        addr_wr_en;       // 地址FIFO写使能  主设备置巴valid后&不满才写
wire        data_wr_en;       // 数据FIFO写使能  主设备置巴valid后&不满才写
wire [31:0] fifo_addr_out;    // 地址FIFO读出的地址
wire [31:0] fifo_wdata_out;   // 提取数据部分
wire        fifo_rd_en;       // FIFO同步读使能（同时读地址和数据）



assign fifo_rd_en = !addr_empty && !data_empty;  // 两个FIFO都有数据时才读

assign addr_wr_en = S_AXI_AWVALID && !addr_full;
assign data_wr_en = S_AXI_WVALID && !data_full;



    wire         AW_active              ;
    wire         W_active               ;
    wire         B_active               ;
    reg [31:0]   write_data_reg         ;

    assign       AW_active = S_AXI_AWVALID & S_AXI_AWREADY;
    assign       W_active  = S_AXI_WVALID  & S_AXI_WREADY;    
    assign       B_active  = S_AXI_BREADY  & S_AXI_BVALID;

// 写地址通道握手
always @(posedge clock or posedge reset) begin 
    if (reset) begin
        S_AXI_AWREADY <= 1'b0;
    end else begin
        // 当地址有效且FIFO未满时，产生就绪信号（完成握手）
        S_AXI_AWREADY <= addr_wr_en;
    end
end

// 写数据通道握手
always @(posedge clock or posedge reset) begin
    if (reset) begin
        S_AXI_WREADY <= 1'b0;
    end else begin
        S_AXI_WREADY <= data_wr_en;     //替代信号
    end
end


reg data_process;           //处理数据，防止数据写两遍
// 写响应通道握手
always @(posedge clock or negedge reset) begin
    if (reset) begin
        S_AXI_BVALID <= 1'b0;
        S_AXI_BRESP  <= 2'b00;
        data_process<=0;
    end
    else begin
        if(fifo_rd_en&!data_process) begin   //两个fifo都有数据 并且没有处理数据时 
            data_process<=1;            //标记数据处理中
        end
        else if(data_process)begin
            $write("%c",fifo_wdata_out[7:0]);
            $fflush();  // 强制刷新，内容会立即显示在控制台，且不换行
            S_AXI_BRESP<=2'b01;  
            S_AXI_BVALID <=1;            //写响应有效,延迟一周前生成
            data_process <=0;
        end
        else if(B_active) begin       
            S_AXI_BVALID<=0;
        end
        else begin
            S_AXI_BRESP<=2'b00; 
        end
    end
end

endmodule