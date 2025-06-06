#ifndef ARCH_H__
#define ARCH_H__

#ifdef __riscv_e
#define NR_REGS 16
#else
#define NR_REGS 32
#endif

#ifdef __riscv_e
struct Context
{
  // TODO: fix the order of these members to match trap.S
  uintptr_t gpr[16];
  uintptr_t mcause, mstatus, mepc;
};
#else
struct Context {
  // TODO: fix the order of these members to match trap.S
  uintptr_t gpr[32];
  uintptr_t mcause, mstatus, mepc;
  void *pdir;
};
#endif
#ifdef __riscv_e
#define GPR1 gpr[15] // a5
#else
#define GPR1 gpr[17] // a7
#endif

#define GPR2 gpr[0]
#define GPR3 gpr[0]
#define GPR4 gpr[0]
#define GPRx gpr[0]

#endif
