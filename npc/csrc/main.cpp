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

    top->rst = 1;
    top->clk = 0;
    top->eval(); // 此时复位逻辑未触发（无时钟上升沿）

    // 2. 生成时钟上升沿以触发复位
    top->clk = 1;
    top->eval(); // 此时复位逻辑生效，pc_out = 0x80000000


    // 3. 释放复位信号
    top->rst = 0;
    top->clk = 0;
    top->eval();
    int sim_time = 0;
    const int MAX_SIM_TIME = 50;
    while ((sim_time < MAX_SIM_TIME) && flag_stop == 0)
    {
        
        top->instruction = pmem_read(top->pc_out);
        printf("instruction:%08x\n", top->instruction);
        top->clk = !top->clk;
        top->eval();
        vcd->dump(sim_time);
        sim_time++;

        // 输出信号值
        if (top->clk) {
          // std::cout << "Sim Time: " << sim_time << std::endl;
        }
    }

    // 清理
    vcd->close();
    delete top;
    delete vcd;
    return 0;
}