
module ysyx_25030085_if (
    input               clock         ,
    input               reset         ,

    input               wb_done     ,          // 写回完成信号
    input [31:0]        next_pc     ,          // 下一个 PC 值

    //biu
    input               ifu_respValid ,
    input      [31:0]   ifu_rdata     ,
    output reg [31:0]   ifu_addr      ,
    output reg          ifu_reqValid  ,

    output  reg         out_valid   ,       // 输出数据有效
    output  reg [31:0]  inst        ,     // 指令输出
    output  reg [31:0]  pc          ,       // PC 值输出
    input               out_ready         // 下游准备接收
);



    reg [31:0]        current_pc;
    reg [31:0]        inst_reg;      // 用于暂存当前PC值

localparam IDLE=0;
localparam REQUEST=1;
localparam OUTPUT=2;
localparam WAIT=3;
reg [2:0] state;

// 取指令逻辑
always @(posedge clock or posedge reset) begin
    if(reset) begin
        ifu_reqValid    <= 0;
        current_pc<= 32'h30000000; 
        pc       = 32'h30000000;
        state   <=IDLE;

    end
    else begin
        case (state)
            IDLE:begin
            ifu_reqValid    <= 1;                  // 发起取指请求
            ifu_addr   <= current_pc;         // 发送当前PC作为取指地址  
            state     <=REQUEST; 
            end 
            REQUEST:begin
                ifu_reqValid<=0;
                if( ifu_respValid )begin
                inst_reg  <= ifu_rdata;       // 锁存取到的指令
                if(out_ready)begin
                state<=OUTPUT;
                end
                end
            end
            OUTPUT:begin
                state<=WAIT;
            end
            WAIT:begin
                if(wb_done)begin
                    current_pc<=next_pc;
                    state<=IDLE;
                end
            end
            default:begin               
            end 
        endcase
    end 
end
always @(*) begin
    out_valid=0;
    case (state)
        OUTPUT:begin
            out_valid=1;
            inst=inst_reg;
            pc=current_pc;
        end 
        default: begin 
        end
    endcase
    
end




endmodule
    