#include <klib-macros.h>
#include <riscv/riscv.h>


#define UART16550       0x10000000
#define UART_REG_TX     UART16550 + 0x0
#define UART_REG_RX     UART16550 + 0x0
#define UART_REG_DLL    UART16550 + 0x0 // LSB
#define UART_REG_DLM    UART16550 + 0x1 // MSB
#define UART_REG_FC     UART16550 + 0x2
#define UART_REG_LC     UART16550 + 0x3
#define UART_REG_LS     UART16550 + 0x5//状态查询

