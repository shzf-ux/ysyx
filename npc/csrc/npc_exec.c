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

// 基础统计变量
static uint64_t inst_count = 0;        // 总执行指令数
static uint64_t total_cycles = 0;      // 总时钟周期数
static uint64_t total_inst_cycles = 0; // 所有指令消耗的总周期（用于计算周期占比）

// 模块事件计数器
static uint64_t if_cnt = 0;  // IFU取指次数
static uint64_t lsu_cnt = 0; // LSU访存次数
static uint64_t exu_cnt = 0; // EXU计算次数

// 指令类型计数器与周期统计
static uint64_t load_cnt = 0;
static uint64_t store_cnt = 0;
static uint64_t calculate_cnt = 0;
static uint64_t csr_cnt = 0;
static uint64_t jump_branch_cnt = 0;

static uint64_t load_total_cycles = 0;
static uint64_t store_total_cycles = 0;
static uint64_t calculate_total_cycles = 0;
static uint64_t csr_total_cycles = 0;
static uint64_t jump_branch_total_cycles = 0;

// 当前指令跟踪
static uint64_t current_inst_start_cycle = 0;
static bool is_current_inst_valid = false;

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
    space_len = (space_len < 0) ? 0 : space_len * 3 + 1;
    memset(p, ' ', space_len);
    p += space_len;

    void disassemble(char *str, int size, uint64_t pc, uint8_t *code, int nbyte);
    disassemble(p, s->logbuf + sizeof(s->logbuf) - p, pc, (uint8_t *)&inst_t, ilen);

    printf("%s\n", s->logbuf);
    free(s);
}

static void handle_itr_cond(int batch_mode)
{
#ifdef CONFIG_ITRACE_COND
    if (!batch_mode && top.valid && top.ready)
    {
        generate_itr_log(top.pc, top.inst);
    }
#endif
}

static void difftest()
{
    if (top.done)
    {
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
        total_inst_cycles = 0;
        if_cnt = 0;
        lsu_cnt = 0;
        exu_cnt = 0;

        load_cnt = 0;
        store_cnt = 0;
        calculate_cnt = 0;
        csr_cnt = 0;
        jump_branch_cnt = 0;

        load_total_cycles = 0;
        store_total_cycles = 0;
        calculate_total_cycles = 0;
        csr_total_cycles = 0;
        jump_branch_total_cycles = 0;

        current_inst_start_cycle = 0;
        is_current_inst_valid = false;
    }

    if (sim_time == 19)
    {
        soc_top->reset = 0;
    }
}

static void single_cycle()
{
    reset();

    if (sim_time > 95000000 + 10000000)
    {
        // flag_stop = 1;
        // return;
    }

    soc_top->clock = !soc_top->clock;
    sim_time++;
    soc_top->eval();
    if (sim_time > 95000000)
    {
        // printf("pc :%08x\n", top.pc);
        // vcd->dump(sim_time);
    }

    soc_top->clock = !soc_top->clock;
    sim_time++;
    soc_top->eval();
    total_cycles = sim_time / 2;
    // vcd->dump(sim_time);
}

void print_ipc()
{
    double ipc = (inst_count == 0 || total_cycles == 0) ? 0.0 : (double)inst_count / total_cycles;

    printf("\n==================================== IPC 统计 ====================================\n");
    printf("| %-20s | %-20s | %-20s |\n", "动态执行指令数", "总时钟周期数", "每周期指令数(IPC)");
    printf("|----------------------------------------------------------------------------------|\n");
    printf("| %-20lu | %-20lu | %-20.4f |\n", inst_count, total_cycles, ipc);
    printf("==================================================================================\n");
}

extern "C" void if_performance_cnt(bool if_r_active)
{
    if (if_r_active && soc_top->reset == 0)
    {
        if_cnt++;
        if (!is_current_inst_valid)
        {
            current_inst_start_cycle = total_cycles;
            is_current_inst_valid = true;
        }
    }
}

extern "C" void lsu_performance_cnt(bool lsu_r_active)
{
    if (lsu_r_active && soc_top->reset == 0)
    {
        lsu_cnt++;
    }
}

extern "C" void ex_performance_cnt(bool ex_active)
{
    if (ex_active && soc_top->reset == 0)
    {
        exu_cnt++;
    }
}

