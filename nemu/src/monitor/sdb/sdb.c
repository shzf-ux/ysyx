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
#include <readline/readline.h>
#include <readline/history.h>
#include "sdb.h"
#include <memory/paddr.h>

static int is_batch_mode = false;

void init_regex();
void init_wp_pool();

/* We use the `readline' library to provide more flexibility to read from stdin. */
static char *rl_gets()
{
  static char *line_read = NULL;

  if (line_read)
  {
    free(line_read);
    line_read = NULL;
  }

  line_read = readline("(nemu) ");

  if (line_read && *line_read)
  {
    add_history(line_read);
  }

  return line_read;
}
static int cmd_w(char *args) // 创建监视点
{
  creat_watchpoints(args);
  return 0;
}
static int cmd_d(char *args)
{ // 删除监视点，参数为监视点的序号
  if (args == NULL)
    printf("No args.\n");
  else
  {
    delete_watchpoint(atoi(args));
  }
  return 0;
}

static int cmd_p(char *args)
{ // 计算表达式的值，参数为一个表达式
  if (args == NULL)
  {
    printf("No args\n");
    return 0;
  }
  bool flag = false;
  int tmp = expr(args, &flag);
  return tmp;
}

static int cmd_t(char *args) // 自动化测试表达式的功能，参数为文件名字
{
  const char *filename = args;

  FILE *fp = fopen(filename, "r");
  if (!fp)
  {
    printf("\n无法打开文件: %s\n", filename);
    return -1;
  }
  char line[1000000];
  unsigned line_num = 0, passed = 0;

  while (fgets(line, sizeof(line), fp))
  {
    line_num++;
    line[strcspn(line, "\n")] = 0;

    // 解析预期结果和表达式
    unsigned expected;
    char expr[1000000];
    if (sscanf(line, "%u %[^\n]", &expected, expr) != 2)
    {
      printf("┃ 行 %03d │ 格式错误: %s\n", line_num, line);
      continue;
    }

    printf("┃ 行 %03d │ 测试: %-30s", line_num, expr);
    fflush(stdout);
    int tmp = cmd_p(expr);

    if (tmp == expected)
    {
      passed++;
      printf("✓ 通过 (预期=%u 实际=%u)\n", expected, tmp);
    }
    else
    {
      printf("✗ 失败 (预期=%u 实际=%u)\n", expected, tmp);
    }
  }
  fclose(fp);
  printf("✅ 通过: %d | ❌ 失败: %d | 📜 总数: %d\n\n", passed, line_num - passed, line_num);

  return 0;
}

static int cmd_x(char *args)
{ // 扫描内存，第一个参数为数量，第二个参数为起始位置
  char *n = strtok(args, " ");
  char *paddr = strtok(NULL, " ");
  int len = 0;
  paddr_t addr = 0;
  sscanf(n, "%d", &len);
  sscanf(paddr, "%x", &addr);
  for (int i = 0; i < len; i++)
  {
    printf("0x%08x:  ", addr);
    printf("Hex:0x%08x", paddr_read(addr, 4)); // addr len
    printf("\tDec:%d\n", paddr_read(addr, 4)); // addr len
    addr = addr + 4;
  }
  return 0;
}
static int cmd_info(char *args)
{ // 参数为r时，打印寄存器状态，参数为w打印监视点状态
  char *cmd = strtok(NULL, " ");
  if (cmd == NULL)
  {
    printf("no args\n");
    return 0;
  }
  else if (strcmp(cmd, "r") == 0)
  {
    isa_reg_display();
  }
  else if (strcmp(args, "w") == 0)
  {
    sdb_watchpoints_display();
  }

  return 0;
}
static int cmd_s(char *args)
{                                // 单步执行,参数为执行的步数
  char *num = strtok(NULL, " "); // 获取第二个参数
  if (num == NULL)
  {
    cpu_exec(1);
    return 0;
  }
  int cnt = 0;
  sscanf(num, "%d", &cnt);
  for (int i = 0; i < cnt; i++)
  {
    cpu_exec(1);
  }
  return 0;
}

static int cmd_c(char *args)
{ // cpu执行，无参数
  cpu_exec(-1);
  return 0;
}

static int cmd_q(char *args) // 退出
{
  nemu_state.state = NEMU_QUIT; // 执行make run才会触发，给make run一个为0的状态码
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
    {"q", "Exit NEMU", cmd_q},
    {"s", "one more step", cmd_s},
    {"info", "Scan the status of registers", cmd_info},
    {"x", "scanf memory", cmd_x},
    {"p", "Execute expression evaluation, with the parameter being an expression", cmd_p},
    {"t", "Automate the testing of the expression functionality, with the file name as the parameter", cmd_t},
    {"w", "creat the watchpoints", cmd_w},
    {"d", "delete the watchpoints", cmd_d}

    /* TODO: Add more commands */

};

#define NR_CMD ARRLEN(cmd_table)

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

#ifdef CONFIG_DEVICE
    extern void sdl_clear_event_queue();
    sdl_clear_event_queue();
#endif

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

void init_sdb()
{
  /* Compile the regular expressions. */
  init_regex();

  /* Initialize the watchpoint pool. */
  init_wp_pool();
}
