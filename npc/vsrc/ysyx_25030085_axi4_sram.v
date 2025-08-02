import "DPI-C" function int pmem_readv(input int raddr);
import "DPI-C" function void pmem_write(input int waddr, input int wdata, input byte wmask);

module ysyx_25030085_axi4_lite_sram (
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
    input               S_AXI_RREADY        ,
    
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
    reg  [31:0]  s_rdata                ;
    wire         AW_active              ;
    wire         W_active               ;
    wire         B_active               ;
    wire         AR_active              ;
    wire         R_active               ;



    assign       AW_active = S_AXI_AWVALID & S_AXI_AWREADY;
    assign       W_active  = S_AXI_WVALID  & S_AXI_WREADY;    
    assign       B_active  = S_AXI_BREADY  & S_AXI_BVALID;

    assign       AR_active = S_AXI_ARVALID & S_AXI_ARREADY;     //读
    assign       R_active  = S_AXI_RVALID  & S_AXI_RREADY;


    function  bit check_address_range(input [31:0] addr);
        // 0x80000000到0x8FFFFFFFF的范围检查
        return (addr >= 32'h8000_0000) && (addr <= 32'h8FFF_FFFF);
    endfunction



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
        if(check_address_range(S_AXI_ARADDR))begin
        S_AXI_RDATA<=pmem_readv(S_AXI_ARADDR);  //发送数据
        S_AXI_RRESP<=2'b01;                      //发送响应
        S_AXI_RVALID<=1;                        //数据邮箱
        end
        else begin
        S_AXI_RDATA  <= 32'h0;  // 错误时数据无效
        S_AXI_RRESP  <= 2'b00;  // 标准SLVERR响应
        S_AXI_RVALID <= 1'b1;   // 错误响应也需置位RVALID
        end
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


// 地址FIFO：存储32位地址
ysyx_25030085_sync_fifo #(
    .DATA_WIDTH(32),
    .FIFO_DEPTH(8)  
) addr_fifo (
    .clk      (clk),
    .rst      (rst),  
    .din      (S_AXI_AWADDR),
    .wr_en    (addr_wr_en),
    .full     (addr_full),
    .dout     (fifo_addr_out),
    .rd_en    (fifo_rd_en),
    .empty    (addr_empty)
);

ysyx_25030085_sync_fifo #(
    .DATA_WIDTH(36),  // 32位数据 + 4位WSTRB
    .FIFO_DEPTH(8)
) data_fifo (
    .clk      (clk),
    .rst      (rst),
    .din      ({S_AXI_WSTRB, S_AXI_WDATA}),  // 高4位是选通，低32位是数据
    .wr_en    (data_wr_en),
    .full     (data_full),
    .dout     (fifo_data_out),
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
wire [35:0] fifo_data_out;    // 数据FIFO读出的数据（含选通）
wire [31:0] fifo_wdata_out;   // 提取数据部分
wire [3:0]  fifo_wstrb_out;   // 提取选通部分
wire        fifo_rd_en;       // FIFO同步读使能（同时读地址和数据）

assign fifo_wdata_out = fifo_data_out[31:0];
assign fifo_wstrb_out = fifo_data_out[35:32];

assign fifo_rd_en = !addr_empty && !data_empty;  // 两个FIFO都有数据时才读

assign addr_wr_en = S_AXI_AWVALID && !addr_full;
assign data_wr_en = S_AXI_WVALID && !data_full;



// 写地址通道握手
/*always @(posedge clk or negedge rst) begin
    if (rst) begin
        S_AXI_AWREADY <= 1'b0;
    end 
    else if(S_AXI_AWVALID&!S_AXI_AWREADY)begin
        write_addr_reg<=S_AXI_AWADDR;
        S_AXI_AWREADY<=1;
    end
    else begin
        S_AXI_AWREADY<=0;
    end
    
end*/
always @(posedge clk or posedge rst) begin  // 注意原代码是negedge rst，这里保持一致
    if (rst) begin
        S_AXI_AWREADY <= 1'b0;
    end else begin
        // 当地址有效且FIFO未满时，产生就绪信号（完成握手）
        S_AXI_AWREADY <= addr_wr_en;
    end
end


// 写数据通道握手
/*always @(posedge clk or negedge rst) begin
    if (rst) begin
        S_AXI_WREADY <= 1'b0;
    end 
    else if(S_AXI_WVALID&!S_AXI_WREADY )begin
        write_data_reg<=S_AXI_WDATA;
        S_AXI_WREADY<=1;
    end
    else begin
        S_AXI_WREADY<=0; 
    end
end*/
always @(posedge clk or posedge rst) begin
    if (rst) begin
        S_AXI_WREADY <= 1'b0;
    end else begin
        S_AXI_WREADY <= data_wr_en;     //替代信号
    end
end
// 写响应通道握手

reg data_process;           //处理数据，防止数据写两遍




always @(posedge clk or negedge rst) begin
    if (rst) begin
        S_AXI_BVALID <= 1'b0;
        S_AXI_BRESP  <= 2'b00;
        data_process<=0;
    end
    else begin
        if(fifo_rd_en&!data_process) begin   //两个fifo都有数据 并且没有处理数据时 
            data_process<=1;            //标记数据处理中
        end
        else if(data_process)begin
            pmem_write(fifo_addr_out,fifo_wdata_out,{4'b0,fifo_wstrb_out});
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