static void print_perf_counters()
{
    // 计算指令数量占比（相对于总指令数）
    double load_inst_pct = (inst_count == 0) ? 0.0 : (double)load_cnt / inst_count * 100;
    double store_inst_pct = (inst_count == 0) ? 0.0 : (double)store_cnt / inst_count * 100;
    double calculate_inst_pct = (inst_count == 0) ? 0.0 : (double)calculate_cnt / inst_count * 100;
    double csr_inst_pct = (inst_count == 0) ? 0.0 : (double)csr_cnt / inst_count * 100;
    double jump_branch_inst_pct = (inst_count == 0) ? 0.0 : (double)jump_branch_cnt / inst_count * 100;

    // 计算指令周期占比（相对于所有指令总消耗周期）
    double load_cycle_pct = (total_inst_cycles == 0) ? 0.0 : (double)load_total_cycles / total_inst_cycles * 100;
    double store_cycle_pct = (total_inst_cycles == 0) ? 0.0 : (double)store_total_cycles / total_inst_cycles * 100;
    double calculate_cycle_pct = (total_inst_cycles == 0) ? 0.0 : (double)calculate_total_cycles / total_inst_cycles * 100;
    double csr_cycle_pct = (total_inst_cycles == 0) ? 0.0 : (double)csr_total_cycles / total_inst_cycles * 100;
    double jump_branch_cycle_pct = (total_inst_cycles == 0) ? 0.0 : (double)jump_branch_total_cycles / total_inst_cycles * 100;

    // 计算各类指令平均周期
    double load_avg_cycle = (load_cnt == 0) ? 0.0 : (double)load_total_cycles / load_cnt;
    double store_avg_cycle = (store_cnt == 0) ? 0.0 : (double)store_total_cycles / store_cnt;
    double calculate_avg_cycle = (calculate_cnt == 0) ? 0.0 : (double)calculate_total_cycles / calculate_cnt;
    double csr_avg_cycle = (csr_cnt == 0) ? 0.0 : (double)csr_total_cycles / csr_cnt;
    double jump_branch_avg_cycle = (jump_branch_cnt == 0) ? 0.0 : (double)jump_branch_total_cycles / jump_branch_cnt;

    // 模块事件统计
    printf("\n==================================== 模块事件统计 ====================================\n");
    printf("| %-20s | %-20s | %-20s |\n", "IFU取指次数", "LSU访存次数", "EXU计算次数");
    printf("|--------------------------------------------------------------------------------------|\n");
    printf("| %-20lu | %-20lu | %-20lu |\n", if_cnt, lsu_cnt, exu_cnt);
    printf("======================================================================================\n");

    // 指令类型统计（含数量占比、周期占比）
    printf("\n==================================== 指令类型统计 ====================================\n");
    printf("| %-15s     | %-10s   | %-12s  | %-12s | %-15s | %-15s |\n",
           "指令类型", "执行次数", "数量占比(%)", "周期占比(%)", "总消耗周期", "平均周期/条");
    printf("|--------------------------------------------------------------------------------------|\n");
    printf("| %-15s | %-10lu | %-12.2f | %-12.2f | %-15lu | %-15.2f |\n",
           "Load", load_cnt, load_inst_pct, load_cycle_pct, load_total_cycles, load_avg_cycle);
    printf("| %-15s | %-10lu | %-12.2f | %-12.2f | %-15lu | %-15.2f |\n",
           "Store", store_cnt, store_inst_pct, store_cycle_pct, store_total_cycles, store_avg_cycle);
    printf("| %-15s | %-10lu | %-12.2f | %-12.2f | %-15lu | %-15.2f |\n",
           "Calculate", calculate_cnt, calculate_inst_pct, calculate_cycle_pct, calculate_total_cycles, calculate_avg_cycle);
    printf("| %-15s | %-10lu | %-12.2f | %-12.2f | %-15lu | %-15.2f |\n",
           "CSR", csr_cnt, csr_inst_pct, csr_cycle_pct, csr_total_cycles, csr_avg_cycle);
    printf("| %-15s | %-10lu | %-12.2f | %-12.2f | %-15lu | %-15.2f |\n",
           "Jump/Branch", jump_branch_cnt, jump_branch_inst_pct, jump_branch_cycle_pct, jump_branch_total_cycles, jump_branch_avg_cycle);
    printf("|--------------------------------------------------------------------------------------|\n");
    printf("| %-15s | %-10lu | %-12s | %-12s | %-15lu | %-15s |\n",
           "合计", inst_count, "100.00%", "100.00%", total_inst_cycles, "-");
    printf("======================================================================================\n");
}

void inst_percentage()
{
    if (top.done && soc_top->reset == 0 && is_current_inst_valid)
    {
        inst_count++;
        // 计算当前指令消耗周期
        uint64_t inst_cycle = total_cycles - current_inst_start_cycle;
        inst_cycle = (inst_cycle <= 0) ? 1 : inst_cycle;
        // 累加所有指令总消耗周期
        total_inst_cycles += inst_cycle;

        uint32_t inst = top.inst;
        uint8_t opcode = inst & 0x7F;

        switch (opcode)
        {
        case 0x03:
            load_cnt++;
            load_total_cycles += inst_cycle;
            break;
        case 0x23:
            store_cnt++;
            store_total_cycles += inst_cycle;
            break;
        case 0x33:
        case 0x13:
        case 0x7B:
            calculate_cnt++;
            calculate_total_cycles += inst_cycle;
            break;
        case 0x73:
            csr_cnt++;
            csr_total_cycles += inst_cycle;
            break;
        case 0x63:
        case 0x6F:
        case 0x67:
        case 0x0F:
            jump_branch_cnt++;
            jump_branch_total_cycles += inst_cycle;
            break;
        default:
            calculate_cnt++;
            calculate_total_cycles += inst_cycle;
            break;
        }

        is_current_inst_valid = false;
        current_inst_start_cycle = 0;
    }
}

void npc_exec(uint64_t n)
{
    int batch_mode = (int)n == -1;

    while (flag_stop == 0 && (n--) > 0)
    {
        single_cycle();
        inst_percentage();
#ifdef CONFIG_NVBoard
        nvboard_update();
#endif
        handle_itr_cond(batch_mode);
        difftest();

        if (total_cycles % 1000000 == 0 && total_cycles != 0)
        {
           // printf("\n[中间统计] 周期数: %lu | 累计指令数: %lu | 当前IPC: %.4f\n",total_cycles, inst_count, (double)inst_count / total_cycles);
        }
    }

    printf("\n==================================== 仿真结束 ====================================\n");
    print_ipc();
    print_perf_counters();
}