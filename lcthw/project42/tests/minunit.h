#undef NDEBUG
#ifndef _minunit_h
#define _minunit_h

#include <stdio.h>
#include <stdlib.h>
#include "lcthw/dbg.h"  // 确保 dbg.h 文件存在

// 初始化测试套件
#define mu_suite_start() char *message = NULL

// 断言宏：如果条件不成立，记录错误并返回错误信息
#define mu_assert(test, message) \
    if (!(test)) { \
        log_err(message); \
        return message; \
    }

// 运行单个测试用例
#define mu_run_test(test) \
    debug("\n-----%s", " " #test); \
    message = test(); \
    tests_run++; \
    if (message) return message;

// 运行所有测试的主宏
#define RUN_TESTS(name) \
    int main(int argc, char *argv[]) { \
        argc = 1; \
        debug("----- RUNNING: %s", argv[0]); \
        printf("----\nRUNNING: %s\n", argv[0]); \
        char *result = name(); \
        if (result != 0) { \
            printf("FAILED: %s\n", result); \
        } else { \
            printf("ALL TESTS PASSED\n"); \
        } \
        printf("Tests run: %d\n", tests_run); \
        exit(result != 0); \
    }

// 全局变量：记录运行的测试数量
int tests_run;

#endif
