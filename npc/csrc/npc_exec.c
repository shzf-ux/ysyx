#include "common.h"
extern Vysyx_25030085_top *top;
extern VerilatedVcdC *vcd;
extern int sim_time;
extern int flag_stop;
uint32_t pmem_read(uint32_t pc);



void npc_exec(uint64_t n)
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
}