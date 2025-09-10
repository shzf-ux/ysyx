#include "common.h"
#include <dlfcn.h>
#include "difftest/dut.h"

#define MAX_EXE 1000000
#define MAX_VCD 300000

extern int sim_time;
extern int flag_stop;
extern int NPC_State;
uint32_t pmem_read(uint32_t raddr, int len);
typedef struct LogBuf
{
    char logbuf[65535];
} LogBuf;

LogBuf *s;

int max_exe = MAX_EXE;



// -------------------------- IPC统计变量 --------------------------------
static uint64_t inst_count = 0;   // 动态执行的指令总数（仅统计成功执行的指令）
static uint64_t total_cycles = 0; // 总时钟周期数
// ----------------------------------------------------------------------
// -------------------------- 性能计数器定义 ------------------------------
// 1. 模块事件计数器
static uint64_t if_cnt = 0;  // IFU取到指令的次数
static uint64_t lsu_cnt = 0; // LSU取到数据的次数
static uint64_t exu_cnt = 0; // EXU完成计算的次数

// 2. 指令类型计数器（按译码结果分类）
static uint64_t alu_inst_cnt = 0;   // 计算类指令（如add, sub, and等）
static uint64_t mem_inst_cnt = 0;   // 访存指令（如lw, sw, lh等）
static uint64_t csr_inst_cnt = 0;   // CSR指令（如csrrw, csrrs等）
static uint64_t other_inst_cnt = 0; // 其他类型指令
// ----------------------------------------------------------------------
// --------------------------  ------------------------------
static uint64_t alu_total_cycles = 0, mem_total_cycles = 0; // 每类指令总周期
static uint64_t csr_total_cycles = 0, other_total_cycles = 0;
static uint64_t current_inst_start_cycle = 0; // 当前指令的取指开始周期
// ----------------------------------------------------------------------

// 生成指令跟踪日志
static void generate_itr_log(uint32_t pc, uint32_t inst_t)
{
    s = (LogBuf *)malloc(sizeof(LogBuf));
    char *p = s->logbuf;
    p += snprintf(p, sizeof(s->logbuf), "%08x:", pc);

    int ilen = 4;
    int i;
    uint8_t *inst = (uint8_t *)&inst_t;

    for (i = ilen - 1; i >= 0; i--)
    {
        p += snprintf(p, 4, " %02x", inst[i]);
    }

    int ilen_max = 4;
    int space_len = ilen_max - ilen;
    if (space_len < 0)
        space_len = 0;
    space_len = space_len * 3 + 1;
    memset(p, ' ', space_len);
    p += space_len;

    void disassemble(char *str, int size, uint64_t pc, uint8_t *code, int nbyte);
    disassemble(p, s->logbuf + sizeof(s->logbuf) - p, pc, (uint8_t *)&inst_t, ilen);

    printf("%s\n", s->logbuf);
    free(s);
}

// 处理指令跟踪逻辑
static void handle_itr_cond(int batch_mode){
    #ifdef CONFIG_ITRACE_COND
    if (!batch_mode && top.valid&&top.ready)
    {
        generate_itr_log(top.pc, top.inst);
    }
    #endif
}


static void difftest()
{
    if (top.done) {
        #ifdef CONFIG_DIFFTEST
        difftest_step(top.pc);
        #endif
    }
}
static void reset()
{
   
    if (soc_top->reset == 1)
    {
        inst_count = 0;
        total_cycles = 0;
    }

    
    if (sim_time == 19)
    {
        soc_top->reset = 0;
    }
}
static void single_cycle()
{
    reset(); // 处理复位逻辑

    if (sim_time > 95000000+10000000)
    {
       
        //flag_stop = 1;
         // return;
    }

    soc_top->clock = !soc_top->clock;
    sim_time++;
    soc_top->eval();
    if (sim_time > 95000000)
    {
       // printf("pc :%08x\n", top.pc);
        //  vcd->dump(sim_time);
    }

    soc_top->clock = !soc_top->clock;
    sim_time++;
    soc_top->eval();
    total_cycles = sim_time / 2;
    // printf("pc :%08x\n", top.pc);
    // vcd->dump(sim_time);
    
}

