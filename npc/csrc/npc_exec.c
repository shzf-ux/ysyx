#include "common.h"
#include <dlfcn.h>
#include <capstone/capstone.h>
extern Vysyx_25030085_top *top;
extern VerilatedVcdC *vcd;
extern int sim_time;
extern int flag_stop;
extern int  NPC_State;
uint32_t pmem_read(uint32_t pc);
typedef struct LogBuf
{
    char logbuf[128];
} LogBuf;

LogBuf s;
void disassemble(char *str, int size, uint64_t pc, uint8_t *code, int nbyte)
{
    cs_insn *insn;
    size_t count = cs_disasm_dl(handle, code, nbyte, pc, 0, &insn);
    assert(count == 1);
    int ret = snprintf(str, size, "%s", insn->mnemonic);
    if (insn->op_str[0] != '\0')
    {
        snprintf(str + ret, size - ret, "\t%s", insn->op_str);
    }
    cs_free_dl(insn, count);
}

void npc_exec(uint64_t n)
{
    while ((sim_time < MAX_SIM_TIME) && flag_stop == 0&&(n--)>0)
    {
        top->clk = !top->clk;
        top->instruction = pmem_read(top->pc_out);
        top->eval();
        vcd->dump(sim_time);
        sim_time++;


        char *p = s->logbuf;
        p += snprintf(p, sizeof(s->logbuf), FMT_WORD ":", top->pc_out); // 向p即buf写入指令0x之类的指令，并加入：
        int ilen =4;
        int i;
        uint8_t *inst = (uint8_t *)&top->instruction; // 储存指令，并把指令分为四段

        for (i = ilen - 1; i >= 0; i--)
        {

            p += snprintf(p, 4, " %02x", inst[i]); // 把指令从右到左打印出来，并写入buf里面
        }
        // printf("%s\n", s->logbuf);
        int ilen_max =  4;
        int space_len = ilen_max - ilen;
        if (space_len < 0)
            space_len = 0;
        space_len = space_len * 3 + 1;
        memset(p, ' ', space_len);
        p += space_len;
        // printf("%s\n", s->logbuf);

        void disassemble(char *str, int size, uint64_t pc, uint8_t *code, int nbyte);
        disassemble(p, s->logbuf + sizeof(s->logbuf) - p, // 向buf加入反汇编后的内容
                    s->pc, (uint8_t *)&s->top->instruction, ilen);
    }
 
}