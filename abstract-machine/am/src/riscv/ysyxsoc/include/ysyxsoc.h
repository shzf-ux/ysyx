#include <klib-macros.h>


#define UART16550_BASE 0x10000000
#define SYSTEM_CLK     50000000
#define ysyxsoc_ebreak(code) asm volatile("ebreak")

/* 数据寄存器*/
#define UART_REG_RX (UART16550_BASE + 0x0) // 接收缓冲 (只读)

#define UART_REG_TX (UART16550_BASE + 0x0) // 发送缓冲 (只写)

/* 中断控制 */
#define UART_REG_IE (UART16550_BASE + 0x1) // 中断使能寄存器

/* FIFO控制 */
#define UART_REG_FC (UART16550_BASE + 0x2) // FIFO控制寄存器
#define UART_REG_LC (UART16550_BASE + 0x3) // 线路控制寄存器

/* 波特率除数 */
#define UART_REG_DLL (UART16550_BASE + 0x0) // 除数锁存低字节
#define UART_REG_DLM (UART16550_BASE + 0x1) // 除数锁存高字节

/* 状态寄存器 */
#define UART_REG_LS (UART16550_BASE + 0x5)  // 线路状态寄存器
#define UART_REG_MS (UART16550_BASE + 0x6)  //

// SPI控制器寄存器
#define SPI_BASE 0x10001000        
#define SPI_TX0 (SPI_BASE + 0x00)   // 发送数据寄存器
#define SPI_TX1 (SPI_BASE + 0x04)   
#define SPI_TX2 (SPI_BASE + 0x08)   
#define SPI_TX3 (SPI_BASE + 0x0c)

#define SPI_RX0 (SPI_BASE + 0x00)   // 接收数据寄存器
#define SPI_RX1 (SPI_BASE + 0x04)
#define SPI_RX2 (SPI_BASE + 0x08)
#define SPI_RX3 (SPI_BASE + 0x0c)

#define SPI_CTRL (SPI_BASE + 0x10) // 控制寄存器
#define SPI_DIV  (SPI_BASE + 0x14)  // 分频寄存器
#define SPI_SS   (SPI_BASE + 0x18)   // 片选寄存器
#define SPI_CLK  250000

//控制信号
#define SPI_CTRL_GO             (1<<8)       //go位于第8位，启动信号
#define SPI_CTRL_Rx_NEG         (1<<9)     // 主控制器在SCK下降沿更新MOSI数据
#define SPI_CTRL_Tx_NEG         (1<<10)    // 主控制器在SCK下降沿采样MISO数据
#define SPI_CTRL_LSB            (1<<11)
#define SPI_CTRL_IE             (1<<12)
#define SPI_CTRL_ASS            (1<<13)
#define SPI_CTRL_CHAR_LEN(x)       x      //0-6位
typedef struct
{
    int go;       // 启动传输 
    int ass;      // 自动片选 
    int tx_neg;   // 下降沿发送
    int rx_neg;   // 下降沿接收
    int lsb;      // 低位优先 
    int ie;       // 中断使能 
    int char_len; // 传输长度 
} SPI_Config;

//GPIO
#define GPIO_BASE        0x10002000
#define GPIO_LED        (GPIO_BASE)         //16位
#define GPIO_SWITCH     (GPIO_BASE+0x4)     //16位
#define GPIO_SEG        (GPIO_BASE+0x8)     //32位


//Keyboard
#define PS2_BASE        0x10011000
#define PS2_CODE        PS2_BASE+0x0

// VGA 0x2100_0000~0x211f_ffff
#define VGA_BASE        0x21000000
#define VGA_FB          VGA_BASE
#define VGA_SYNC        VGA_BASE+0x1ffff0
