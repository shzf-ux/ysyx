#include "../common.h"
#include <dlfcn.h>
#include "dut.h"
#define DIFFTEST_TO_REF 0
#define DIFFTEST_TO_DUT 1

void (*ref_difftest_memcpy)(uint32_t addr, void *buf, size_t n, bool direction) = NULL;
void (*ref_difftest_regcpy)(void *dut, bool direction) = NULL;
void (*ref_difftest_exec)(uint64_t n) = NULL;
void (*ref_difftest_raise_intr)(uint64_t NO) = NULL;
void display_register(int en);
static int checkregs(CPU_state *ref, uint32_t pc);

void init_difftest(char *ref_so_file, long img_size, int port)
{
    assert(ref_so_file != NULL);

    void *handle;
    handle = dlopen(ref_so_file, RTLD_LAZY);
    assert(handle);

    ref_difftest_memcpy = dlsym(handle, "difftest_memcpy");
    assert(ref_difftest_memcpy);

    ref_difftest_regcpy = dlsym(handle, "difftest_regcpy");
    assert(ref_difftest_regcpy);

    ref_difftest_exec = dlsym(handle, "difftest_exec");
    assert(ref_difftest_exec);

   // ref_difftest_raise_intr = dlsym(handle, "difftest_raise_intr");
   // assert(ref_difftest_raise_intr);

    void (*ref_difftest_init)(int) = dlsym(handle, "difftest_init");
    assert(ref_difftest_init);

   // Log("Differential testing: %s", ANSI_FMT("ON", ANSI_FG_GREEN));
    //Log("The result of every instruction will be compared with %s. "
   //     "This will help you a lot for debugging, but also significantly reduce the performance. "
   //     "If it is not necessary, you can turn it off in menuconfig.",
   //     ref_so_file);

    ref_difftest_init(port);
    void guest_to_host(uint32_t paddr);
    ref_difftest_memcpy(RESET_VECTOR, guest_to_host(RESET_VECTOR), img_size, DIFFTEST_TO_REF);
    //ref_difftest_regcpy(&cpu, DIFFTEST_TO_REF);
}
void difftest_step(uint32_t pc)
{
  
     CPU_state ref_r;

    ref_difftest_exec(1);
    ref_difftest_regcpy(&ref_r, DIFFTEST_TO_DUT);

    checkregs(&ref_r, pc);
}
extern int flag_stop;
static int checkregs(CPU_state *ref, uint32_t pc)
{
    if (!isa_difftest_checkregs(ref, pc))
    {
        printf("%sError!,register no equal%s\n", ANSI_BG_RED, ANSI_NONE);
        return 0;
    }
}
bool isa_difftest_checkregs(CPU_state *ref_r, uint32_t pc)
{
    
    display_register(0);//不打印
    bool sign = true;
    int i = 0;
    for (i = 0; i < 32; i++)
    {
        if (CPU_state.gpr[i] != ref_r->gpr[i])
        {
            sign = false;
            break;
        }
    }
    if (sign && CPU_state.pc == ref_r->pc)
    {
        return true;
    }
    pc = ref_r->pc;

    return false;
}
