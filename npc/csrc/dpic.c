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
