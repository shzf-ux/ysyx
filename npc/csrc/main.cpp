#include <iostream>
#include "common.h"
int flag_stop = 0;
//0正常；1 ebreak指令；2不合理指令
int NPC_State = 0;
int sim_time = 0;

void init_monitor(int, char *[]);
void sdb_mainloop();
Vysyx_25030085_top *top = new Vysyx_25030085_top;
VerilatedVcdC *vcd = new VerilatedVcdC;
CPU CPU_state;

int main(int argc, char **argv)
{
   
    init_monitor(argc, argv);
    
    sdb_mainloop();
    if (flag_stop == 2) // 不合理
    {
        printf("%sHIT BAD TRAP  %s", ANSI_FG_RED, ANSI_NONE);
        printf("at pc = %08x\n", top->pc_out);
        NPC_State = 2;

    }
    
    else if(flag_stop==1)//遇到ebreak指令
    {
        printf("%sHIT GOOD TRAP  %s", ANSI_FG_GREEN, ANSI_NONE);
        printf("at pc = %08x\n", top->pc_out);
        NPC_State = 0;
    }
    else
    NPC_State = 1;

    // 清理
    vcd->close();
    delete top;
    delete vcd;

    return NPC_State;
}