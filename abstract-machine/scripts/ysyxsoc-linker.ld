MEMORY {
    ROM (rx)  : ORIGIN = 0x20000000, LENGTH = 4K
    SRAM (rwx): ORIGIN = 0x0F000000, LENGTH = 8K
}

SECTIONS {
    /* 1. 只读段（代码和常量） */
    .text : ALIGN(4) {
        *(.text.entry)      /* 启动代码必须放最前面 */
        *(.text .text.*)
        . = ALIGN(4);
        _etext = .;         /* 代码段结束 */
    } > ROM

    .rodata : ALIGN(4) {
        *(.rodata .rodata.*)
        . = ALIGN(4);
    } > ROM

  /* 合并所有数据段 */
    .data : ALIGN(4) {
        _data_vma = .;
        *(.data .data.*)
        *(.sdata .sdata.*)   /* 包含小数据段 */
        . = ALIGN(4);
        _edata = .;
    } > SRAM AT > ROM
    _data_lma = LOADADDR(.data);
    

    /* 3. BSS段（未初始化数据） */
    .bss (NOLOAD) : ALIGN(4) {
        _bss_start = .;
        *(.bss .bss.*)
        *(COMMON)           /* 未初始化的全局变量 */
        . = ALIGN(4);
        _bss_end = .;
    } > SRAM

    /* 4. 小BSS段（用于标志位等小对象） */
    .sbss (NOLOAD) : ALIGN(4) {
        _sbss_start = .;
        *(.sbss .sbss.*)    /* 如have_table.1 */
        . = ALIGN(4);
        _sbss_end = .;
    } > SRAM

    /* 5. 堆空间 */
    .heap (NOLOAD) : ALIGN(8) {
        _heap_start = .;
        . = ORIGIN(SRAM) + LENGTH(SRAM) - 4K;  /* 预留4KB栈空间 */
        _heap_end = .;
    } > SRAM

    /* 6. 栈空间（向下增长） */
    .stack (NOLOAD) : ALIGN(16) {
        _stack_bottom = .;
        . += 4K;            /* 4KB栈空间 */
        _stack_top = .;
    } > SRAM


}