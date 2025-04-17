#ifndef _COMMON_H_
#define _COMMON_H_
#include "/home/zzy/ysyx-workbench/npc/include/generated/autoconf.h"
#include <getopt.h> //
#include <string.h>
#include <stdlib.h>
#include <stdint.h>
#include <stdio.h>
#include <assert.h>
#include <verilated.h>
#include <verilated_vcd_c.h>
#include "../obj_dir/Vysyx_25030085_top.h"
#define ANSI_FG_BLACK "\33[1;30m"
#define ANSI_FG_RED "\33[1;31m"
#define ANSI_FG_GREEN "\33[1;32m"
#define ANSI_FG_YELLOW "\33[1;33m"
#define ANSI_FG_BLUE "\33[1;34m"
#define ANSI_FG_MAGENTA "\33[1;35m"
#define ANSI_FG_CYAN "\33[1;36m"
#define ANSI_FG_WHITE "\33[1;37m"
#define ANSI_BG_BLACK "\33[1;40m"
#define ANSI_BG_RED "\33[1;41m"
#define ANSI_BG_GREEN "\33[1;42m"
#define ANSI_BG_YELLOW "\33[1;43m"
#define ANSI_BG_BLUE "\33[1;44m"
#define ANSI_BG_MAGENTA "\33[1;45m"
#define ANSI_BG_CYAN "\33[1;46m"
#define ANSI_BG_WHITE "\33[1;47m"
#define ANSI_NONE "\33[0m"
#define PG_ALIGN __attribute((aligned(4096)))
#define CONFIG_MSIZE 0x8000000
#define RESET_VECTOR 0x80000000
#define CONFIG_MBASE 0x80000000
#define ANSI_FMT(str, fmt) fmt str ANSI_NONE
#define MAX_SIM_TIME 100
extern unsigned char isa_logo[];

typedef struct
{
    int gpr[32];
    uint32_t pc;
} CPU;
extern CPU CPU_state;

class Vysyx_25030085_top; 
class VerilatedVcdC;

// 声明全局可访问的指针
extern Vysyx_25030085_top *top; 
extern VerilatedVcdC *vcd;     
#endif