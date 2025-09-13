module ysyx_25030085_csr_regfile (
    input         clock,
    input         reset,
    input         csr_wen,     
    input [11:0]  csr_addr,     
    output [31:0] csr_rdata     
);

reg [31:0] mcycle;    // 低32位计数器
reg [31:0] mcycleh;   // 高32位计数器

// 常量定义（直接用于组合逻辑输出，不占用寄存器资源）
localparam MVID = 32'h79737978;  // mvendorid
localparam MARCHID = 32'd25030085; // marchid



// - 用三目运算符替代case语句，减少MUX层级
// - 合并csr_wen判断，避免冗余逻辑
assign csr_rdata = csr_wen ? (
    csr_addr == 12'hb00 ? mcycle :
    csr_addr == 12'hb80 ? mcycleh :
    csr_addr == 12'hf11 ? MVID :
    csr_addr == 12'hf12 ? MARCHID :
    32'h0
) : 32'h0;


// - 简化mcycleh的进位判断，利用溢出自然递增
always @(posedge clock) begin
    if (reset) begin
        mcycle  <= 32'h0;
        mcycleh <= 32'h0;
    end else begin
        {mcycleh, mcycle} <= {mcycleh, mcycle} + 1'b1; // 合并为64位递增，减少进位判断逻辑
    end
end

endmodule
