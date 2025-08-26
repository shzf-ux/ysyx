
#include <am.h>
#include <klib.h>
#include <rtthread.h>
static Context *ev_handler(Event e, Context *c)
{
  switch (e.event)
  {
  case EVENT_IRQ_TIMER:
    return c;
  case EVENT_YIELD:
    rt_thread_t current = rt_thread_self();
    rt_ubase_t *para = (rt_ubase_t *)current->user_data;
    rt_ubase_t from = para[0];
    rt_ubase_t to = para[1];
    if (from == 0 && to) // 第一次切换
    {
      // c是一个二级指针
      c = *(Context **)to;
    }
    else if (from && to)
    {
      *((Context **)from) = c;
      // 保存当前上下文
      c = *((Context **)to);
    }
    break;

  default:
    printf("Unhandled event ID = %d\n", e.event);
    assert(0);
  }

  return c;
}
void __am_cte_init()
{
  cte_init(ev_handler);
}

void rt_hw_context_switch_to(rt_ubase_t to) // 第一次调用
{
  rt_thread_t current = rt_thread_self();
  // 保存原始user_data
  rt_ubase_t saved = current->user_data; // 保存当前的数据

  rt_ubase_t user_data[2] = {0, to}; // 把to当前线程传过去
  current->user_data = (rt_ubase_t)user_data;

  // 触发切换
  yield();
  // 恢复user_data（实际上不会执行到这里）
  current->user_data = saved;
}

void rt_hw_context_switch(rt_ubase_t from, rt_ubase_t to)
{
  rt_thread_t current = rt_thread_self();
  rt_ubase_t saved = current->user_data; // 保存当前的数据

  rt_ubase_t user_data[2] = {from, to}; // 把from to当前线程传过去
  current->user_data = (rt_ubase_t)user_data;

  // 触发切换
  yield();
  // 恢复user_data（实际上不会执行到这里）
  current->user_data = saved;
}
void rt_hw_context_switch_interrupt(void *context, rt_ubase_t from, rt_ubase_t to, struct rt_thread *to_thread)
{
  assert(0);
}
typedef struct
{
  void (*tentry)(void *);
  void *parameter;
  void (*texit)(void);
} Args;
static void wrap(void *arg)
{
  // kcontext 期望的 entry 参数类型为 void (*)(void *)
  Args *args = (Args *)arg;
  args->tentry(args->parameter);
  args->texit();
}
rt_uint8_t *rt_hw_stack_init(void *tentry, void *parameter, rt_uint8_t *stack_addr, void *texit)
{
  // tentry 入口函数指针
  // parameter 函数参数
  // stack_addr未初始化的栈顶，但是预留了退出函数的空间大小，
  // texit 退出函数指针
  // 初始栈顶对齐（16 字节）
  rt_uint8_t *sp = (rt_uint8_t *)((uintptr_t)stack_addr & ~0xF);

  // 预留 Args 空间（向下增长）
  sp -= sizeof(Args);
  sp = (rt_uint8_t *)((uintptr_t)sp & ~0xF); // 再次对齐
  Args *args = (Args *)sp;

  // 初始化 Args
  args->tentry = (void (*)(void *))tentry;
  args->parameter = parameter;
  args->texit = (void (*)(void))texit;

  // 调用 kcontext，传入栈区域：从当前 sp 到原始 stack_addr
  Context *cp = kcontext(
      (Area){.start = stack_addr, .end = sp}, // 栈区域包含 Args 和剩余空间
      wrap,
      (void *)args);

  return (rt_uint8_t *)cp;
}