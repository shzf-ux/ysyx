#include <am.h>
#include <klib-macros.h>

#define STACK_SIZE (4096 * 8)
typedef union {
  uint8_t stack[STACK_SIZE];
  struct { Context *cp; };
} PCB;

static PCB pcb[2], pcb_boot, *current = &pcb_boot;

static void f(void *arg) {
  while (1) {
    
    putch("?AB"[(uintptr_t)arg > 2 ? 0 : (uintptr_t)arg]);
    for (int volatile i = 0; i < 1000000; i++) ;
    yield();
  }
}

static Context *schedule(Event ev, Context *prev) {
  current->cp = prev;
  current = (current == &pcb[0] ? &pcb[1] : &pcb[0]);
  prev->mepc += 4; // 所有上下文均需跳过

  return current->cp;
}

int main() {
  cte_init(schedule);
  pcb_boot.cp = kcontext((Area){pcb_boot.stack, pcb_boot.stack + STACK_SIZE},NULL, NULL);
  //初始化boot，不然在调度器首次前两次调用会出bug，导致a访问错误，i出现段错误
  pcb[0].cp = kcontext((Area) { pcb[0].stack, &pcb[0] + 1 }, f, (void *)1L);
  pcb[1].cp = kcontext((Area) { pcb[1].stack, &pcb[1] + 1 }, f, (void *)2L);

  yield();
  panic("Should not reach here!");
}
