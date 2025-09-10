#include "common.h"
#include <dlfcn.h>
#include "difftest/dut.h"

#define MAX_EXE 1000000
#define MAX_VCD 300000

extern int sim_time;
extern int flag_stop;
extern int NPC_State;
uint32_t pmem_read(uint32_t raddr, int len);
typedef struct LogBuf
{
    char logbuf[65535];
} LogBuf;

LogBuf *s;

int max_exe = MAX_EXE;



// 生成指令跟踪日志
static void generate_itr_log(uint32_t pc, uint32_t inst_t)
{
    s = (LogBuf *)malloc(sizeof(LogBuf));
    char *p = s->logbuf;
    p += snprintf(p, sizeof(s->logbuf), "%08x:", pc);

    int ilen = 4;
    int i;
    uint8_t *inst = (uint8_t *)&inst_t;

    for (i = ilen - 1; i >= 0; i--)
    {
        p += snprintf(p, 4, " %02x", inst[i]);
    }

    int ilen_max = 4;
    int space_len = ilen_max - ilen;
    if (space_len < 0)
        space_len = 0;
    space_len = space_len * 3 + 1;
    memset(p, ' ', space_len);
    p += space_len;

    void disassemble(char *str, int size, uint64_t pc, uint8_t *code, int nbyte);
    disassemble(p, s->logbuf + sizeof(s->logbuf) - p, pc, (uint8_t *)&inst_t, ilen);

    printf("%s\n", s->logbuf);
    free(s);
}

// 处理指令跟踪逻辑
static void handle_itr_cond(int batch_mode){
    #ifdef CONFIG_ITRACE_COND
    if (!batch_mode && top.valid&&top.ready)
    {
        generate_itr_log(top.pc, top.inst);
    }
    #endif
}


static void difftest()
{
    if (top.done) {
    #ifdef CONFIG_DIFFTEST
        difftest_step(top.pc);
    #endif
    }
}
static void reset()
{
    if (sim_time == 19)
    {
        soc_top->reset = 0;
    }
}

static void single_cycle()
{
    reset(); // 处理复位逻辑

    if (sim_time > 55000000+10000000)
    {
       
      //  flag_stop = 1;
        //  return;
    }

    soc_top->clock = !soc_top->clock;
    sim_time++;
    soc_top->eval();
    if (sim_time < 3000000|sim_time>55000000)
    {

       // vcd->dump(sim_time);
    }
  


    soc_top->clock = !soc_top->clock;
    sim_time++;
    soc_top->eval();

    if (sim_time < 3000000 | sim_time > 55000000)
    {

      //  vcd->dump(sim_time);
    }
}
void test(){
    printf("time :%d\n", sim_time);
    if (sim_time){

    }
}

void npc_exec(uint64_t n)
{
    int batch_mode = (int)n == -1;

    while (flag_stop == 0 && (n--) > 0)
    {
       

        single_cycle();             //模拟时钟周期



    
        handle_itr_cond(batch_mode);   //itrace 

        difftest();//difftest
       // test();
    }
}