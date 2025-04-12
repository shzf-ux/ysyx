#include <verilated.h>
#include <verilated_vcd_c.h>
#include "../obj_dir/Vysyx_25030085_top.h"
#include <iostream>
#include "monitor.h"

int  flag_stop = 0;

void init_monitor(int, char *[]);

extern "C" void ebreak_instruction(uint32_t inst)
{
    printf("%sTrigger the Ebreak inst%s\n",ANSI_BG_GREEN,ANSI_NONE);
    flag_stop = 1;
}

uint32_t pmem_read(uint32_t pc);
int main(int argc, char **argv)
{
    init_monitor(argc, argv);
 
    Verilated::commandArgs(argc, argv);
    Vysyx_25030085_top *top = new Vysyx_25030085_top;

    // 启用波形跟踪
    Verilated::traceEverOn(true);
    VerilatedVcdC* vcd = new VerilatedVcdC;
    top->trace(vcd, 5);
    vcd->open("waveform.vcd");

    int sim_time = 0;
    // 1. 初始化信号
    top->clk = 0;
    top->rst = 0;
    top->eval();

    sim_time++;

    // 1.5 开始复位流程
    top->clk = 1;
    top->rst = 1;
    top->eval();
    top->instruction = pmem_read(top->pc_out);
    vcd->dump(sim_time); // 写入复位信号置位状态
    sim_time++;


    // 3. 释放复位信号
    top->rst = 0;
    top->clk = 0;
    top->instruction = pmem_read(top->pc_out);
    top->eval();
    vcd->dump(sim_time); // 写入复位释放状态
    sim_time++;
    const int MAX_SIM_TIME = 100;
    while ((sim_time < MAX_SIM_TIME) && flag_stop == 0)
    {
        top->clk = !top->clk;
        top->instruction = pmem_read(top->pc_out);

        top->eval();
        vcd->dump(sim_time);
        sim_time++;

        // 输出信号值
        if (top->clk) {
          // std::cout << "Sim Time: " << sim_time << std::endl;
        }
    }
    if (flag_stop == 1)
    {

        printf("%sHIT GOOD TRAP  %s", ANSI_FG_GREEN, ANSI_NONE);
        printf("at pc = %08x\n", top->pc_out);
    }
    else
    {
        printf("%sHIT BAD TRAP  %s", ANSI_FG_RED, ANSI_NONE);
        printf("at pc = %08x\n", top->pc_out);
    }

    // 清理
    vcd->close();
    delete top;
    delete vcd;
    return 0;
}