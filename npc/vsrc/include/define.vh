
`define DISABLE_LS_DELAY       // 禁用读地址延迟
`define DISABLE_IF_DELAY       // 定义此宏则延迟为0，注释则启用延迟gi
`define RESET_VECTOR    32'h30000000
`define CSR_MVENDORID   8'hF11  // 厂商ID寄存器地址
`define CSR_MARCHID     8'hF12  // 架构ID寄存器地址
`define MVENDORID_VALUE 32'h79737978  // 'y'=0x79, 's'=0x73, 'y'=0x79, 'x'=0x78
`define MARCHID_VALUE   32'd25030085    

// 设备地址范围宏定义
`define CLINT_BASE        32'h02000000
`define CLINT_END         32'h0200ffff

`define SRAM_BASE         32'h0f000000
`define SRAM_END          32'h0f001fff

`define UART16550         20'h10000
`define UART16550_BASE    32'h10000000
`define UART16550_END     32'h10000fff

`define SPI_MASTER_BASE   32'h10001000
`define SPI_MASTER_END    32'h10001fff

`define GPIO_BASE         32'h10002000
`define GPIO_END          32'h1000200f

`define PS2_BASE          32'h10011000
`define PS2_END           32'h10011007

`define MROM_BASE         32'h20000000
`define MROM_END          32'h20000fff

`define VGA_BASE          32'h21000000
`define VGA_END           32'h211fffff

`define FLASH_BASE        32'h30000000
`define FLASH_END         32'h3fffffff

`define CHIPLINK_MMIO_BASE 32'h40000000
`define CHIPLINK_MMIO_END  32'h7fffffff

//4MB 0x400000
`define PSRAM             8'h80
`define PSRAM_BASE        32'h80000000
`define PSRAM_END         32'h803fffff
//32MB 
`define SDRAM             8'ha0
`define SDRAM_BASE        32'ha0000000
`define SDRAM_END         32'hbfffffff

`define CHIPLINK_MEM_BASE 32'hc0000000
`define CHIPLINK_MEM_END  32'hffffffff


    