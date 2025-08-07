#include <am.h>
#include <klib-macros.h>


#define UART_BASE 0xA00003F8 // 串口寄存器基地址

// 内存布局符号（由链接脚本定义）
extern char _heap_start; // 堆起始地址（SRAM内）
extern char _heap_end;   // 堆结束地址
extern char _sram_start; // SRAM起始地址
extern char _sram_end;   // SRAM结束地址

// 命令行参数存储区（需与链接脚本匹配）
static const char mainargs[] = MAINARGS;

int main(const char *args);
// 串口输出单个字符
void putch(char ch)
{
  volatile uint8_t *uart = (uint8_t *)UART_BASE;
  *uart = ch; // 写入UART数据寄存器
}

// 系统终止函数
void halt(int code)
{
  asm volatile(
      "mv a0, %0\n" // 将退出码存入a0寄存器
      "ebreak"      // 触发调试断点
      : : "r"(code));
  while (1)
    ; // 无限循环（防止意外继续执行）
}

// 堆内存区域定义
Area heap = RANGE(&_heap_start, &_heap_end);

/* ----- 启动初始化 ----- */

// TRM初始化函数（由start.S调用）
void _trm_init()
{
  // 1. 初始化堆管理器（使用SRAM中的堆区）
  heap.start = &_heap_start;
  heap.end = &_heap_end;

  // 2. 检查SRAM范围合法性
  if ((uintptr_t)&_sram_end > 0x0F002000)
  {
    halt(-1); // SRAM越界访问保护
  }

  // 3. 调用用户main函数
  int ret = main(mainargs);

  // 4. 程序终止
  halt(ret);
}

