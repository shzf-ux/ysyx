#include <klib-macros.h>
#include <riscv/riscv.h>

#define UART16550_BASE 0x10000000
#define ysyxsoc_ebreak(code) asm volatile("mv a0, %0 ;ebreak" : : "r"(code))

/* 数据寄存器 (DLAB=0时) */
#define UART_REG_RX (UART16550_BASE + 0x0) // 接收缓冲 (只读)
#define UART_REG_TX (UART16550_BASE + 0x0) // 发送缓冲 (只写)

/* 中断控制 */
#define UART_REG_IE (UART16550_BASE + 0x1) // 中断使能寄存器

/* FIFO控制 (DLAB=0时) */
#define UART_REG_FC (UART16550_BASE + 0x2) // FIFO控制寄存器
#define UART_REG_LC (UART16550_BASE + 0x3) // 线路控制寄存器

/* 波特率除数 (DLAB=1时) */
#define UART_REG_DLL (UART16550_BASE + 0x0) // 除数锁存低字节
#define UART_REG_DLM (UART16550_BASE + 0x1) // 除数锁存高字节

/* 状态寄存器 */
#define UART_REG_LS (UART16550_BASE + 0x5)  // 线路状态寄存器
#define UART_REG_MS (UART16550_BASE + 0x6)  // Modem状态寄存器
#define UART_REG_SCR (UART16550_BASE + 0x7) // 暂存寄存器
