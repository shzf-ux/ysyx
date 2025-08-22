#include <am.h>
#include <klib-macros.h>
#include "ysyxsoc.h"
#include <stdio.h>
#include <string.h>
#include <riscv/riscv.h>
//#define DIFFTEST_OPEN
static const char mainargs[] = MAINARGS;

int main(const char *args);
void _trm_init();
void ssbl();
// 设置堆区
extern char _heap_start;
extern char _heap_end;
extern uint8_t _program_lma[], _program_vma[], _program_end[];
extern uint8_t _data_lma[], _data_vma[], _edata[];
extern uint8_t _bss_start[], _bss_end[];

extern uint8_t _data_extra_lma[], _data_extra_vma[], _edata_extra[];
extern uint8_t _bss_extra_vma[], _ebss_extra_vma[];

Area heap = RANGE(&_heap_start, &_heap_end);

void putch(char ch)
{

  while ((inb(UART_REG_LS) & 0x20) == 0)
  {
  }
    outb(UART_REG_TX, ch); 
                          

}
__attribute__((noinline)) // 阻止内联，方便观察汇编
void
init_uart()
{


  // 2. 启用DLAB访问除数寄存器
  outb(UART_REG_LC, 0x83);

  // 3. 写入除数
  outb(UART_REG_DLM, 0);
  outb(UART_REG_DLL, 1);
  outb(UART_REG_LC, 0x03); // DLAB=0

  // 5. 启用并清空FIFO
  outb(UART_REG_FC, 0xC7); 
}

void fsbl()
{
  //拷贝ssbl段到sram
  /* 从lma加载rodata段到vma */
  extern uint8_t _ssbl_vma[], _ssbl_end[], _ssbl_lma[];
  uint32_t ssbl_size = _ssbl_end - _ssbl_vma;
 // memcpy(_ssbl_vma, _ssbl_lma, ssbl_size); // 把lma->vma
  for (uint32_t i = 0; i < ssbl_size; i++)
  {
    _ssbl_vma[i] = _ssbl_lma[i];
  }
   
  ssbl();
}

void ssbl()
{

    /* 从lma加载rodata段到vma */
    uint32_t program_size = _program_end - _program_vma;
    memcpy(_program_vma, _program_lma, program_size); // 把lma->vma


    /* 从lma加载data段到vma */
    uint32_t data_size = _edata - _data_vma;
    memcpy(_data_vma, _data_lma, data_size);   

    /* 从lma加载data extra段到vma */
    uint32_t data_extra_size = _edata_extra - _data_extra_vma;
    memcpy(_data_extra_vma, _data_extra_lma, data_extra_size);

    /*  清零.bss段 */
    uint32_t bss_size = _bss_end - _bss_start;
    memset(_bss_start, 0, bss_size);

    /*  清零.bss.extra段 */
    uint32_t bss_extra_size = _ebss_extra_vma - _bss_extra_vma;
    memset(_bss_extra_vma, 0, bss_extra_size);
}

void halt(int code)
{
  if(code){
    printf("error!\n");
  }
  ysyxsoc_ebreak(code);
  // should not reach here
  while (1)
    ;
}
void show_id()
{
  uint32_t mvendorid, marchid;

  // 读取CSR寄存器的值
  // csrr指令格式：csrr 目标寄存器, CSR名称
  asm volatile("csrr %0, mvendorid" : "=r"(mvendorid)); // 读mvendorid
  asm volatile("csrr %0, marchid" : "=r"(marchid));     // 读marchid

  // 输出结果
  printf("mvendorid: %08x \n", mvendorid);
  printf("marchid: %d \n", marchid);

}

void _trm_init()
{
 
  //#ifdef DIFFTEST_OPEN
 init_uart();
  //show_id();
 // #endif

  int ret = main(mainargs);

  // 4. 程序终止
  halt(ret);
}

