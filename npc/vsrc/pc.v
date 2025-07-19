import "DPI-C" function void display_call_func (input int pc, input int dnpc);
import "DPI-C" function void display_ret_func (input int pc, input int dnpc);

module ysyx_25030085_pc (
    input clk,
    input rst,
    input [31:0] imm,
    input [31:0] Alu_Result,
    input [1:0] Jump,
    input Branch,
    input [31:0] mtvec,
    input [31:0] mepc,
    input is_ecall,
    input is_mret,

    output [31:0] inst,
    output [31:0] pc
);
    reg [31:0] current_pc;
    reg [31:0] if_inst;
    
    assign inst = if_inst;
    assign pc = current_pc;

    // 计算下一条PC
    wire [31:0] next_pc = 
        (Jump == 2'b01) ? (imm + current_pc) :          // JAL
        (Jump == 2'b10) ? (Alu_Result & 32'hFFFFFFFE) : // JALR
        Branch ? Alu_Result :                           // Branch
        is_ecall ? mtvec :                              // ECALL
        is_mret ? mepc :                                // MRET
        (current_pc + 4);                              // 顺序执行

    // 指令读取逻辑
    always @(posedge clk or posedge rst) begin
        if (rst) begin
            current_pc <= 32'h8000_0000;
            if_inst <= pmem_readv(32'h80000000);
        end else begin
            current_pc <= next_pc;
            if_inst <= pmem_readv(next_pc);
        end
    end

    // 函数调用追踪
     // ftrace调试信号
    wire is_jar_call;
    wire is_jalr_call;
    wire is_jalr_ret;

    assign is_jar_call = (inst[11:7] == 5'd1) && (Jump == 2'b01);  // JAL调用
    assign is_jalr_call = (inst[11:7] == 5'd1) && (Jump == 2'b10);  // JALR调用
    assign is_jalr_ret = (inst[11:7] == 5'd0) && (inst[19:15] == 5'd1) && (Jump == 2'b10);  // JALR返回

    always @(posedge clk) begin
        if (is_jar_call || is_jalr_call) begin
            display_call_func(current_pc, next_pc);  // 函数调用追踪
        end
        if (is_jalr_ret) begin
            display_ret_func(current_pc, next_pc);  // 函数返回追踪
        end
    end

endmodule