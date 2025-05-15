/***************************************************************************************
* Copyright (c) 2014-2024 Zihao Yu, Nanjing University
*
* NEMU is licensed under Mulan PSL v2.
* You can use this software according to the terms and conditions of the Mulan PSL v2.
* You may obtain a copy of Mulan PSL v2 at:
*          http://license.coscl.org.cn/MulanPSL2
*
* THIS SOFTWARE IS PROVIDED ON AN "AS IS" BASIS, WITHOUT WARRANTIES OF ANY KIND,
* EITHER EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO NON-INFRINGEMENT,
* MERCHANTABILITY OR FIT FOR A PARTICULAR PURPOSE.
*
* See the Mulan PSL v2 for more details.
***************************************************************************************/

#include "local-include/reg.h"
#include <cpu/cpu.h>
#include <cpu/ifetch.h>
#include <cpu/decode.h>
void display_call_func(uint32_t pc, uint32_t target);
void display_ret_func(uint32_t pc,uint32_t target); // 返回地址
static word_t *csr_register(word_t imm);
#define R(i) gpr(i)
#define Mr vaddr_read
#define Mw vaddr_write
#define CSR(i) *csr_register(i)
#define ECALL(dnpc) \
  {                 \
    IFDEF(CONFIG_ETRACE, {\
printf("\n" ANSI_FMT("[ETRACE]", ANSI_FG_YELLOW) "ecall at: mepc = " FMT_WORD ", mcause = " FMT_WORD "\n",\
       cpu.csr.mepc, cpu.csr.mcause);\
});\
      bool success;                                                   \
    dnpc = (isa_raise_intr(isa_reg_str2val("$a7", &success), s->pc)); \
  }
  
#define MRET() \
{\
s->dnpc = CSR(0x341);\
cpu.csr.mstatus |= ((cpu.csr.mstatus & (1 << 7)) >>4);\
cpu.csr.mstatus |= (1 << 7);\
cpu.csr.mstatus &= ~((1 << 11) + (1 << 12));\
}
static word_t *csr_register(word_t imm)//返回一个指针可以修改
{
  switch (imm)
  {
  case 0x300:return &cpu.csr.mstatus;//mstatus的地址
  case 0x305:return &cpu.csr.mtvec; // mtvec的地址
  case 0x341:return &cpu.csr.mepc; // mepc的地址
  case 0x342:return &cpu.csr.mcause;//mcause的地址
  default:
    printf("no match csr register\n");
    return 0;
    break;
  }
}

    enum {
      TYPE_I,
      TYPE_U,
      TYPE_S,
      TYPE_N,
      TYPE_J,
      TYPE_B,
      TYPE_R // none
    };
#define src1R() do { *src1 = R(rs1); } while (0)
#define src2R() do { *src2 = R(rs2); } while (0)
#define immI() do { *imm = SEXT(BITS(i, 31, 20), 12); } while(0)
#define immU() do { *imm = SEXT(BITS(i, 31, 12), 20) << 12; } while(0)

#define immS() do { *imm = (SEXT(BITS(i, 31, 25), 7) << 5) | BITS(i, 11, 7); } while(0)
#define immJ() do { *imm = (SEXT(BITS(i,31,31),1)<<20 |(BITS(i,19,12)<<12)| (BITS(i,20,20)<<11) |(BITS(i,30,21)<<1));}while(0)
//只有最高位需要符号扩展，其他不需要
#define immB() do { *imm = (SEXT(BITS(i,31,31),1)<<12 |(BITS(i,7,7)<<11)  | (BITS(i,30,25)<<5)  |(BITS(i,11,8))<<1);}while(0)



static void decode_operand(Decode *s, int *rd, word_t *src1, word_t *src2, word_t *imm, int type) {
  uint32_t i = s->isa.inst;
  int rs1 = BITS(i, 19, 15);
  int rs2 = BITS(i, 24, 20);
  *rd     = BITS(i, 11, 7);//R I 等寄存器
  switch (type) {
    case TYPE_I: src1R();          immI(); break;//I型指令的立即数进行了符号扩展
    case TYPE_U:                   immU(); break;
    case TYPE_S: src1R(); src2R(); immS(); break;
    case TYPE_J:                   immJ(); break;
    case TYPE_R: src1R(); src2R();         break;
    case TYPE_B: src1R(); src2R(); immB(); break;
    case TYPE_N:
      break;
    default: panic("unsupported type = %d", type);
  }
}

