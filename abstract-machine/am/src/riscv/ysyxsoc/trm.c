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
  while ((inb(UART_REG_LS) & 0x20) == 0); //// 等待THRE置位
  outb(UART_REG_TX, ch);
}

void init_uart(uint32_t baud)
{ 

  //  解锁除数寄存器（允许设置波特率）
  outb(UART_REG_LC, inb(UART_REG_LC) | 0x80);

  uint16_t divisior = SYSTEM_CLK / (16 * baud);

  //  写入除数高/低字节
  outb(UART_REG_DLM, divisior >> 8); // 高8位
  outb(UART_REG_DLL, divisior);      // 低8位

  //  锁定除数寄存器（恢复正常模式）
  outb(UART_REG_LC, inb(UART_REG_LC) & (~0x80));

  //  配置8N1数据格式（8位数据，无校验，1停止位）
  outb(UART_REG_LC, 0x03);

  //  启用并清空FIFO（16字节缓冲）
  outb(UART_REG_FC, 0x07);
}

void halt(int code)
{
  asm volatile("ebreak");
  while (1);
}

// TRM初始化函数（由start.S调用）
void _trm_init()
{
  //init_uart(115200);
  // 初始化UART（可选）
  // init_uart(115200);

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
  /* 3. 清零.sbss段（新增） */
  extern uint8_t _sbss_start[], _sbss_end[];
  uint32_t sbss_size = _sbss_end - _sbss_start;
  if (sbss_size > 0)
  {
    memset(_sbss_start, 0, sbss_size);
  }


  int ret = main(mainargs);

  // 4. 程序终止
  halt(ret);
}

