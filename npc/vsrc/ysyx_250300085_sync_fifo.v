module ysyx_25030085_sync_fifo #(
    parameter DATA_WIDTH = 32,    // 数据宽度
    parameter FIFO_DEPTH = 128     // FIFO深度
)(
    input                   clk             ,     
    input                   rst             ,    
    
    // 写端口
    input       [DATA_WIDTH-1:0]    din     ,    // 写入数据
    input                           wr_en   ,    // 写使能
    output reg                      full    ,    // FIFO满信号
    
    // 读端口
    output reg  [DATA_WIDTH-1:0]    dout    ,  // 读出数据
    input                           rd_en   ,  // 读使能
    output reg                      empty      // FIFO空信号
);


localparam PTR_WIDTH = $clog2(FIFO_DEPTH);  // 指针宽度

reg [DATA_WIDTH-1:0] fifo_mem [0:FIFO_DEPTH-1];

// 读写指针（额外位用于区分满/空）
reg [PTR_WIDTH:0]   wr_ptr;  // 写指针（最高位用于判断满）
reg [PTR_WIDTH:0]   rd_ptr;  // 读指针（最高位用于判断空）

// 实际地址（去除最高位）
wire [PTR_WIDTH-1:0] wr_addr = wr_ptr[PTR_WIDTH-1:0];
wire [PTR_WIDTH-1:0] rd_addr = rd_ptr[PTR_WIDTH-1:0];

//空满状态判断
always @(*) begin
        // 空状态：读写指针完全相同（包括最高位）
    empty = (wr_ptr == rd_ptr);
    
    // 满状态：指针低PTR_WIDTH位相同，最高位相反
    full  = (wr_ptr[PTR_WIDTH] != rd_ptr[PTR_WIDTH]) && 
            (wr_ptr[PTR_WIDTH-1:0] == rd_ptr[PTR_WIDTH-1:0]);
end

//写入数据
always @(posedge clk or posedge rst) begin
    if(rst)begin
        wr_ptr<=0;  
    end
    else begin
        if (wr_en && !full) begin  
        fifo_mem[wr_addr] <= din;//储存在0位置
        wr_ptr <= wr_ptr + 1'b1;
        end     
    end
end

always @(posedge clk or negedge rst) begin
    if (rst) begin
        rd_ptr <= 0;
        dout <= 0;
    end else begin
        if (rd_en && !empty) begin
            dout <= fifo_mem[rd_addr];
            // 读指针递增
            rd_ptr <= rd_ptr + 1'b1;
        end
    end
end

endmodule
