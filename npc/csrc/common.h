#ifndef _COMMON_H_
#define _COMMON_H_
#include "/home/zzy/ysyx-workbench/npc/include/generated/autoconf.h"
#include <getopt.h> //
#include <string.h>
#include <stdlib.h>
#include <stdint.h>
#include <stdio.h>
#include <time.h>
#include "svdpi.h" // DPI 标准头文件
#include <assert.h>
#include <verilated.h>
#include <verilated_vcd_c.h>
#include "../obj_dir/VysyxSoCFull.h"
#include <nvboard.h>
#include <VysyxSoCFull.h>
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
#define RESET_VECTOR 0x30000000
#define CONFIG_MBASE 0x30000000
#define ANSI_FMT(str, fmt) fmt str ANSI_NONE
#define MAX_SIM_TIME 655300
extern unsigned char isa_logo[];

typedef struct
{
    int gpr[32];
    uint32_t pc;
} CPU;
extern CPU CPU_state;

class VysyxSoCFull;
class VerilatedVcdC;

// 声明全局可访问的指针
extern VysyxSoCFull *soc_top;
extern VerilatedVcdC *vcd;

#define SERIAL_ADDR 0xa00003f8
#define UPTIME_ADDR 0xa0000048


// 定义共享数据结构，存储dpi_send_signals传递的所有值
typedef struct
{
    uint32_t pc;         // PC值
    uint32_t inst;       // 指令值
    unsigned char valid; // 有效信号
    unsigned char ready; // 就绪信号
    unsigned char done;  // 完成信号
} Top_Module;

// 声明全局共享变量（extern表示在其他文件定义）
extern Top_Module top;

#endif // DPI_SHARED_H





