#include "common.h"
extern Vysyx_25030085_top *top;
extern VerilatedVcdC *vcd;
extern int sim_time;
extern int flag_stop;
uint32_t pmem_read(uint32_t pc);



int npc_exec(uint64_t n)
{
    while ((sim_time < MAX_SIM_TIME) && flag_stop == 0&&(n--)>0)
    {
        top->clk = !top->clk;
        top->instruction = pmem_read(top->pc_out);
        // printf("pc:%08x\n", top->pc_out);

        top->eval();
        vcd->dump(sim_time);
        sim_time++;
    }
    if (flag_stop == 1) // 遇到ebreak退出
    {

        printf("%sHIT GOOD TRAP  %s", ANSI_FG_GREEN, ANSI_NONE);
        printf("at pc = %08x\n", top->pc_out);
        return 0;
    }
    else // 不合理的指令
    {
        printf("%sHIT BAD TRAP  %s", ANSI_FG_RED, ANSI_NONE);
        printf("at pc = %08x\n", top->pc_out);
        return 1;
    }

    // 清理
    vcd->close();
    delete top;
    delete vcd;
}