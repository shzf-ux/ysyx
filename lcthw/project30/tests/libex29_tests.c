#include "minunit.h"
#include <dlfcn.h>

typedef int (*lib_function)(const char *data);

// 动态库路径
char *lib_file = "build/libex29.so";
void *lib = NULL;

// 通用函数检查器
int check_function(const char *func_to_run, const char *data, int expected) {
    lib_function func = dlsym(lib, func_to_run);
    check(func != NULL, "Did not find %s function in the library %s: %s", func_to_run, lib_file, dlerror());

    int rc = func(data);
    check(rc == expected, "Function %s return %d for data: %s", func_to_run, rc, data);

    return 1;

error:
    return 0;
}

// 测试 dlopen
char *test_dlopen() {
    lib = dlopen(lib_file, RTLD_NOW);
    mu_assert(lib != NULL, "Failed to open the library to test.");
    return NULL;
}

// 测试库函数
char *test_functions() {
    mu_assert(check_function("print_a_message", "Hello", 0), "print_a_message failed.");
    mu_assert(check_function("uppercase", "Hello", 0), "uppercase failed.");
    mu_assert(check_function("lowercase", "Hello", 0), "lowercase failed.");
    return NULL;
}

// 测试失败情况
char *test_failures() {
    mu_assert(check_function("fail_on_purpose", "Hello", 1), "fail_on_purpose should fail.");
    return NULL;
}

// 测试 dlclose
char *test_dlclose() {
    int rc = dlclose(lib);
    mu_assert(rc == 0, "Failed to close lib.");
    return NULL;
}

// 运行所有测试
char *all_tests() {
    mu_suite_start();
    mu_run_test(test_dlopen);
    mu_run_test(test_functions);
    mu_run_test(test_failures);
    mu_run_test(test_dlclose);
    return NULL;
}

// 主函数
RUN_TESTS(all_tests);
