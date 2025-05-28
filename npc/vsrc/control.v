import "DPI-C" function void ebreak_instruction (input int inst) ;
import "DPI-C" function void invalid_inst   (input int pc,input int inst);   
module ysyx_25030085_control (
    input  [31:0] inst,
    input  [31:0] pc,
    input  [31:0]Read_rs1,
    input  [31:0]Read_rs2,
//9个控制信号
    output reg    MemWrite, //储存器控制信号，决定写
    output reg    MemRead,//储存器控制信号  读
    output reg [2:0]MemOp,//数据存储器操作方式，0字节，1半字，2一个字

    output reg [2:0]MemtoReg,//选择写回数据来源（ALU结果/存储器数据/PC+4等）
   //000为alu计算结果，001为储存器数据，010为pc+4，jal,011为立即数直接写回lui，100为csr
    output reg    RegWrite,//决定是否写回寄存器堆

    output reg    Branch,//分支信号
    output reg   [1:0] Jump,//01为jal，10为jalr
    output reg    ALUSrc,//（0=寄存器，1=立即数）
    output reg  [3:0] AluOp,

    output reg  [31:0]imm,

    //csr
    output [1:0] csr_wen,//0为不使能，01为写入，10为相或
    output reg is_ecall,
    output reg is_mret
   
);
    reg invalid;//不合理的指令
    reg is_ebreak;
    reg [6:0] opcode=inst[6:0];
    reg [2:0] func3=inst[14:12];
    reg [6:0] func7=inst[31:25];
    reg [31:0] immI;
    reg [31:0] immJ;//最低位补0
    reg [31:0] immU;
    reg [31:0] immS;
    reg [31:0] immB;
    assign immJ= {{12{inst[31]}}, inst[19:12],inst[20],inst[30:21],1'b0};
    assign immI={{20{inst[31]}}, inst[31:20]};
    assign immU={inst[31:12],12'b0};
    assign immS={{20{inst[31]}}, inst[31:25], inst[11:7]};
    assign immB={{20{inst[31]}},inst[7],inst[30:25],inst[11:8],1'b0};
//最低位补0

always @(inst) begin
    //初始值
            MemWrite=1'b0;
            MemRead =1'b0;
            Branch  =1'b0;
            Jump    =2'b00;
            MemtoReg =3'b000;
            RegWrite=1'b0;
            ALUSrc  =1'b0;
            AluOp   =4'b0000;
            imm  =32'h0000_0000;
            invalid =1'b0;
            MemOp =3'b000;
            is_ebreak=1'b0;
            is_ecall =1'b0;
            is_mret =1'b0;
            csr_wen =2'd0;
    if(pc>=32'h8000_0000)begin
     case (opcode)
            7'b0110011:begin//R型运算指令 add sub sll
            MemWrite =1'b0;
            MemRead  =1'b0;
            Branch   =1'b0;
            Jump     =2'b00;
            MemtoReg =3'b000;//alu计算结果写回
            RegWrite =1'b1;//有效
            ALUSrc   =1'b0;//选择寄存器
            invalid  =1'b0;
            is_ecall =1'b0;
            is_mret =1'b0;
            csr_wen =2'd0;
            case(func3)
            3'b000:begin//add sub
            case(func7)
                7'b0000000:begin//add
                AluOp=4'b0000;
                end
                7'b0100000:begin//sub
                AluOp=4'b1010;
                              
                end
                default:begin
                invalid =1'b1;    
                end
            endcase   
            end
            3'b001:begin//sll
                AluOp=4'b0001;
                
            end
            3'b010:begin//slt
                AluOp=4'b0010; 
            end
            3'b011:begin//sltu
                AluOp=4'b0011;
            end
            3'b100:begin//xor
               AluOp=4'b0100 ;  
            end
            3'b101:begin//srl sra
            case(func7)
                7'b0000000:begin//srl
                  AluOp=4'b0110; 
                end
                7'b0100000:begin//sra  
                 AluOp=4'b0101;               
                end
                default:begin
                invalid =1'b1;    
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
            7'b0010011: begin  // I-type指令 rs1与立即数操作
            MemWrite=1'b0;
            MemRead =1'b0;
            Branch  =1'b0;
            Jump    =2'b00;
            MemtoReg =3'b000;//alu计算结果
            RegWrite=1'b1;//有效
            ALUSrc  =1'b1;//立即数
            invalid =1'b0;
            imm  =immI;
            is_ecall =1'b0;
            is_mret =1'b0;
            csr_wen =2'd0;
            case(func3)
            3'b000:begin//addi指令
            AluOp=4'b0000;             
            end          
            3'b001:begin//slli 逻辑左移立即数 三个移位立即数都是零扩展,并且只使用低5位数
            AluOp=4'b0001;  
            imm= {27'b0, inst[24:20]} ;        
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
                imm= {27'b0, inst[24:20]} ; 
                end
                7'b0000_000:begin//srli逻辑右移
                AluOp=4'b0110;
                imm= {27'b0, inst[24:20]} ;  
                end
                default:begin
                invalid =1'b1;;
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
            7'b0000011:begin//lw lb lh lbu lhu加载指令
            MemWrite=1'b0;
            MemRead =1'b1;//读使能
            Branch  =1'b0;
            Jump    =2'b00;
            MemtoReg =3'b001;//加载的数据，写回寄存器堆，
            RegWrite=1'b1;//写入rd
            ALUSrc  =1'b1;//立即数
            invalid =1'b0;
            imm  =immI;
            is_ecall =1'b0;
            is_mret =1'b0;
            csr_wen =2'd0;
            case(func3)
            3'b000:begin//lb
            MemOp=3'b000;               
            end
            3'b001:begin//lh
            MemOp=3'b001;    
            end
            3'b010:begin//lw
            MemOp=3'b010;    
            end
            3'b100:begin//lbu
            MemOp=3'b100;    
            end
            3'b101:begin//lhu
            MemOp=3'b101;
            end
            default:begin
            invalid =1'b1;    
            end    
            
            endcase          
            end
            7'b0100011:begin//s类型指令（rs2 → Mem[rs1 + offset]）
            MemWrite=1'b1;//内存写入使能
            MemRead =1'b0;
            Branch  =1'b0;
            Jump    =2'b00;
            MemtoReg =3'b000;
            RegWrite=1'b0;
            ALUSrc  =1'b1;//与立即数相加
            AluOp   =4'b0000;//rs1+立即数
            imm     =immS;
            invalid =1'b0;
            is_ecall =1'b0;
            is_mret =1'b0;
            csr_wen =2'd0;
            case(func3)
            3'b000:begin//sb
            MemOp=3'b000;
                
            end
            3'b001:begin//sh
            MemOp=3'b001;
                
            end
            3'b010:begin//sw
            MemOp=3'b010;
                
            end
            default:begin
            invalid =1'b1;    
            end
            endcase
                
            end
            7'b1100011:begin//B型指令
            MemWrite=1'b0;
            MemRead =1'b0;
            Jump    =2'b00;//无跳转跳转
            MemtoReg =3'b000;//不写回
            RegWrite=1'b0;//不写入
            ALUSrc  =1'b1;//立即数
            AluOp   =4'b1001;//跳转地址跳转pc+立即数
            imm     =immB;
            is_ecall =1'b0;
            is_mret =1'b0;
            csr_wen =2'd0;   
            invalid =1'b0; 
            case(func3)
            3'b000: Branch = (Read_rs1 == Read_rs2);  // beq
            3'b001: Branch = (Read_rs1 != Read_rs2);  // bne
            3'b100: Branch = (Read_rs1[31]!=Read_rs2[31])?(Read_rs1[31]?1'd1:1'd0):(Read_rs1[30:0]<Read_rs2[30:0]?1'd1:1'd0);  // blt
            3'b101: Branch = (Read_rs1[31]!=Read_rs2[31])?(Read_rs1[31]?1'd0:1'd1):(Read_rs1[30:0]>=Read_rs2[30:0]?1'd1:1'd0); // bge
            3'b110: Branch = (Read_rs1 < Read_rs2);   // bltu
            3'b111: Branch = (Read_rs1 >= Read_rs2);  // bgeu
            default:begin 
            invalid =1'b1;                 
            end
            endcase   

            end
            7'b1101111:begin //jal rd, offset  rd = PC + 4
            MemWrite=1'b0;
            MemRead =1'b0;
            Branch  =1'b0;
            Jump    =2'b01;//无跳转跳转
            MemtoReg =3'b010;//写回rd为pc+4
            RegWrite=1'b1;//写入rd为pc+4,使能信号
            ALUSrc  =1'b1;//立即数
            AluOp   =4'b0000;
            imm     =immJ;   
            invalid =1'b0;
            is_ecall =1'b0;
            is_mret =1'b0;
            csr_wen =2'd0; 
            end  
            7'b1100111:begin//jalr指令 跳转地址为(rs1+IMMI)&0，a先前jal写的值已经被存到寄存器ra里面了，这时候跳转地址rs1就是ra寄存器的值
            MemWrite=1'b0;
            MemRead =1'b0;
            Branch  =1'b0;
            Jump    =2'b10;//无跳转跳转
            MemtoReg=3'b010;//写回rd为pc+4
            RegWrite=1'b1;//写入rd为pc+4,使能信号
            ALUSrc  =1'b1;//立即数
            AluOp   =4'b0000;//控制rs1+Read_rs2
            imm     =immI;
            invalid =1'b0;
            is_ecall =1'b0;
            is_mret =1'b0;
            csr_wen =2'd0;                   
            end
            7'b0110111:begin//U型指令lui
            MemWrite=1'b0;
            MemRead =1'b0;
            Branch  =1'b0;
            Jump    =2'b00;//无跳转跳转
            MemtoReg=3'b011;
            RegWrite=1'b1;//写入rd,使能信号
            ALUSrc  =1'b1;//来源立即数
            AluOp   =4'b0000;
            imm     =immU;
            invalid =1'b0;
            is_ecall =1'b0;
            is_mret =1'b0;
            csr_wen =2'd0;                    
            end
            7'b0010111:begin//U型指令auipc 立即数左移12+PC存入rd
            MemWrite=1'b0;
            MemRead =1'b0;
            Branch  =1'b0;
            Jump    =2'b00;//无跳转跳转
            MemtoReg=3'b000;//相加写回
            RegWrite=1'b1;//写入rd,使能信号
            ALUSrc  =1'b1;//立即数
            AluOp   =4'b1001;//特殊。pc+立即数
            imm     =immU;
            invalid =1'b0;
            is_ecall =1'b0;
            is_mret =1'b0;
            csr_wen =2'd0;    
                
            end
            7'b1110011:begin//系统调用指令，也属于I型指令
            MemWrite=1'b0;
            MemRead =1'b0;
            invalid =1'b0;
            Branch  =1'b0;
            ALUSrc  =1'b0;//立即数
            AluOp   =4'b0;//特殊。pc+立即数
            Jump    =2'b00;//无跳转跳转
            imm  =immI;
            MemtoReg =3'b100;//选择csr寄存器的h值
            RegWrite =1'b1;//有效，需要写回rd
            case(func3)
            3'b000:begin 
              case(inst[31:20])
              12'h1:begin//ebreak指令
                is_ebreak=1'b1;
              end
              12'h0:begin//ecall指令
              //$display("ecall");
                is_ecall=1'b1;


              end
              12'h302:begin//mret
              is_mret =1'b1;
              //$display("mret");
              end
              
              default:begin
                invalid =1'b1;
              end
              endcase
            end
            3'b001:begin//csrrw,//根据立即数a选择csr寄存器，并把寄存器的数读到rd里面，再更新csr寄存器的值为src1
                csr_wen=2'b01;//0为不使能，01为写入，10为相或
              //   $display("csrw");
            end
            3'b010:begin//csrrs,//根据立即数a选择csr寄存器，并把寄存器的数读到rd里面，再更新csr寄存器的值为与src1相或
                csr_wen=2'b10;//0为不使能，01为写入，10为相或
            end
            default:begin 
            invalid =1'b1;                  
            end

            endcase    
            end
            default: begin
            MemWrite=1'b0;
            MemRead =1'b0;
            Branch  =1'b0;
            Jump    =2'b00;
            MemtoReg =3'b000;
            RegWrite=1'b0;
            ALUSrc  =1'b0;
            AluOp   =4'b000;
            imm  =32'h0000_0000;
            invalid =1'b1;
            csr_wen =2'd0;
            is_mret =1'b0;
            end
        endcase
    end
end
//系统类别的指令ebreak call
  
    always@(is_ebreak,invalid)begin
        if(is_ebreak)begin
      ebreak_instruction(inst);   
        end
        else if(invalid)
      invalid_inst(pc,inst);
      
    end

    
    
endmodule