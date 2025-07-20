module  ysyx_25030085_wb (
    input clk,
    input rst,

   // 来自执行阶段的数据
    input [31:0] alu_result,   // ALU计算结果
    input [31:0] mem_rdata,    // 存储器读取数据
    input [31:0] pc,     // PC+4（用于JAL）
    input [31:0] imm,          // 立即数（用于LUI）
    input [31:0] csr_rdata,    // CSR读取数据


    // 控制信号
    input [20:0] ctrl,     
    
    input [4:0]  rd_addr,      // 目标寄存器地址
    
    // 输出到寄存器堆
    output reg        reg_wen,
    output reg [4:0]  reg_waddr,
    output reg [31:0] reg_wdata

);

wire [2:0]MemtoReg=ctrl[12:10];
wire RegWrite=ctrl[16];

always @(*) begin
    case (MemtoReg)
        3'b000: reg_wdata = alu_result;  // ALU结果
        3'b001: reg_wdata = mem_rdata;   // 存储器数据
        3'b010: reg_wdata = pc+4;    // JAL指令
        3'b011: reg_wdata = imm;         // LUI指令
        3'b100: reg_wdata = csr_rdata;   // CSR数据
        default: reg_wdata = 32'h0;
    endcase
end

always @(posedge clk or posedge rst) begin
    if (rst) begin
        reg_wen   <= 1'b0;
        reg_waddr <= 5'h0;
    end else begin
        reg_wen   <= RegWrite;
        reg_waddr <= rd_addr;
    end
end

endmodule