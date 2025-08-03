import "DPI-C" function void ebreak_instruction (input int inst) ;
import "DPI-C" function void invalid_inst   (input int pc,input int inst);   
module ysyx_25030085_id (
    input               clock         ,
    input               reset         ,

    input               in_valid    ,
    input       [31:0]  in_inst     ,
    input       [31:0]  in_pc       ,
    output              in_ready    ,

    output      [4:0]   rs1_addr    ,
    output      [4:0]   rs2_addr    ,
    input       [31:0]  rs1_data    ,
    input       [31:0]  rs2_data    ,
    input       [31:0]  in_reg_a5   ,

    output              out_valid   ,
    output      [31:0]  pc_out      ,
    output      [31:0]  out_rs1_data,
    output      [31:0]  out_rs2_data,
    output      [20:0]  ctrl_out    ,
    output      [31:0]  imm_out     ,
    output      [31:0]  reg_a5_out  ,
    output      [4:0]   rd_out      ,
    input               out_ready   

);
  parameter IDLE = 0;
  parameter OUTPUT = 1;
  parameter WAIT = 2;
   reg [1:0] state;
   reg [31:0]inst,pc;


   assign in_ready=(state==IDLE);
   assign out_valid=(state==OUTPUT);



    always @(posedge clock or posedge reset) begin
      if(reset)begin
        inst<=0;
        pc<=32'h8000_0000;
        state<=IDLE;
      end
      else begin
      case(state)
      IDLE:begin
        if(in_valid&&in_ready)begin//接收数据
        inst<=in_inst;
        pc<=in_pc;  
        state<=OUTPUT;    
        end
      end
      OUTPUT:begin//锁存要输出的数据
        state<=WAIT;
      end
      WAIT:begin //输出数据
      if(out_ready)//*****
        state<=IDLE;
      end
      endcase
      end     
    end
    assign pc_out=pc;
    assign imm_out=imm;
    assign out_rs1_data=rs1_data;
    assign out_rs2_data=rs2_data;
    assign ctrl_out=ctrl_bus;
    assign reg_a5_out=in_reg_a5;

  assign rs1_addr=inst[19:15];
  assign rs2_addr=inst[24:20];



    reg invalid;//不合理的指令
    reg is_ebreak;
    reg [6:0] opcode=inst[6:0];
    reg [2:0] func3=inst[14:12];
    reg [6:0] func7=inst[31:25];
    reg [31:0] imm;
    reg [31:0] immI;
    reg [31:0] immJ;//最低位补0
    reg [31:0] immU;
    reg [31:0] immS;
    reg [31:0] immB;
    wire [4:0] rd_addr=inst[11:7];
    assign rd_out=rd_addr;


    assign immJ= {{12{inst[31]}}, inst[19:12],inst[20],inst[30:21],1'b0};
    assign immI={{20{inst[31]}}, inst[31:20]};
    assign immU={inst[31:12],12'b0};
    assign immS={{20{inst[31]}}, inst[31:25], inst[11:7]};
    assign immB={{20{inst[31]}},inst[7],inst[30:25],inst[11:8],1'b0};


     reg    MemWrite; //储存器控制信号，决定写
     reg    MemRead;//储存器控制信号  读
     reg [2:0]MemOp;//数据存储器操作方式，0字节，1半字，2一个字

     reg [2:0]MemtoReg;//选择写回数据来源（ALU结果/存储器数据/PC+4等）
   //000为alu计算结果，001为储存器数据，010为pc+4，jal;011为立即数直接写回lui，100为csr
     reg    RegWrite;//决定是否写回寄存器堆

     reg    Branch;//分支信号
     reg   [1:0] Jump;//01为jal，10为jalr
     reg    ALUSrc;//（0=寄存器，1=立即数）
     reg  [3:0] AluOp;
    //csr
     reg [1:0] csr_wen;//0为不使能，01为写入，10为相或
     reg is_ecall;
     reg is_mret;



wire [20:0] ctrl_bus = {csr_wen,is_mret,is_ecall,RegWrite,Jump,Branch,MemtoReg,MemOp,MemWrite,  MemRead,AluOp,ALUSrc};

//最低位补0
// 操作码常量
localparam OP_LOAD     = 7'b0000011;//lb lh,lw,lbu,lhu
localparam OP_STORE    = 7'b0100011;//sb sh sw
localparam OP_BRANCH   = 7'b1100011;
localparam OP_JAL      = 7'b1101111;
localparam OP_JALR     = 7'b1100111;
localparam OP_OP_IMM   = 7'b0010011;
localparam OP_OP       = 7'b0110011;
localparam OP_LUI      = 7'b0110111;
localparam OP_AUIPC    = 7'b0010111;
localparam OP_SYSTEM   = 7'b1110011;

// 功能码常量 (func3)
localparam F3_ADD_SUB  = 3'b000;
localparam F3_SLL      = 3'b001;
localparam F3_SLT      = 3'b010;
localparam F3_SLTU     = 3'b011;
localparam F3_XOR      = 3'b100;
localparam F3_SR       = 3'b101;
localparam F3_OR       = 3'b110;
localparam F3_AND      = 3'b111;

// func7常量
localparam F7_SUB      = 7'b0100000;
localparam F7_SRA      = 7'b0100000;
localparam F7_DEFAULT  = 7'b0000000;

// ALU操作码常量
localparam ALU_ADD     = 4'b0000;
localparam ALU_SLL     = 4'b0001;
localparam ALU_SLT     = 4'b0010;
localparam ALU_SLTU    = 4'b0011;
localparam ALU_XOR     = 4'b0100;
localparam ALU_SRA     = 4'b0101;
localparam ALU_SRL     = 4'b0110;
localparam ALU_OR      = 4'b0111;
localparam ALU_AND     = 4'b1000;
localparam ALU_SUB     = 4'b1010;
localparam ALU_PCADD   = 4'b1001; // 用于AUIPC

// 跳转类型常量
localparam JUMP_NONE   = 2'b00;
localparam JUMP_JAL    = 2'b01;
localparam JUMP_JALR   = 2'b10;

// MemtoReg选择常量
localparam MTR_ALU     = 3'b000;
localparam MTR_MEM     = 3'b001;
localparam MTR_PCP4    = 3'b010;
localparam MTR_IMM     = 3'b011;
localparam MTR_CSR     = 3'b100;

// 内存操作类型常量

localparam OP_LW  = 3'b000;  // 加载字(32位，有符号)
localparam OP_LH  = 3'b001;  // 加载半字(16位，有符号)
localparam OP_LB  = 3'b010;  // 加载字节(8位，有符号)
localparam OP_LHU = 3'b011;  // 加载半字(16位，无符号)
localparam OP_LBU = 3'b100;  // 加载字节(8位，无符号)
localparam OP_SW  = 3'b101;  // 存储字(32位)
localparam OP_SH  = 3'b110;  // 存储半字(16位)
localparam OP_SB  = 3'b111;  // 存储字节(8位)


// CSR操作类型
localparam CSR_NONE    = 2'b00;
localparam CSR_WRITE   = 2'b01;
localparam CSR_SET     = 2'b10;

// 系统调用常量
localparam ECALL_CODE  = 12'h0;
localparam EBREAK_CODE = 12'h1;
localparam MRET_CODE   = 12'h302;

always @(*) begin

  AluOp=ALU_ADD;
  ALUSrc=0;

  MemWrite=0;
  MemOp=0;
  MemRead=0;
  MemtoReg=MTR_ALU;

  RegWrite=0;
  csr_wen=CSR_NONE;

  Branch=0;
  Jump=JUMP_NONE;

  is_ecall=0;
  is_mret =0;
  is_ebreak=0;
    if (state==OUTPUT) begin
        case (opcode)
            OP_OP: begin // R-type指令
                RegWrite = 1'b1;
                case (func3)
                    F3_ADD_SUB: AluOp = (func7 == F7_SUB) ? ALU_SUB : ALU_ADD;
                    F3_SLL:     AluOp = ALU_SLL;
                    F3_SLT:     AluOp = ALU_SLT;
                    F3_SLTU:    AluOp = ALU_SLTU;
                    F3_XOR:     AluOp = ALU_XOR;
                    F3_SR:      AluOp = (func7 == F7_SRA) ? ALU_SRA : ALU_SRL;
                    F3_OR:      AluOp = ALU_OR;
                    F3_AND:     AluOp = ALU_AND;
                    default:    invalid = 1'b1;
                endcase
            end
            
            OP_OP_IMM: begin // I-type指令
                RegWrite = 1'b1;
                ALUSrc   = 1'b1;
                imm      = (func3 == F3_SLL || func3 == F3_SR) ? {27'b0, inst[24:20]} : immI;
                
                case (func3)
                    F3_ADD_SUB: AluOp = ALU_ADD;
                    F3_SLL:     AluOp = ALU_SLL;
                    F3_SLT:     AluOp = ALU_SLT;
                    F3_SLTU:    AluOp = ALU_SLTU;
                    F3_XOR:     AluOp = ALU_XOR;
                    F3_SR:      AluOp = (func7 == F7_SRA) ? ALU_SRA : ALU_SRL;
                    F3_OR:      AluOp = ALU_OR;
                    F3_AND:     AluOp = ALU_AND;
                    default:    invalid = 1'b1;
                endcase
            end
            
            OP_LOAD: begin // 加载指令
                MemRead  = 1'b1;
                RegWrite = 1'b1;
                ALUSrc   = 1'b1;
                MemtoReg = MTR_MEM;
                imm      = immI;
                
                case (func3)
                    3'b000: MemOp = OP_LB; //lb
                    3'b001: MemOp = OP_LH; //lh
                    3'b010: MemOp = OP_LW; //lw
                    3'b100: MemOp = OP_LBU;//lbu
                    3'b101: MemOp = OP_LHU;//lhu
                    default: invalid = 1'b1;
                endcase
            end
            
            OP_STORE: begin // 存储指令
                MemWrite = 1'b1;
                ALUSrc   = 1'b1;
                imm      = immS;
                
                case (func3)
                    3'b000: MemOp = OP_SB;  //sb
                    3'b001: MemOp = OP_SH;  //sh
                    3'b010: MemOp = OP_SW;  //sw
                    default: invalid = 1'b1;
                endcase
            end
            
            OP_BRANCH: begin // 分支指令
                ALUSrc = 1'b1;
                AluOp  = ALU_PCADD;
                imm    = immB;
                
                case (func3)
                    3'b000: Branch = (rs1_data == rs2_data);  // beq
                    3'b001: Branch = (rs1_data != rs2_data);  // bne
                    3'b100: Branch = $signed(rs1_data) < $signed(rs2_data);  // blt
                    3'b101: Branch = $signed(rs1_data) >= $signed(rs2_data); // bge
                    3'b110: Branch = rs1_data < rs2_data;   // bltu
                    3'b111: Branch = rs1_data >= rs2_data;  // bgeu
                    default: invalid = 1'b1;
                endcase
            end
            
            OP_JAL: begin // JAL指令
                Jump     = JUMP_JAL;
                RegWrite = 1'b1;
                ALUSrc   = 1'b1;
                MemtoReg = MTR_PCP4;
                imm      = immJ;
            end
            
            OP_JALR: begin // JALR指令
                Jump     = JUMP_JALR;
                RegWrite = 1'b1;
                ALUSrc   = 1'b1;
                MemtoReg = MTR_PCP4;
                imm      = immI;
            end
            
            OP_LUI: begin // LUI指令
                RegWrite = 1'b1;
                ALUSrc   = 1'b1;
                MemtoReg = MTR_IMM;
                imm      = immU;
            end
            
            OP_AUIPC: begin // AUIPC指令
                RegWrite = 1'b1;
                ALUSrc   = 1'b1;
                AluOp    = ALU_PCADD;
                imm      = immU;
            end
            
            OP_SYSTEM: begin // 系统调用指令
                RegWrite = (func3 != 3'b000);
                MemtoReg = MTR_CSR;
                imm      = immI;
                
                case (func3)
                    3'b000: begin
                        case (inst[31:20])
                            EBREAK_CODE: is_ebreak = 1'b1;
                            ECALL_CODE:  is_ecall  = 1'b1;
                            MRET_CODE:   is_mret   = 1'b1;
                            default:     invalid = 1'b1;
                        endcase
                    end
                    3'b001: csr_wen = CSR_WRITE; // csrrw
                    3'b010: csr_wen = CSR_SET;   // csrrs
                    default: invalid = 1'b1;
                endcase
            end
            
            default: invalid = 1'b1;
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