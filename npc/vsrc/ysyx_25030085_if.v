
module ysyx_25030085_if (
    input               clock         ,
    input               reset         ,

    input               wb_done     ,          // 写回完成信号
    input [31:0]        next_pc     ,          // 下一个 PC 值

    //biu
    input               biu_rresp   ,
    input      [31:0]   biu_rdata   ,
    output reg [31:0]   if_addr     ,
    output reg          if_req      ,

    output   reg           out_valid   ,       // 输出数据有效
    output  reg [31:0]  inst        ,     // 指令输出
    output  reg [31:0]  pc          ,       // PC 值输出
    input               out_ready         // 下游准备接收
);



    reg [31:0]        current_pc;
    reg [31:0]        inst_reg;      // 用于暂存当前PC值
    reg [2:0]   state;


localparam IDLE    = 3'd0;  
localparam REQUEST = 3'd1;
localparam OUTPUT  = 3'd2;
localparam WAIT    = 3'd3;  


    

// 取指令逻辑
always @(posedge clock or posedge reset) begin
    if(reset) begin
        if_req    <= 0;
        current_pc<= `RESET_VECTOR; 
        pc       = `RESET_VECTOR;
        state   <=IDLE;

    end
    else begin
        case (state)
            IDLE:begin
            if_req    <= 1;                  // 发起取指请求
            if_addr   <= current_pc;         // 发送当前PC作为取指地址  
            state     <=REQUEST; 
            end 
            REQUEST:begin
                if_req<=0;
                if( biu_rresp )begin
                inst_reg  <= biu_rdata;       // 锁存取到的指令
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
    