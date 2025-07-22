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
    parameter OUTPUT = 1;
    parameter WAIT = 2;
    reg[1:0] state;

    reg [31:0] current_pc;
    reg [31:0] next_pc_reg;
    reg [31:0] if_inst ;
    reg fetch_valid;

    assign out_valid = (state == OUTPUT) ? 1 : 0;
    
    assign inst = if_inst;
    assign pc = current_pc;
  //  always @(*) begin
  //      $display("pc:%08x, inst:%08x",ne,inst);  
  //  end
    always @(posedge clk) begin
        if (rst) begin
            state <= IDLE;
            current_pc <= 32'h8000_0000;
            fetch_valid <= 0;
            next_pc_reg <= 0;
        end else begin
            case (state)
                IDLE: begin//取指令
                    if_inst<= pmem_readv(current_pc);
                    state <= OUTPUT;
                    fetch_valid <= 1;
                end
                
                OUTPUT: begin//发送
                    // 等待指令获取完成
                    if (fetch_valid) begin          
                        state <= WAIT;
                    end
                end         
                WAIT: begin
                  if (wb_done) begin
                    current_pc <= next_pc;
                    state <= IDLE; 
                    end
                end
            endcase
        end
    end
endmodule