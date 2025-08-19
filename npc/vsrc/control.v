import "DPI-C" function void ebreak_instruction (input int inst);
import "DPI-C" function void invalid_inst   (input int pc, input int inst);

module ysyx_25030085_id (
    input  [31:0]     inst,
    input  [31:0]     pc,
    // 寄存器地址输出
    output [4:0]      rs1_addr,
    output [4:0]      rs2_addr,
    output [4:0]      rd_addr,
    // 控制信号输出
    output            MemWrite,    // 存储器写使能
    output            MemRead,     // 存储器读使能
    output [1:0]      MemOp,       // 存储器操作类型
    output [1:0]      MemtoReg,    // 写回数据来源
    output            RegWrite,    // 寄存器写使能
    output            Jump,        // 跳转信号（jalr用）
    output            ALUSrc,      // 运算数来源（0=寄存器，1=立即数）
    output [31:0]     imm          // 立即数
);


wire [6:0] opcode = inst[6:0];
wire [2:0] func3  = inst[14:12];
wire [6:0] func7  = inst[31:25];
wire [11:0] csr_imm = inst[31:20]; // 系统指令立即数（ebreak用）

// 9条指令的特征判断（复位时这些信号无效）
wire is_add   = (opcode == 7'b0110011) && (func3 == 3'b000) && (func7 == 7'b0000000);
wire is_addi  = (opcode == 7'b0010011) && (func3 == 3'b000);
wire is_lui   = (opcode == 7'b0110111);
wire is_lw    = (opcode == 7'b0000011) && (func3 == 3'b010);
wire is_lbu   = (opcode == 7'b0000011) && (func3 == 3'b100);
wire is_sw    = (opcode == 7'b0100011) && (func3 == 3'b010);
wire is_sb    = (opcode == 7'b0100011) && (func3 == 3'b000);
wire is_jalr  = (opcode == 7'b1100111) && (func3 == 3'b000);
wire is_ebreak= (opcode == 7'b1110011) && (func3 == 3'b000) && (csr_imm == 12'h001);





assign rs1_addr = inst[19:15] ;
assign rs2_addr =  inst[24:20];
assign rd_addr  =  inst[11:7] ;



// 存储器写使能（复位时为0）
assign MemWrite =  (is_sw | is_sb) ;

// 存储器读使能（复位时为0）
assign MemRead  = (is_lw | is_lbu) ;

assign MemOp[1] = is_lbu;                  
assign MemOp[0] = is_lw | is_sw;           
   



                     
assign MemtoReg[1]= is_jalr | is_lui;          
assign MemtoReg[0]= (is_lw | is_lbu) | is_lui; 


// 寄存器写使能（复位时为0）
assign RegWrite =  is_add | is_addi | is_lui | is_lw | is_lbu | is_jalr;

// 跳转信号（复位时为0）
assign Jump     = is_jalr ;

// 运算数来源（复位时为0）
assign ALUSrc   =  is_addi | is_lui | is_lw | is_lbu | is_sw | is_sb | is_jalr;


wire [31:0] immI = {{20{inst[31]}}, inst[31:20]};
wire [31:0] immU = {inst[31:12], 12'b0};
wire [31:0] immS = {{20{inst[31]}}, inst[31:25], inst[11:7]};

assign imm      =   is_addi | is_lw | is_lbu | is_jalr ? immI :
                    is_lui                            ? immU :
                    is_sw | is_sb                     ? immS :
                    32'h0;



always @(*) begin
if (is_ebreak) begin
        ebreak_instruction(inst);
    end 
end

endmodule