#include <am.h>
#include <klib-macros.h>
#include <riscv/riscv.h>
#include "include/ysyxsoc.h"
#include <string.h>

extern char _heap_start;
int main(const char *args);
void _trm_init();
extern char _pmem_start;
#define PMEM_SIZE (128 * 1024 * 1024)
#define PMEM_END  ((uintptr_t)&_pmem_start + PMEM_SIZE)

Area heap = RANGE(&_heap_start, PMEM_END);
static const char mainargs[MAINARGS_MAX_LEN] = TOSTRING(MAINARGS_PLACEHOLDER); // defined in CFLAGS
void init_uart()
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
// void init_section()
// {
//   /* 1. 复制所有初始化数据 */
//   extern uint8_t _data_lma[], _data_vma[], _edata[];
//   uint32_t data_size = _edata - _data_vma;
//   if (data_size > 0)
//   {
//     memcpy(_data_vma, _data_lma, data_size);
//   }

//   /* 2. 清零.bss段 */
//   extern uint8_t _bss_start[], _bss_end[];
//   uint32_t bss_size = _bss_end - _bss_start;
//   if (bss_size > 0)
//   {
//     memset(_bss_start, 0, bss_size);
//   }
// }

void putch(char ch)
{

  while ((inb(UART_REG_LS) & 0x20) == 0)
  {
  }
  outb(UART_REG_TX, ch);
}


void halt(int code)
{
  asm volatile("ebreak");
  while (1)
    ;
}

void _trm_init() {
  // init_section();
  init_uart();
  ioe_init();

  int ret = main(mainargs);
  halt(ret);
}
