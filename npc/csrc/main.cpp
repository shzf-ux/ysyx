#include <iostream>
#include "common.h"
int flag_stop = 0;

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

   
   
}