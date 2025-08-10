#include <am.h>
#include <klib-macros.h>
#include "ysyxsoc.h"
#include <stdio.h>
#include <string.h>

static const char mainargs[] = MAINARGS;

int main(const char *args);

#define SYSTEM_CLK 50000000     //系统时钟50MHz



void putch(char ch)
{

    // 使用大括号明确while循环体（即使为空）
   while ((inb(UART_REG_LS) & 0x20) == 0)
    {

    }
    outb(UART_REG_TX, ch); // 明确在循环外
  
}
__attribute__((noinline)) // 阻止内联，方便观察汇编
void init_uart(uint32_t baud)
{
  // 1. 确保复位状态

  outb(UART_REG_LC, 0x80); // 启用DLAB
  inb(UART_REG_LC);

  // 2. 计算并设置波特率
  uint32_t divisor = SYSTEM_CLK / (16 * baud);
  outb(UART_REG_DLL, divisor & 0xFF);
  outb(UART_REG_DLM, (divisor >> 8) & 0xFF);

  // 3. 基本配置
  outb(UART_REG_LC, 0x03); // 8N1模式

  // 4. 启用FIFO（简化版）
  outb(UART_REG_FC, 0x01); // 仅启用FIFO，不清空

  // 5. 强制触发THRE
  outb(UART_REG_TX, 0x00); // 发送空字符强制更新状态
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
  ysyxsoc_ebreak(code);
  // should not reach here
  while (1)
    ;
}



void _trm_init()
{
 
  init_section();
 // init_uart(115200);
  int ret = main(mainargs);

  // 4. 程序终止
  halt(ret);
}

