#include <stdio.h>

// 接收9个整数参数，计算它们的和
int add(int a, int b, int c, int d, int e, int f, int g, int h, int i)
{
    return a + b + c + d + e + f + g + h + i;
}

int main()
{
    // 定义9个参数
    int arg1 = 1;
    int arg2 = 2;
    int arg3 = 3;
    int arg4 = 4;
    int arg5 = 5;
    int arg6 = 6;
    int arg7 = 7;
    int arg8 = 8;
    int arg9 = 9;

    // 调用函数并接收结果
    int result = add(arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9);

    // 输出结果（预期结果：45）
    printf("Sum: %d\n", result);

    return 0;
}
