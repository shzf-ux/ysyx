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

void spi_Tx_data(uint8_t tx_data,uint8_t len)
{   switch (len)
    {
    case 8:
        outb(SPI_TX0, tx_data);
        break;
    case 32:
    break;

    default:
        break;
    }

    outl(SPI_CTRL, inl(SPI_CTRL) | SPI_CTRL_GO); // 先发送数据。再置位******go*****
}

void spi_Rx_data(uint8_t *rx_data,uint8_t len)
{
    while ((inl(SPI_CTRL) & SPI_CTRL_GO));
    switch (len)
    {
    case 8:
        *rx_data = inl(SPI_RX0) >> 8;
        break;
    case 32:
        break;

    default:
        break;
    }
    printf("%08x\n", inl(SPI_RX0));
}