void print_ipc(){

    double ipc = (double)inst_count / total_cycles;

    // 打印统计结果（格式：指令数 | 总周期 | IPC）
    printf("\n[IPC STAT] Inst Count: %-10lu | Total Cycles: %-10lu | IPC: %.4f\n",inst_count, total_cycles, ipc);
}
// 原函数声明修改为：统计IFU取到指令
extern "C" void if_performance_cnt(bool if_r_active)
{
    if (if_r_active && soc_top->reset == 0) // 复位释放后才统计
    {
        if_cnt++;
    }
}
// 原函数声明修改为：统计LSU取到数据
extern "C" void lsu_performance_cnt(bool lsu_r_active)
{
    if (lsu_r_active && soc_top->reset == 0) // 复位释放后才统计
    {
        lsu_cnt++;
    }
}
extern "C" void ex_performance_cnt(bool ex_active)
{
    if (ex_active && soc_top->reset == 0) // 复位释放后才统计
    {
        exu_cnt++;
    }
}
static void print_perf_counters()
{
    printf("\n[PERFORMANCE COUNTERS] Cycle: %lu\n", total_cycles);
    // 模块事件统计
    printf("1. Module Events:\n");
    printf("   - IFU取到指令: %lu\n", if_cnt);
    printf("   - LSU取到数据: %lu\n", lsu_cnt);
    printf("   - EXU完成计算: %lu\n", exu_cnt);

    printf("   Total Instructions: %lu\n", inst_count);
    printf("   - 计算类: %lu (%.2f%%) | 平均周期: %.2f\n",
           alu_inst_cnt, (double)alu_inst_cnt / inst_count * 100,
           (alu_inst_cnt == 0) ? 0 : (double)alu_total_cycles / alu_inst_cnt);
    printf("   - 访存类: %lu (%.2f%%) | 平均周期: %.2f\n",
           mem_inst_cnt, (double)mem_inst_cnt / inst_count * 100,
           (mem_inst_cnt == 0) ? 0 : (double)mem_total_cycles / mem_inst_cnt);
    printf("   - CSR类: %lu (%.2f%%) | 平均周期: %.2f\n",
           csr_inst_cnt, (double)csr_inst_cnt / inst_count * 100,
           (csr_inst_cnt == 0) ? 0 : (double)csr_total_cycles / csr_inst_cnt);
    printf("   - 其他类: %lu (%.2f%%) | 平均周期: %.2f\n",
           other_inst_cnt, (double)other_inst_cnt / inst_count * 100,
           (other_inst_cnt == 0) ? 0 : (double)other_total_cycles / other_inst_cnt);
}
void inst_percentage(){


    if(top.valid&top.ready){
        current_inst_start_cycle = total_cycles;
    }
    else if (top.done && soc_top->reset == 0)
    {
        inst_count++;

        // 1. 计算当前指令的总周期（从取指开始到执行完成）
        uint64_t inst_cycle = total_cycles - current_inst_start_cycle;

        // 2. 按指令类型累加周期
        uint32_t inst = top.inst;
        uint8_t opcode = inst & 0x7F;
        switch (opcode)
        {
        case 0x33:
        case 0x13: // 计算类
            alu_inst_cnt++;
            alu_total_cycles += inst_cycle;
            break;
        case 0x03:
        case 0x23: // 访存类（无流水线中store通常快，此处统一统计）
            mem_inst_cnt++;
            mem_total_cycles += inst_cycle;
            break;
        case 0x73: // CSR类
            csr_inst_cnt++;
            csr_total_cycles += inst_cycle;
            break;
        default: // 其他类
            other_inst_cnt++;
            other_total_cycles += inst_cycle;
            break;
        }
    }
}

void npc_exec(uint64_t n)
{
    int batch_mode = (int)n == -1;

    while (flag_stop == 0 && (n--) > 0)
    {
       

        single_cycle();             //模拟时钟周期
        inst_percentage();

        #ifdef CONFIG_NVBoard
        nvboard_update();           //nvboard等于cpu的时钟周期
        #endif
    
        handle_itr_cond(batch_mode);   //itrace 

        difftest();//difftest

        if (total_cycles % 1000000 == 0) // 每10000个周期打印一次
        {
            //print_ipc();
        }
    }
    printf("\n[IPC FINAL] Simulation stopped!\n");
    print_ipc();
    print_perf_counters(); // 新增：打印最终性能计数器
}