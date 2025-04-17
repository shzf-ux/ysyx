#include <common.h>
#include <elf.h>
#include <device/map.h>
#define MAX_RING_BUFF 16
typedef struct
{
    word_t pc;
    uint32_t inst;
} Ring_instBuf;

Ring_instBuf Buff[MAX_RING_BUFF];
int R_index = 0;
void trace_inst(word_t pc, uint32_t inst) // 跟踪记录指令
{
    Buff[R_index].inst = inst;
    Buff[R_index].pc = pc;
    R_index = (R_index + 1) % MAX_RING_BUFF;
}
void Display_inst()//进入时，index为错误指令的下一条，0，1，2，3，4
                                                     //*
{
    int Error_next = R_index;
    char buf[128];
    char *p;
    int i = R_index;

    if (Buff[i + 1].pc == 0)
        i = 0;
    do
    {
        p = buf;
        p += sprintf(buf, "%s" FMT_WORD ":  %08x\t", (i + 1) % MAX_RING_BUFF == Error_next ? "-->" : "   ", Buff[i].pc, Buff[i].inst);
        void disassemble(char *str, int size, uint64_t pc, uint8_t *code, int nbyte);
        // str指向用于存储反汇编结果的目标字符串缓冲区。
        // size表示目标字符串缓冲区 str 的大小
        // pc指令在内存中的地址
        // code指向要进行反汇编的指令字节数据的起始地址
        // 表示要进行反汇编的指令字节数据的长度
        disassemble(p, buf + sizeof(buf) - p, Buff[i].pc, (uint8_t *)&Buff[i].inst, 4);
        puts(buf);
        i = (i + 1) % MAX_RING_BUFF;
    } while (i != Error_next);
  
}

void display_memory_read(uint32_t addr, uint32_t data)
{
    printf(ANSI_FMT("read memory at pc: ", ANSI_FG_GREEN) "0x%08x, data: 0x%08x\n", addr, data);
}

void display_memory_write(uint32_t addr, uint32_t data)
{
    printf(ANSI_FMT("write memory at pc: ", ANSI_FG_YELLOW) "0x%08x, data: 0x%08x\n", addr, data);
}
