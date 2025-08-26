ENTRY(_start)
MEMORY {
    ROM   (rx)  : ORIGIN = 0x20000000, LENGTH = 4K
    sram  (rwx) : ORIGIN = 0x0F000000, LENGTH = 8K
    flash (rwx) : ORIGIN = 0x30000000, LENGTH = 16M
    psram (rwx) : ORIGIN = 0x80000000, LENGTH = 4M
    sdram (rwx) : ORIGIN = 0xa0000000, LENGTH = 128M
}

SECTIONS {

    .fsbl : ALIGN(4) {          /*flash最开始的函数*/
        _fsbl_vma = .;  
        *(.text.bootloader)                         
        *(.text.fsbl)    
        . = ALIGN(4);                  
        _fsbl_end = .;                 
    } > flash   

    .ssbl : ALIGN(4) {          /*flash最开始的函数*/
        _ssbl_vma = .;                           
        *(.text.ssbl) 
        *(.text.memcpy)   
        *(.text.memset) 
        . = ALIGN(4);                  
        _ssbl_end = .;                 
    } > sram AT > flash        
    _ssbl_lma = LOADADDR(.ssbl); 
                          

    /* 2. 其他.text内容放入.program段（加载到sram执行） */
    .program : ALIGN(4) {
        _program_vma = .;               
        *(.text)                        
        *(.text.*)                      
        . = ALIGN(4);
        _program_end = .;               
    } > sdram AT > flash                
    _program_lma = LOADADDR(.program);  



    .rodata : ALIGN(4) {
        _rodata_vma = .;            
        *(.rodata* .srodata*)    
        . = ALIGN(4);            
        _rodata_end = .;         
    } > flash       
 

  /* 合并所有数据段 */
    .data : ALIGN(4) {
        _data_vma = .;
        *(.data .data.*)
        *(.sdata .sdata.*)  
        . = ALIGN(4);
        _edata = .;
    } > sdram AT > flash
    _data_lma = LOADADDR(.data);

 /* 来自rtt的data.extra段的 */
 /*也要进行复制*/
    _data_extra_vma = DEFINED(  _data_extra_vma ) ?   _data_extra_vma : 0;
    _edata_extra    = DEFINED(  _edata_extra) ?   _edata_extra_vma : 0;
    _data_extra_lma  = DEFINED(  _data_extra_lma ) ?   _data_extra_lma : 0;
    


    .bss (NOLOAD) : ALIGN(4) {
        _bss_start = .;       
      
        *(.sbss .sbss.*)       
      
        *(.bss .bss.*)      
        *(COMMON)          
        . = ALIGN(4);        
        _bss_end = .;     
    } > sdram 
/* 来自rtt的bss.extra段的 */
 /*也要进行清0*/      
    _bss_extra_vma = DEFINED(_bss_extra_vma) ? _bss_extra_vma : 0;
    _ebss_extra_vma = DEFINED(_ebss_extra_vma) ? _ebss_extra_vma : 0;




    /* 5. 堆空间 */
    .heap (NOLOAD) : ALIGN(8) {
        _heap_start = .;
        . = ORIGIN(sdram) + LENGTH(sdram) - 3k;  /* 预留4KB栈空间 */
        _heap_end = .;
    } > sdram

    /* 6. 栈空间（向下增长） */
    .stack (NOLOAD) : ALIGN(16) {
        _stack_bottom = .;
        . += 3k;            /* 4KB栈空间 */
        _stack_top = .;
    } > sram



}