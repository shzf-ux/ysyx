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
        _rodata_start = .;        /* 只读数据段起始地址 */     
        /* 匹配所有以.rodata或.srodata开头的段及其子段 */
        *(.rodata* .srodata*)     /* 通配符模式：覆盖所有只读相关段 */ 
        . = ALIGN(4);             /* 保持4字节对齐 */
        _rodata_end = .;          /* 只读数据段结束地址 */
    } > ROM                       /* 所有只读数据存储在ROM中 */


  /* 合并所有数据段 */
    .data : ALIGN(4) {
        _data_vma = .;
        *(.data .data.*)
        *(.sdata .sdata.*)   /* 包含小数据段 */
        . = ALIGN(4);
        _edata = .;
    } > SRAM AT > ROM
    _data_lma = LOADADDR(.data);


    .bss (NOLOAD) : ALIGN(4) {
        _bss_start = .;        /* BSS段起始地址 */ 
        /* 先存放小BSS数据（.sbss） */
        *(.sbss .sbss.*)       /* 小型未初始化变量（如标志位、小尺寸静态变量） */    
        /* 再存放常规BSS数据 */
        *(.bss .bss.*)         /* 常规未初始化变量 */
        *(COMMON)              /* 未初始化的全局变量（如int global_uninit;） */   
        . = ALIGN(4);          /* 4字节对齐 */
        _bss_end = .;          /* BSS段结束地址（包含所有合并的数据） */
    } > SRAM                   /* 所有BSS数据均存放在SRAM中 */


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