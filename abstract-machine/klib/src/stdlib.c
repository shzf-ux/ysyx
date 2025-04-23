#include <am.h>
#include <klib.h>
#include <klib-macros.h>

#if !defined(__ISA_NATIVE__) || defined(__NATIVE_USE_KLIB__)
static unsigned long int next = 1;

int rand(void) {
  // RAND_MAX assumed to be 32767
  next = next * 1103515245 + 12345;
  return (unsigned int)(next/65536) % 32768;
}

void srand(unsigned int seed) {
  next = seed;
}

int abs(int x) {
  return (x < 0 ? -x : x);
}

int atoi(const char* nptr) {
  int x = 0;
  while (*nptr == ' ') { nptr ++; }
  while (*nptr >= '0' && *nptr <= '9') {
    x = x * 10 + *nptr - '0';
    nptr ++;
  }
  return x;
}

Area heapp = {
    // 这里可以根据实际情况修改堆区起始地址
    .start = (void *)0x10000000,
    // 这里可以根据实际情况修改堆区结束地址
    .end = (void *)0x20000000
  };

static void *addr = NULL;
void *malloc(size_t size) {
  // On native, malloc() will be called during initializaion of C runtime.
  // Therefore do not call panic() here, else it will yield a dead recursion:
  //   panic() -> putchar() -> (glibc) -> malloc() -> panic()
  if (addr == NULL)
  {
    addr = heapp.start;
  }

  // 检查是否有足够的空间分配
  if ((char *)addr + size > (char *)heapp.end)
  {
    // 没有足够的空间，返回 NULL
    return NULL;
  }

  void *allocated = addr;
  // 更新 addr 到下一个可用位置
  addr = (char *)addr + size;

  return allocated;
#if !(defined(__ISA_NATIVE__) && defined(__NATIVE_USE_KLIB__))
  panic("Not implemented");
#endif




}

void free(void *ptr) {
}

#endif
