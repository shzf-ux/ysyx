#include <iostream>
#include "common.h"
int flag_stop = 0;
int NPC_State = 0;
int sim_time = 0;
Vysyx_25030085_top *top = new Vysyx_25030085_top;
VerilatedVcdC *vcd = new VerilatedVcdC;


void init_monitor(int, char *[]);
void sdb_mainloop();

uint32_t pmem_read(uint32_t pc);
int main(int argc, char **argv)
{
    init_monitor(argc, argv);
    sdb_mainloop();
    if (flag_stop == 1) // 遇到ebreak退出
    {

        printf("%sHIT GOOD TRAP  %s", ANSI_FG_GREEN, ANSI_NONE);
        printf("at pc = %08x\n", top->pc_out);
        NPC_State = 0;
    }
    else // 不合理的指令
    {
        printf("%sHIT BAD TRAP  %s", ANSI_FG_RED, ANSI_NONE);
        printf("at pc = %08x\n", top->pc_out);
        NPC_State = 1;
    }

    // 清理
    vcd->close();
    delete top;
    delete vcd;

    return NPC_State;
}