MEMORY {
    ROM   (rx)  : ORIGIN = 0x20000000, LENGTH = 4K
    sram  (rwx) : ORIGIN = 0x0F000000, LENGTH = 8K
    flash (rwx) : ORIGIN = 0x30000000, LENGTH = 16M
    psram (rwx) : ORIGIN = 0x80000000, LENGTH = 4M
}

SECTIONS {

    /* 1. 优先处理需要放在flash的.text.entry和.text.bootloader */
    .text : ALIGN(4) {
        _text_vma = .;                 
        *(.text.entry)                 
        *(.text._bootloader)   
        *(.text.memset) 
        *(.text.memcpy)    
        . = ALIGN(4);                  
        _text_end = .;                 
    } > flash                          


    /* 2. 其他.text内容放入.program段（加载到sram执行） */
    .program : ALIGN(4) {
        _program_vma = .;               /* .program段的VMA起始（sram中） */
        *(.text)                        /* 除上述外的其他.text内容 */
        *(.text.*)                      /* 所有.text.xxx子段（不含已匹配的） */
        . = ALIGN(4);
        _program_end = .;               /* .program段结束 */
    } > sram AT > flash                 /* VMA在sram，LMA在flash */
    _program_lma = LOADADDR(.program);  /* 记录.program段在flash中的加载地址 */


    .rodata : ALIGN(4) {
        _rodata_vma = .;        /* 只读数据段起始地址 */     
        /* 匹配所有以.rodata或.srodata开头的段及其子段 */
        *(.rodata* .srodata*)    
        . = ALIGN(4);            
        _rodata_end = .;         
    } > sram AT > flash          
    _rodata_lma =LOADADDR(.rodata);

  /* 合并所有数据段 */
    .data : ALIGN(4) {
        _data_vma = .;
        *(.data .data.*)
        *(.sdata .sdata.*)  
        . = ALIGN(4);
        _edata = .;
    } > sram AT > flash
    _data_lma = LOADADDR(.data);


    .bss (NOLOAD) : ALIGN(4) {
        _bss_start = .;        /* BSS段起始地址 */ 
        /* 先存放小BSS数据（.sbss） */
        *(.sbss .sbss.*)       /* 小型未初始化变量（如标志位、小尺寸静态变量） */    
        /* 再存放常规BSS数据 */
        *(.bss .bss.*)      
        *(COMMON)          
        . = ALIGN(4);        
        _bss_end = .;     
    } > sram                


    /* 5. 堆空间 */
    .heap (NOLOAD) : ALIGN(8) {
        _heap_start = .;
        . = ORIGIN(sram) + LENGTH(sram) - 3k;  /* 预留4KB栈空间 */
        _heap_end = .;
    } > sram

    /* 6. 栈空间（向下增长） */
    .stack (NOLOAD) : ALIGN(16) {
        _stack_bottom = .;
        . += 3k;            /* 4KB栈空间 */
        _stack_top = .;
    } > sram



}