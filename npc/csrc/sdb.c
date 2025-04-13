#include <readline/readline.h>
#include <readline/history.h>
#include <svdpi.h> // 包含DPI-C作用域API
#include "common.h"
static int is_batch_mode = false;
extern int flag_stop;
extern Vysyx_25030085_top *top;
extern VerilatedVcdC *vcd;
int npc_exec(uint64_t n);
extern "C"
{
    void info_register_en(bool enable);
    void set_scope();
}
void set_scope()
{

    svScope scope = svGetScopeFromName("TOP.ysyx_25030085_top.regfile_init");
    if (!scope)
    {
        fprintf(stderr, "Error: Regfile scope not found!\n");
        exit(1);
    }
    svSetScope(scope);
}

#define INPUT_MAX_LEN 256 // 输入最大长度

static char *rl_gets()
{
    static char buffer[INPUT_MAX_LEN + 1]; // 静态缓冲区
    memset(buffer, 0, sizeof(buffer));     // 清空缓冲区

    printf("(npc) "); // 手动打印提示符
    fflush(stdout);   // 确保立即显示

    if (fgets(buffer, INPUT_MAX_LEN, stdin) == NULL)
    {
        return NULL; // 处理 EOF (Ctrl+D)
    }

    // 去除末尾换行符
    buffer[strcspn(buffer, "\n")] = '\0';

    return buffer; // 返回静态缓冲区地址
}
uint32_t pmem_read(uint32_t pc);
static int cmd_x(char *args)
{ // 扫描内存，第一个参数为数量，第二个参数为起始位置
    char *n = strtok(args, " ");
    char *paddr = strtok(NULL, " ");
    int len = 0;
    uint32_t addr = 0;
    sscanf(n, "%d", &len);
    sscanf(paddr, "%x", &addr);
    for (int i = 0; i < len; i++)
    {
       
        printf("0x%08x:  ", addr);
        printf("Hex:0x%08x", pmem_read(addr)); 
        printf("\tDec:%d\n", pmem_read(addr)); 
        addr = addr + 4;
    }

    return 0;
}
static int cmd_info(char *args)
{ // 参数为r时，打印寄存器状态，参数为w打印监视点状态
    set_scope();
    
    info_register_en(1);
    top->eval();//一定要更新,verilog里面的always的信号是否n更新n看这个
    info_register_en(0);
    top->eval();

    return 0;
}
static int cmd_s(char *args)
{                     // 单步执行,参数为执行的步数
    if (flag_stop == 1)
    {
        printf("Program execution has ended. To restart the program, exit NPC and run again.\n");
        return 0;
    }
    char *num = strtok(NULL, " "); // 获取第二个参数
    if (num == NULL)
    {
        npc_exec(2);
        return 0;
    }
    int cnt = 0;
    sscanf(num, "%d", &cnt);
    for (int i = 0; i < cnt; i++)
    {
       npc_exec(2);
    }
    return 0;
}

static int cmd_c(char *args)
{ // cpu执行，无参数
    if(flag_stop==0)
    {
    npc_exec(-1);
    }
    else if(flag_stop==1)
    {
        printf("Program execution has ended. To restart the program, exit NPC and run again.\n");
    }
    

    return 0;
}

static int cmd_q(char *args) // 退出
{
    
    return -1;
}

static int cmd_help(char *args);

static struct
{
    const char *name;
    const char *description;
    int (*handler)(char *);
} cmd_table[] = {
    {"help", "Display information about all supported commands", cmd_help},
    {"c", "Continue the execution of the program", cmd_c},
    {"q", "Exit NPC", cmd_q},
    {"s", "one more step", cmd_s},
    {"info", "Scan the status of registers", cmd_info},
    {"x", "scanf memory", cmd_x},
    /* TODO: Add more commands */

};

#define NR_CMD ARRLEN(cmd_table)
#define ARRLEN(arr) (int)(sizeof(arr) / sizeof(arr[0]))

static int cmd_help(char *args)
{
    /* extract the first argument */
    char *arg = strtok(NULL, " ");
    int i;

    if (arg == NULL)
    {
        /* no argument given */
        for (i = 0; i < NR_CMD; i++)
        {
            printf("%s - %s\n", cmd_table[i].name, cmd_table[i].description);
        }
    }
    else
    {
        for (i = 0; i < NR_CMD; i++)
        {
            if (strcmp(arg, cmd_table[i].name) == 0)
            {
                printf("%s - %s\n", cmd_table[i].name, cmd_table[i].description);
                return 0;
            }
        }
        printf("Unknown command '%s'\n", arg);
    }
    return 0;
}

void sdb_set_batch_mode()
{
    is_batch_mode = true;
}

void sdb_mainloop()
{
    if (is_batch_mode)
    {
        cmd_c(NULL);
        return;
    }

    for (char *str; (str = rl_gets()) != NULL;)
    {

        char *str_end = str + strlen(str);

        /* extract the first token as the command */
        char *cmd = strtok(str, " ");
        if (cmd == NULL)
        {
            continue;
        }

        /* treat the remaining string as the arguments,
         * which may need further parsing
         */
        char *args = cmd + strlen(cmd) + 1;
        if (args >= str_end)
        {
            args = NULL;
        }
        int i;
        for (i = 0; i < NR_CMD; i++)
        {
            if (strcmp(cmd, cmd_table[i].name) == 0)
            {
                if (cmd_table[i].handler(args) < 0)
                {
                    return;
                }
                break;
            }
        }

        if (i == NR_CMD)
        {
            printf("Unknown command '%s'\n", cmd);
        }
    }
}

