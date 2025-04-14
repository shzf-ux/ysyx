import "DPI-C" function void display_call_func (input int pc, input int dnpc) ;//jal i调用
import "DPI-C" function void display_ret_func (input int pc, input int dnpc) ; //jalr调用或者返回



module ysyx_25030085_pc (
    input clk,
    input rst,
    input[31:0]imm,
    input [31:0]inst,//控制ftrace，识别跳转和调用
    input [31:0]Alu_Result,
    input [1:0]Jump,

    output  [31:0] pc//改成wire
);
    reg [31:0] current_pc;//表示当前周期的 PC 值。
    reg [31:0] dnpc;//储存跳转pc

always @(posedge clk or posedge rst) begin
    if(rst) begin

     current_pc <= 32'h8000_0000;  // 复位值 
     dnpc  <= 32'h0;  
    end     
    else if(Jump==2'b01)begin//JAL
    current_pc<=imm+current_pc;  //JAL跳转地址
    dnpc <=imm+current_pc; 
    end
    else if(Jump==2'b10)begin//jalr 返回or调用
   
    current_pc<=(Alu_Result&32'hFFFFFFFE);
    dnpc<=(Alu_Result&32'hFFFFFFFE);
    end
    else 
    current_pc<=current_pc+4; 
end


  assign pc=current_pc;//current一旦改变，就控制输出端pc变化



   //ftrace需要
    wire is_jar_call;
    wire is_jalr_call;
    wire is_jalr_ret;

    assign is_jar_call=(inst[11:7]==5'd1)&&(Jump==2'b01);//rd寄存器是不是ra
    assign is_jalr_call=(inst[11:7]==5'd1)&&(Jump==2'b10);//rd寄存器是不是ra
    assign is_jalr_ret=(inst[11:7]==5'd0)&&(inst[19:15]==5'd1)&&(Jump==2'b10);
//rd寄存器为x0,rs1寄存器为ra
    always @(posedge clk) begin
        if (is_jar_call || is_jalr_call) begin
            display_call_func(current_pc, dnpc);  // 使用 current_pc 和 dnpc 的稳定值
        end
        if (is_jalr_ret) begin
            display_ret_func(current_pc, dnpc);
        end
    end
endmodule