/* AM_HOME/arch/riscv32e-ysyxsoc/start.S */
.section .text.entry
.global _start

_start:
    /* 1. 初始化栈指针 */
    la sp, _stack_top
    andi sp, sp, -16  /* 确保16字节对齐 */

    /* 2. 复制数据段 (如果必要) */
    la a0, _data_load        /* 源地址 (LMA in MROM) */
    la a1, _sdata            /* 目标地址 (VMA in SRAM) */
    la a2, _edata
    beq a0, a1, 1f           /* 如果地址相同则跳过 */
    bgeu a1, a2, 1f          /* 如果.data段为空则跳过 */
    
    mv t0, a0                /* 源地址 */
    mv t1, a1                /* 目标地址 */
    mv t2, a2                /* 结束地址 */
    
copy_data_loop:
    lw t3, 0(t0)             /* 从MROM加载数据 */
    sw t3, 0(t1)             /* 存储到SRAM */
    addi t0, t0, 4
    addi t1, t1, 4
    bltu t1, t2, copy_data_loop

1:
    /* 3. 清零BSS段 */
    la a0, _sbss
    la a1, _ebss
    bgeu a0, a1, 2f          /* 如果.bss段为空则跳过 */
    
    mv t0, a0                /* BSS起始地址 */
    mv t1, a1                /* BSS结束地址 */
    
zero_bss_loop:
    sw zero, 0(t0)           /* 写0清零 */
    addi t0, t0, 4
    bltu t0, t1, zero_bss_loop

2:
    /* 4. 调用主函数 */
    call main
    
    /* 5. 程序结束 */
    ebreak

    /* 防止进入无限循环 */
    j .