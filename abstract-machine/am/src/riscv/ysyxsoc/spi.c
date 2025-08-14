#include <am.h>
#include <klib-macros.h>
#include "ysyxsoc.h"
#include <stdio.h>
#include <riscv/riscv.h>

void init_spi(uint32_t ss_op, const SPI_Config *config)
{
    // 设置分频16位
    uint16_t div = SYSTEM_CLK / (2 * SPI_CLK) - 1;
    outw(SPI_DIV, div);

    // 2. 设置片选寄存器
    outl(SPI_SS, ss_op);

    // 3. 动态生成控制寄存器值
    uint32_t ctrl_reg = 0;
    if (config->go)     ctrl_reg |= SPI_CTRL_GO;
    if (config->ass)    ctrl_reg |= SPI_CTRL_ASS;
    if (config->tx_neg) ctrl_reg |= SPI_CTRL_Tx_NEG;
    if (config->rx_neg) ctrl_reg |= SPI_CTRL_Rx_NEG;
    if (config->lsb)    ctrl_reg |= SPI_CTRL_LSB;
    if (config->ie)     ctrl_reg |= SPI_CTRL_IE;

    ctrl_reg |= SPI_CTRL_CHAR_LEN(config->char_len); // 转换为0-based计数

    outl(SPI_CTRL, ctrl_reg);
}

void spi_Tx_data(uint64_t tx_data,uint8_t len)       //向spi主设备发送数据
{   switch (len)
    {
    case 8:
        outb(SPI_TX0, (uint8_t)tx_data);
        break;
    case 32:
        outl(SPI_TX0, (uint32_t)tx_data);
        break;
    case 64:
        // 拆分64位为高32位和低32位：
        // SPI_TX1 存储高32位，SPI_TX0 存储低32位
        outl(SPI_TX1, (uint32_t)(tx_data >> 32));        // 高32位：右移32位提取
        outl(SPI_TX0, (uint32_t)(tx_data & 0xFFFFFFFF)); // 低32位：截断低32位
        break;

    default:
        break;
    }

    outl(SPI_CTRL, inl(SPI_CTRL) | SPI_CTRL_GO); // 先发送数据。再置位******go*****
}
void spi_Rx_data(uint32_t *rx_data, uint8_t len)
{
    while ((inl(SPI_CTRL) & SPI_CTRL_GO))
        ; // 等待传输完成

    uint32_t raw_data = inl(SPI_RX0);          // 读取原始数据
    printf("Raw RX data: 0x%08x\n", raw_data); // 调试输出

    switch (len)
    {
    case 8:
        // 8位数据：取最低字节并反转位序
        *rx_data = raw_data >> 8;
        break;
    case 32:
        // 32位数据：修正字节序
        *rx_data = ((raw_data >> 24) & 0xFF) |      // 字节3 → 字节0
                   ((raw_data >> 8) & 0xFF00) |     // 字节2 → 字节1
                   ((raw_data << 8) & 0xFF0000) |   // 字节1 → 字节2
                   ((raw_data << 24) & 0xFF000000); // 字节0 → 字节3
        break;
    default:
        *rx_data = raw_data; // 其他长度直接返回
        break;
    }
}