static int decode_exec(Decode *s) {
  s->dnpc = s->snpc;//此时，snpc为pc+4,赋值给dnpc

#define INSTPAT_INST(s) ((s)->isa.inst)
#define INSTPAT_MATCH(s, name, type, ... /* execute body */ ) { \
  int rd = 0; \
  word_t src1 = 0, src2 = 0, imm = 0; \
  decode_operand(s, &rd, &src1, &src2, &imm, concat(TYPE_, type)); \
  __VA_ARGS__ ; \
}
//word_t默认为uint32
  INSTPAT_START();
  //两个U型指令
  INSTPAT("??????? ????? ????? ??? ????? 01101 11", lui    , U, R(rd) =imm);//加载高位立即数
  INSTPAT("??????? ????? ????? ??? ????? 00101 11", auipc  , U, R(rd) = s->pc + imm);
  //从内存加载,I型指令
  INSTPAT("??????? ????? ????? 100 ????? 00000 11", lbu    , I, R(rd) = Mr(src1 + imm, 1));//无符号扩展，加载一个字节
  INSTPAT("??????? ????? ????? 101 ????? 00000 11", lhu    , I, R(rd) = Mr(src1 + imm, 2));// 无符号扩展，加载半个字
  INSTPAT("??????? ????? ????? 000 ????? 00000 11", lb     , I, R(rd) = SEXT(Mr(src1 + imm, 1),16)); // 需要扩展,加载一个字节
  INSTPAT("??????? ????? ????? 001 ????? 00000 11", lh     , I, R(rd) = SEXT(Mr(src1 + imm, 2),16));    // 需要扩展,加载半个字
  INSTPAT("??????? ????? ????? 010 ????? 00000 11", lw     , I, R(rd) = Mr(src1 + imm, 4));//不需要扩展，已经是32位了

  //R型指令，
  INSTPAT("0000000 ????? ????? 000 ????? 01100 11", add    , R, R(rd) = src1+src2);
  INSTPAT("0100000 ????? ????? 000 ????? 01100 11", sub    , R, R(rd) = src1-src2);
  INSTPAT("0000000 ????? ????? 001 ????? 01100 11", sll    , R, R(rd) = src1<<src2);//左移
  INSTPAT("0000000 ????? ????? 101 ????? 01100 11", srl    , R, R(rd) = src1>>src2);//逻辑右移
  INSTPAT("0100000 ????? ????? 101 ????? 01100 11", sra    , R, R(rd) = (SEXT(BITS(src1, 31, 31), 1) << (32 - src2)) | (src1 >> src2));

  INSTPAT("0000000 ????? ????? 010 ????? 01100 11", slt    , R, R(rd) = (int32_t)src1 < (int32_t)src2 ? 1 : 0); // 小于置位,有符号数的比较
  INSTPAT("0000000 ????? ????? 011 ????? 01100 11", sltu   , R, R(rd) = (uint32_t)src1 < (uint32_t)src2 ? 1 : 0);//无符号比较
  INSTPAT("0000000 ????? ????? 100 ????? 01100 11", xor    , R, R(rd) = src1 ^ src2 );
  INSTPAT("0000000 ????? ????? 110 ????? 01100 11", or     , R, R(rd) = src1 | src2 );
  INSTPAT("0000000 ????? ????? 111 ????? 01100 11", and    , R, R(rd) = src1 & src2 );

  INSTPAT("0000001 ????? ????? 000 ????? 01100 11", mul    , R, R(rd) = src1 *src2);
  INSTPAT("0000001 ????? ????? 001 ????? 01100 11", mulh   , R, int32_t a = (int32_t)src1; int32_t b = (int32_t)src2; int64_t tmp = (int64_t)a * (int64_t)b; R(rd) = BITS(tmp, 63, 32));
  INSTPAT("0000001 ????? ????? 011 ????? 01100 11", mulhu  , R, uint64_t tmp = (uint64_t)src1 * (uint64_t)src2; R(rd) = BITS(tmp, 63, 32));
  
  INSTPAT("0000001 ????? ????? 100 ????? 01100 11", div    , R, R(rd) = (int32_t)src1 / (int32_t)src2);
  INSTPAT("0000001 ????? ????? 101 ????? 01100 11", divu   , R, R(rd) = (uint32_t)src1 /(uint32_t)src2);
  INSTPAT("0000001 ????? ????? 110 ????? 01100 11", rem    , R, R(rd) = (int32_t)src1 % (int32_t)src2);
  INSTPAT("0000001 ????? ????? 111 ????? 01100 11", remu   , R, R(rd) = (uint32_t)src1 % (uint32_t)src2);

  //I型指令的逻辑运算，比较型
  INSTPAT("??????? ????? ????? 010 ????? 00100 11", slti   , I, R(rd) = (int32_t)src1<(int32_t)imm ? 1 : 0);//有符号比较立即数
  INSTPAT("??????? ????? ????? 111 ????? 00100 11", andi   , I, R(rd) = src1&imm);
  INSTPAT("??????? ????? ????? 110 ????? 00100 11", ori    , I, R(rd) = src1|imm);
  INSTPAT("??????? ????? ????? 100 ????? 00100 11", xori   , I, R(rd) = src1^imm );
  INSTPAT("0000000 ????? ????? 001 ????? 00100 11", slli   , I, R(rd) = src1 << imm);
  INSTPAT("??????? ????? ????? 011 ????? 00100 11", sltiu  , I, R(rd) = (uint32_t)src1 < (uint32_t)imm ? 1 : 0);//无符号比较立即数
  INSTPAT("0100000 ????? ????? 101 ????? 00100 11", srai   , I, imm = BITS(imm, 4, 0); R(rd) = (SEXT(BITS(src1, 31, 31), 1) << (32 - imm)) | (src1 >> imm)); // 算数右移
  INSTPAT("0000000 ????? ????? 101 ????? 00100 11", srli   , I, R(rd) = src1>>imm);//逻辑右移
  // B型指令
  INSTPAT("??????? ????? ????? 000 ????? 11000 11", beq    , B, s->dnpc=(src1==src2) ? s->pc+imm :s->dnpc );//相等就跳转
  INSTPAT("??????? ????? ????? 001 ????? 11000 11", bne    , B, s->dnpc=(src1!=src2) ? s->pc+imm :s->dnpc); // 不相等就跳转
  INSTPAT("??????? ????? ????? 100 ????? 11000 11", blt    , B, s->dnpc = ((int32_t)src1 <(int32_t)src2) ? s->pc + imm : s->dnpc);//有符号小于
  INSTPAT("??????? ????? ????? 101 ????? 11000 11", bge    , B, s->dnpc = ((int32_t)src1 >= (int32_t)src2) ? s->pc + imm : s->dnpc);//有符号大于等于
  INSTPAT("??????? ????? ????? 110 ????? 11000 11", bltu   , B, s->dnpc = (src1 < src2) ? s->pc + imm : s->dnpc);//无符号小于
  INSTPAT("??????? ????? ????? 111 ????? 11000 11", bgeu   , B, s->dnpc = (src1 >= src2) ? s->pc + imm : s->dnpc);//无符号大于等于
  INSTPAT("??????? ????? ????? 000 ????? 00100 11", addi   , I, R(rd) = src1+imm);//相当于mv，li
                //addi的func3为000，opcode为0010011，                        可以实现有符号数的相加
  INSTPAT("??????? ????? ????? ??? ????? 11011 11", jal, J, R(rd) = s->pc + 4; s->dnpc = s->pc + imm;
          IFDEF(CONFIG_FTRACE, if (rd == 1) { display_call_func(s->pc, s->dnpc); }));

  INSTPAT("??????? ????? ????? 000 ????? 11001 11", jalr, I, R(rd) = s->pc + 4; s->dnpc = (src1 + imm) & ~1;
          IFDEF(CONFIG_FTRACE, if (rd == 1) { display_call_func(s->pc, s->dnpc); } else if (rd == 0 && src1 == R(1)) { display_ret_func(s->pc,s->dnpc); })); // 相当于伪指令ret，末尾置位0
  // 3个S类型的指令
  INSTPAT("??????? ????? ????? 000 ????? 01000 11", sb, S, Mw(src1 + imm, 1, src2)); // 写入的地址，长度，数据
  INSTPAT("??????? ????? ????? 010 ????? 01000 11", sw, S, Mw(src1 + imm, 4, src2));
  INSTPAT("??????? ????? ????? 001 ????? 01000 11", sh, S, Mw(src1 + imm, 2, src2));
  INSTPAT("0000000 00001 00000 000 00000 11100 11", ebreak, N, NEMUTRAP(s->pc, R(10))); // R(10) is $a0

//异常处理机制
  INSTPAT("??????? ????? ????? 001 ????? 11100 11", csrrw, I, R(rd) = CSR(imm);CSR(imm)=src1); // 读csr寄存器的的值到rd，并更新
  INSTPAT("??????? ????? ????? 010 ????? 11100 11", csrrs, I, R(rd) = CSR(imm);CSR(imm)|=src1); // 读csr寄存器的的值到rd，并置位
  INSTPAT("0000000 00000 00000 000 00000 11100 11", ecall, N, ECALL(s->dnpc));
  INSTPAT("0011000 00010 00000 000 00000 11100 11", mret,  N,MRET());

  INSTPAT("??????? ????? ????? ??? ????? ????? ??", inv, N, INV(s->pc));
  INSTPAT_END();

  R(0) = 0; // reset $zero to 0

  return 0;
}

int isa_exec_once(Decode *s) {
  s->isa.inst = inst_fetch(&s->snpc, 4);
  void trace_inst(word_t pc, uint32_t inst); 
  trace_inst(s->pc, s->isa.inst);            // 跟踪记录指令
  return decode_exec(s);
}
