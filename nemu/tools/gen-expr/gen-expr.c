#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <assert.h>
#include <string.h>
#include <stdarg.h>

typedef uint32_t word_t;
static char buf[65536] = {};
static char code_buf[65536 + 128] = {};
static char *code_format =
"#include <stdio.h>\n"
"int main() { "
"  unsigned result = %s; "
"  printf(\"%%u\", result); "
"  return 0; "
"}";

// 生成控制参数
#define MAX_DEPTH 4
#define DIV_ZERO_RETRY 5

static int choose(int n) {
    return rand() % n;
}

static void gen(char c) {

    char temp[128]={c ,'\0'};
    if (strlen(buf) + strlen(temp) < sizeof(buf)) {
        strcat(buf, temp);
    }
}

static void gen_num() {
    int num=choose(10000);
    char str_num[20];
    sprintf(str_num, "%d", num);
    strcat(buf, str_num);
}

static void gen_rand_op() {
    const char ops[] = {'+', '-', '*', '/', '%'};
    char op = ops[choose(5)];
    char str_op[2]={op,'\0'};
    strcat(buf, str_op);
}

// 递归生成表达式核心逻辑
static void gen_rand_expr(int depth) {
    // 递归终止条件
    if (depth > MAX_DEPTH || strlen(buf) > 1000) {
        gen_num();
        return;
    }

    switch (choose(3)) {
        case 0: // 生成数字
            gen_num();
            break;
            
        case 1: { // 生成括号表达式
            gen('(');
            gen_rand_expr(depth + 1);
            gen(')');
            break;
        }
            
        default: { // 生成二元运算
            
            gen_rand_expr(depth + 1);      
            gen_rand_op();
            gen_rand_expr(depth + 1);
            
        }
    }
}



int main(int argc, char *argv[]) {
    int seed = time(0);
    srand(seed);
    int loop = 1;
    if (argc > 1) {
        sscanf(argv[1], "%d", &loop);//读取命令行参数，指定循环次数
    }

    for (int i = 0; i < loop; ) {
        buf[0] = '\0';
        gen_rand_expr(0);//设置递归深度
        
        // 生成测试程序
        snprintf(code_buf, sizeof(code_buf), code_format, buf);//把buf表达式传入到c程序里面，最后存入codebuf里面
        
        FILE *fp = fopen("/tmp/.code.c", "w");
        if (!fp) continue;
        fputs(code_buf, fp); // 把之前生产的代码写入临时文件
        fclose(fp);

        // 编译检查
        if (system("gcc /tmp/.code.c -o /tmp/.expr -w 2>/dev/null") != 0) {//进行编译检查
            continue;
        }
        
        // 运行检查
        fp = popen("/tmp/.expr", "r");//创建一个管道，运行程序
        if (!fp) continue;//判断指针是否为空

        unsigned result;
        int valid = (fscanf(fp, "%u", &result) == 1); // 。这里从 fp 所指向的文件流（即可执行文件的标准输出）中读取一个无符号整数，并将其存储到 result 变量中。
        int status = pclose(fp);
        
        if (valid && WIFEXITED(status) && WEXITSTATUS(status) == 0) {
            printf("%u %s\n", result, buf);
            i++; // 仅计数有效用例
        } // wifexited这是一个宏，用于检查命令是否正常退出。如果命令正常退出，该宏返回非零值；否则返回 0。
    }
    return 0;
}
