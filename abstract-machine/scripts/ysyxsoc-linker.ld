/* AM_HOME/scripts/platform/riscv32e-ysyxsoc.ld */
OUTPUT_ARCH("riscv")
ENTRY(_start)

MEMORY {
    /* 根据您的SoC内存布局 */
    MROM (rx) : ORIGIN = 0x20000000, LENGTH = 4K     /* 4KB ROM */
    SRAM (rwx) : ORIGIN = 0x0f000000, LENGTH = 8K   /* 8KB RAM */
}

SECTIONS {
    /* === 只读段存储在MROM === */
    .text : {
        *(.text.entry)       /* 确保入口代码在最前面 */
        *(.text .text.*)
        . = ALIGN(4);
        _etext = .;          /* 代码结束位置 */
    } > MROM

    .rodata : {
        *(.rodata .rodata.*)
        . = ALIGN(4);
    } > MROM

    /* === 可写段存储在SRAM === */
    .data : {
        _sdata = .;         /* 数据段起始地址 (VMA) */
        *(.data .data.*)
        . = ALIGN(4);
        _edata = .;         /* 数据段结束地址 */
    } > SRAM AT > MROM      /* AT: 指定LMA在MROM中 */

    _data_load = LOADADDR(.data);  /* 数据段加载地址 (LMA) */

    .bss : {
        _sbss = .;          /* BSS段起始地址 */
        *(.bss .bss.*)
        *(COMMON)           /* 通用符号 */
        . = ALIGN(4);
        _ebss = .;          /* BSS段结束地址 */
    } > SRAM

    /* === 内存分配区域 === */
    .stack : {
        . = ALIGN(16);      /* 16字节对齐 */
        _stack_bottom = .;
        . += 2K;            /* 2KB栈空间 */
        _stack_top = .;     /* 栈顶地址 */
    } > SRAM
    
    .heap : {
        . = ALIGN(8);       /* 8字节对齐 */
        _heap_start = .;
        . = ORIGIN(SRAM) + LENGTH(SRAM); /* 使用SRAM剩余空间 */
        _heap_end = .;
    } > SRAM
}