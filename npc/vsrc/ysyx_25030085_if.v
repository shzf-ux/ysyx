import "DPI-C" function void display_call_func (input int pc, input int dnpc);
import "DPI-C" function void display_ret_func (input int pc, input int dnpc);

module ysyx_25030085_if (
    input clk,
    input rst,

    input wb_done,          // 写回完成信号
    input [31:0] next_pc,   // 下一个 PC 值

    output out_valid,       // 输出数据有效
    output [31:0] inst,     // 指令输出
    output [31:0] pc,       // PC 值输出
    input out_ready         // 下游准备接收
);

    reg [31:0] current_pc;  // 当前 PC
    reg [31:0] if_inst;     // 当前指令
    reg inst_valid;         // 指令是否有效

    // 输出逻辑
    assign out_valid = inst_valid && out_ready; 
    assign inst = if_inst;
    assign pc = current_pc;

    // 主逻辑：复位后立即取第一条指令，之后由 wb_done 触发
    always @(posedge clk or posedge rst) begin
        if (rst) begin
            current_pc <= 32'h8000_0000; // 复位 PC
            if_inst <= pmem_readv(32'h8000_0000); // 立即取第一条指令
            inst_valid <= 1;             // 标记指令有效
        end else begin
            if (wb_done) begin
                // 收到 wb_done 后更新 PC 并取新指令
                current_pc <= next_pc;
                if_inst <= pmem_readv(next_pc);
                inst_valid <= 1;
            end else if (out_ready) begin
                // 下游已接收指令，清除有效标志
                inst_valid <= 0;
            end
        end
    end
endmodule