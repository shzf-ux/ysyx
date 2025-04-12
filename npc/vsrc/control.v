import "DPI-C" function void ebreak_instruction (input int inst) ;
import "DPI-C" function void invalid_inst   (input int pc,input int inst);       
module ysyx_25030085_control (
    input  [31:0] inst,
    input  [31:0] pc,

    output reg    MemWrite, //储存器控制信号，决定写
    output reg    MemRead,//储存器控制信号  读

    output reg [1:0]MemtoReg,//选择写回数据来源（ALU结果/存储器数据/PC+4等）
   //00为alu计算结果，01为储存器数据，10为pc+4，jal,11为立即数直接写回lui
    output reg    RegWrite,//决定是否写回寄存器堆

    output reg    Branch,//分支信号
    output reg   [1:0] Jump,//01为jal，10为jalr
    output reg    ALUSrc,//（0=寄存器，1=立即数）
    output reg  [3:0] AluOp,
    output reg  [31:0]imm
   
);
    reg invalid;//不合理的指令
    reg [6:0] opcode=inst[6:0];
    reg [2:0] func3=inst[14:12];
    reg [6:0] func7=inst[31:25];
    reg [31:0] immI;
    reg [31:0] immJ;//最低位补0
    reg [31:0] immU;
    assign immJ= {{12{inst[31]}}, inst[19:12],inst[20],inst[30:21],1'b0};
    assign immI={{20{inst[31]}}, inst[31:20]};
    assign immU={inst[31:12],12'b0};

always @(*) begin
     case (opcode)
            7'b0010011: begin  // I-type指令 rs1与立即数操作
            MemWrite=1'b0;
            MemRead =1'b0;
            Branch  =1'b0;
            Jump    =2'b00;
            MemtoReg =2'b00;//alu计算结果
            RegWrite=1'b1;//有效
            ALUSrc  =1'b1;//立即数
            invalid =1'b0;
            imm  =immI;

            case(func3)
            3'b000:begin//addi指令
            AluOp=4'b0000;             
            end          
            3'b001:begin//slli 逻辑左移立即数
            AluOp=4'b0001;          
            end
            3'b010:begin//slti 有符号比较
            AluOp=4'b0010;          
            end
            3'b011:begin//slliu 无符号比较
            AluOp=4'b0011;         
            end
            3'b100:begin//xori 异或操作
            AluOp=4'b0100 ;         
            end
            3'b101:begin
                case(func7)
                7'b0100_000:begin//srai算数右移
                AluOp=4'b0101;
                end
                7'b0000_000:begin//srli逻辑右移
                AluOp=4'b0110;
                end
                default:begin
                AluOp=4'b0000;
                end
                endcase
            end             
            3'b110:begin//or 
            AluOp=4'b0111 ;         
            end
            3'b111:begin//and 
            AluOp=4'b1000 ;         
            end              
            endcase





            end
            7'b1101111:begin //jal rd, offset  rd = PC + 4
            MemWrite=1'b0;
            MemRead =1'b0;
            Branch  =1'b0;
            Jump    =2'b01;//无跳转跳转
            MemtoReg =2'b10;//写回rd为pc+4
            RegWrite=1'b1;//写入rd为pc+4,使能信号
            ALUSrc  =1'b1;//立即数
            AluOp   =4'b0000;
            imm     =immJ;   
            invalid =1'b0; 
            end  
            7'b1100111:begin//jalr指令 跳转地址为(rs1+IMMI)&0
            MemWrite=1'b0;
            MemRead =1'b0;
            Branch  =1'b0;
            Jump    =2'b10;//无跳转跳转
            MemtoReg=2'b10;//写回rd为pc+4
            RegWrite=1'b1;//写入rd为pc+4,使能信号
            ALUSrc  =1'b1;//立即数
            AluOp   =4'b0000;//控制rs1+b
            imm     =immI;
            invalid =1'b0;                   
            end
            7'b0110111:begin//U型指令lui
            MemWrite=1'b0;
            MemRead =1'b0;
            Branch  =1'b0;
            Jump    =2'b00;//无跳转跳转
            MemtoReg=2'b11;
            RegWrite=1'b1;//写入rd,使能信号
            ALUSrc  =1'b1;//来源立即数
            AluOp   =4'b0000;
            imm     =immU;
            invalid =1'b0;                    
            end
            7'b0010111:begin//U型指令auipc
            MemWrite=1'b0;
            MemRead =1'b0;
            Branch  =1'b0;
            Jump    =2'b00;//无跳转跳转
            MemtoReg=2'b00;//相加写回
            RegWrite=1'b1;//写入rd,使能信号
            ALUSrc  =1'b1;//立即数
            AluOp   =4'b1001;//特殊。pc+立即数
            imm     =immU;
            invalid =1'b0;    
                
            end
            //错误情况
            default: begin
            MemWrite=1'b0;
            MemRead =1'b0;
            Branch  =1'b0;
            Jump    =2'b00;
            MemtoReg =2'b00;
            RegWrite=1'b0;
            ALUSrc  =1'b0;
            AluOp   =4'b000;
            imm  =32'h0000_0000;
            invalid =1'b1;
            end
        endcase
end
//系统类别的指令ebreak call
   wire is_ebreak;
   assign is_ebreak= (opcode == 7'b1110011) && (func3 == 0) && (inst[31:20] == 1);

    always@(*)begin
        if(is_ebreak)begin
      ebreak_instruction(inst);   
        end
        else if(invalid)
      invalid_inst(pc,inst);
      
    end

    
    
endmodule