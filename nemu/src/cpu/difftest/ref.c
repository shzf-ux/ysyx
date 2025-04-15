/***************************************************************************************
* Copyright (c) 2014-2024 Zihao Yu, Nanjing University
*
* NEMU is licensed under Mulan PSL v2.
* You can use this software according to the terms and conditions of the Mulan PSL v2.
* You may obtain a copy of Mulan PSL v2 at:
*          http://license.coscl.org.cn/MulanPSL2
*
* THIS SOFTWARE IS PROVIDED ON AN "AS IS" BASIS, WITHOUT WARRANTIES OF ANY KIND,
* EITHER EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO NON-INFRINGEMENT,
* MERCHANTABILITY OR FIT FOR A PARTICULAR PURPOSE.
*
* See the Mulan PSL v2 for more details.
***************************************************************************************/

#include <isa.h>
#include <cpu/cpu.h>
#include <difftest-def.h>
#include <memory/paddr.h>
//addr为向nemu虚拟地址0x80000000，buf为npc数组的物理地址，
__EXPORT void difftest_memcpy(paddr_t addr, void *buf, size_t n, bool direction) {
  //addr转化到nemu的数组n起点
 
    memcpy(guest_to_host(addr), buf, n); // 把实际地址赋值到nemu的数组地址里面
  
 
}
// 传入寄存器结构体，向这个寄存器结构体赋值nemu的寄存器状态;
__EXPORT void difftest_regcpy(void *dut, bool direction)
{
 char *regs[] = {
      "x0", "ra", "sp", "gp", "tp", "t0", "t1", "t2",
      "s0", "s1", "a0", "a1", "a2", "a3", "a4", "a5",
      "a6", "a7", "s2", "s3", "s4", "s5", "s6", "s7",
      "s8", "s9", "s10", "s11", "t3", "t4", "t5", "t6"};
  typedef struct
  {
    int gpr[32];
    uint32_t pc;
  } CPU;
  CPU *dut_state = (CPU *)dut;//把dut转化

  if (direction == DIFFTEST_TO_REF) //
  {
    for (int i = 0; i < sizeof(regs) / sizeof(regs[0]); i++)
    {

      printf("%-5s: 0x%08x\n", regs[i], cpu.gpr[i]);
    }

    for (int i = 0; i < sizeof(regs) / sizeof(regs[0]); i++)
    {
      dut_state->gpr[i] = cpu.gpr[i];
    }
  }
 
}

__EXPORT void difftest_exec(uint64_t n){

  cpu_exec(n);
}

__EXPORT void difftest_raise_intr(word_t NO)
{
  assert(0);
}

__EXPORT void difftest_init(int port) {
  void init_mem();
  init_mem();
  /* Perform ISA dependent initialization. */
  init_isa();
}
