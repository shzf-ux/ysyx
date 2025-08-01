#include "common.h"
#include <dlfcn.h>
#include "difftest/dut.h"
#define MAX_EXE 1000000
extern int sim_time;
extern int flag_stop;
extern int  NPC_State;
uint32_t pmem_read(uint32_t raddr,int len);
typedef struct LogBuf
{
    char logbuf[65535];
} LogBuf;

LogBuf *s;

int max_exe = MAX_EXE;
void npc_exec(uint64_t n)
{  
    int batch_mode = (int)n == -1;
    while (flag_stop == 0 && (n--) > 0)
    {
        top->clk = !top->clk;
        int is_rising_edge = (top->clk == 1);//记录上升沿
        top->instruction = pmem_read(top->pc_out,4);
         //printf("pc:%08x\n", top->pc_out);
        #ifdef CONFIG_ITRACE_COND

        if (is_rising_edge&&!batch_mode)
        {
            s = (LogBuf *)malloc(sizeof(LogBuf));
        char *p = s->logbuf;
        p += snprintf(p, sizeof(s->logbuf), "%08x:", top->pc_out);
        int ilen =4;
        int i;
        uint8_t *inst = (uint8_t *)&top->instruction; // 储存指令，并把指令分为四段

        for (i = ilen - 1; i >= 0; i--)
        {

            p += snprintf(p, 4, " %02x", inst[i]); // 把指令从右到左打印出来，并写入buf里面
        }
        
        int ilen_max =  4;
        int space_len = ilen_max - ilen;
        if (space_len < 0)
            space_len = 0;
        space_len = space_len * 3 + 1;
        memset(p, ' ', space_len);
        
        p += space_len;
        void disassemble(char *str, int size, uint64_t pc, uint8_t *code, int nbyte);
        
        disassemble(p, s->logbuf + sizeof(s->logbuf) - p, // 向buf加入反汇编后的内容
                    top->pc_out, (uint8_t *)&top->instruction, ilen);

        printf("%s\n", s->logbuf);
        free(s);
        }
       #endif

        top->eval();
        if (is_rising_edge)
        {
          // printf("pc:%08x\n", top->pc_out);
          #ifdef CONFIG_DIFFTEST
            difftest_step(top->pc_out);
          #endif
        }
        top->eval();
        vcd->dump(sim_time);
        sim_time++;
   }
}