.section entry, "ax"
.globl _start//声明 _start 为全局符号，使得链接器可以识别它作为程序的入口点。
.type _start, @function //指定 _start 符号的类型为函数，帮助调试工具正确解析。

_start:
  mv s0, zero
  la sp, _stack_pointer//设置栈指针（Stack Pointer）为 _stack_pointer 的地址。
  call _trm_init//调用 _trm_init 函数，初始化硬件环境（如终端、时钟、外设等）

.size _start, . - _start//指定 _start 函数的大小为当前位置（.）与 _start 符号地址的差值。
//上电复位 → 执行 _start → 初始化 s0 → 设置栈指针 → 调用 _trm_init → 进入主程序（如 main）