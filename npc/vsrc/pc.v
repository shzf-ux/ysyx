import "DPI-C" function void display_call_func (input int pc, input int dnpc);
import "DPI-C" function void display_ret_func (input int pc, input int dnpc);

module ysyx_25030085_pc (
    input clk,
    input rst,

    input wb_done,
    input [31:0] next_pc,

    output out_valid,    // 输出数据有效
    output [31:0] inst,  // 指令输出
    output [31:0] pc,    // PC值输出
    input out_ready      // 下游准备接收
);
    parameter IDLE = 0;
    parameter WAIT_FETCH = 1;
    parameter OUTPUT = 2;
    reg[1:0] state;

    reg [31:0] current_pc;
    reg [31:0] next_pc_reg;
    reg [31:0] if_inst;
    reg fetch_valid;

    assign out_valid = (state == OUTPUT) ? 1 : 0;
    assign inst = if_inst;
    assign pc = current_pc;

    always @(posedge clk) begin
        if (rst) begin
            $display("RESET: initializing PC");
            state <= IDLE;
            current_pc <= 32'h8000_0000;
            fetch_valid <= 0;
            next_pc_reg <= 0;
        end else begin
            case (state)
                IDLE: begin
                    // 复位后立即开始取指
                    $display("IDLE: fetching PC=0x%08x", current_pc);
                    if_inst <= pmem_readv(current_pc);
                    state <= WAIT_FETCH;
                    fetch_valid <= 1;
                end
                
                WAIT_FETCH: begin
                    // 等待指令获取完成
                    if (fetch_valid) begin
                        $display("FETCHED: inst=0x%08x at PC=0x%08x", if_inst, current_pc);
                        state <= OUTPUT;
                    end
                end
                
                OUTPUT: begin
                    // 当下游准备好接收指令
                    if (out_ready) begin
                        $display("OUTPUT: sending PC=0x%08x, inst=0x%08x", current_pc, if_inst);
                        
                        // 更新PC到下一位置
                        next_pc_reg <= next_pc;
                        state <= IDLE;
                        
                        // 检查是否需要停止
                        if (wb_done) begin
                            $display("WB_DONE: updating PC to 0x%08x", next_pc);
                            current_pc <= next_pc;
                        end
                    end
                end
            endcase
        end
    end
endmodule