#include <am.h>
#include <klib-macros.h>
#include "ysyxsoc.h"
#include <stdio.h>
#include <string.h>
#include <riscv/riscv.h>
//#define DIFFTEST_OPEN
static const char mainargs[] = MAINARGS;

int main(const char *args);





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


void init_section()
{
  /* 1. 复制所有初始化数据 */
  extern uint8_t _data_lma[], _data_vma[], _edata[];
  uint32_t data_size = _edata - _data_vma;
  if (data_size > 0)
  {
    memcpy(_data_vma, _data_lma, data_size);
  }

  /* 2. 清零.bss段 */
  extern uint8_t _bss_start[], _bss_end[];
  uint32_t bss_size = _bss_end - _bss_start;
  if (bss_size > 0)
  {
    memset(_bss_start, 0, bss_size);
  }
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
 
  init_section();
  //#ifdef DIFFTEST_OPEN
  init_uart();
  //show_id();
 // #endif

  int ret = main(mainargs);

  // 4. 程序终止
  halt(ret);
}

