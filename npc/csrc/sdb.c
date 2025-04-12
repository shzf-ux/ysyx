#include <readline/readline.h>
#include <readline/history.h>
#include "common.h"
static int is_batch_mode = false;
int npc_exec(uint64_t n);
#define INPUT_MAX_LEN 256 // 输入最大长度

static char *rl_gets()
{
    static char buffer[INPUT_MAX_LEN + 1]; // 静态缓冲区
    memset(buffer, 0, sizeof(buffer));     // 清空缓冲区

    printf("(npc) "); // 手动打印提示符
    fflush(stdout);   // 确保立即显示

    // 读取输入（阻塞式）
    if (fgets(buffer, INPUT_MAX_LEN, stdin) == NULL)
    {
        return NULL; // 处理 EOF (Ctrl+D)
    }

    // 去除末尾换行符
    buffer[strcspn(buffer, "\n")] = '\0';

    return buffer; // 返回静态缓冲区地址
}
static int cmd_x(char *args)
{ // 扫描内存，第一个参数为数量，第二个参数为起始位置

    return 0;
}
static int cmd_info(char *args)
{ // 参数为r时，打印寄存器状态，参数为w打印监视点状态

    return 0;
}
static int cmd_s(char *args)
{                                  // 单步执行,参数为执行的步数

    return 0;
}

static int cmd_c(char *args)
{ // cpu执行，无参数
    int ret=npc_exec(-1);
    return ret;
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

