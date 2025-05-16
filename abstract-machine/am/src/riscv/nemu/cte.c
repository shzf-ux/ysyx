#include <am.h>
#include <riscv/riscv.h>
#include <klib.h>

static Context* (*user_handler)(Event, Context*) = NULL;

Context* __am_irq_handle(Context *c) {
 
  if (user_handler) {
    Event ev = {0};
   // printf("mcause:%d\n", c->mcause);
    switch (c->mcause)
    {
    case 11:ev.event = EVENT_YIELD;break;
    default:ev.event = EVENT_ERROR;break;
    }

    c = user_handler(ev, c);
    assert(c != NULL);
  }

  return c;
}

extern void __am_asm_trap(void);

bool cte_init(Context*(*handler)(Event, Context*)) {
  // initialize exception entry
  asm volatile("csrw mtvec, %0" : : "r"(__am_asm_trap));

  // register event handler
  user_handler = handler;

  return true;
}

Context *kcontext(Area kstack, void (*entry)(void *), void *arg) {
  uintptr_t sp = (uintptr_t)kstack.end;
  sp = (sp - sizeof(Context)) & ~0x7; // 对齐栈顶
  Context *ctx = (Context *)sp;
  ctx->mepc = (uintptr_t)entry;  // 入口地址
  ctx->gpr[2] = (uintptr_t)sp;   // 栈指针 (x2)
  ctx->gpr[10] = (uintptr_t)arg; // 参数 (a0)
  ctx->mstatus = 0x1800;         // 允许中断
  return ctx;
}

void yield() {
 
#ifdef __riscv_e
  asm volatile("li a5, -1; ecall");
#else
 
  asm volatile("li a7, 11; ecall"); //设置系统调用号。CPU 进入陷阱处理流程。

#endif
}

bool ienabled() {
  return false;
}

void iset(bool enable) {
}
