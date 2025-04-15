#include"common.h"
extern  int flag_stop ;
extern "C" void ebreak_instruction(uint32_t inst)
{
    printf("%sTrigger the Ebreak inst%s\n", ANSI_BG_GREEN, ANSI_NONE);
    flag_stop = 1;
}
extern "C" void invalid_inst(uint32_t thispc, uint32_t inst)
{
    printf("invalid opcode(PC = %08x):\n"
           "\t%08x...\n",
           thispc, inst);

    printf("There are two cases which will trigger this unexpected exception:\n"
           "1. The instruction at PC = %08x is not implemented.\n"
           "2. Something is implemented incorrectly.\n",
           thispc);
    printf("Find this PC(%08x) in the disassembling result to distinguish which case it is.\n\n", thispc);
    printf(ANSI_FMT("If it is the first case, see\n%s\nfor more details.\n\n"
                    "If it is the second case, remember:\n"
                    "* The machine is always right!\n"
                    "* Every line of untested code is always wrong!\n\n",
                    ANSI_FG_RED),
           isa_logo);
    flag_stop = 2;
}
const char *regs[] = {
    "x0", "ra", "sp", "gp", "tp", "t0", "t1", "t2",
    "s0", "s1", "a0", "a1", "a2", "a3", "a4", "a5",
    "a6", "a7", "s2", "s3", "s4", "s5", "s6", "s7",
    "s8", "s9", "s10", "s11", "t3", "t4", "t5", "t6"};

static int reg_index = 0;


extern "C" void info_register(uint32_t reg_value,int en_display)
{
 
       if (reg_index < 32)
       {
              CPU_state.gpr[reg_index] = reg_value;
              CPU_state.pc = top->pc_out;
              if (en_display)
              {
              printf("%-3s: 0x%08x\n", regs[reg_index], reg_value);
              }
              reg_index++;
              if(reg_index==32)
              reg_index = 0;
       }
}
