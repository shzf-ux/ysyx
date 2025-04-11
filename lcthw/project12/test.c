#include <stdio.h>
#include <ctype.h> // 用于 tolower 函数

int main(int argc, char *argv[]) {
    if (argc < 2) {
        printf("ERROR: 至少需要一个参数。\n");
        return 1;
    }

    for (int arg_idx = 1; arg_idx < argc; arg_idx++) { // 处理所有参数（附加题3）
        char *arg = argv[arg_idx];
        for (int i = 0; arg[i] != '\0'; i++) {
            char letter = tolower(arg[i]); // 转换为小写（附加题1）

            switch (letter) {
                case 'a':
                    printf("%d: 'A'\n", i);
                    break;
                case 'e':
                    printf("%d: 'E'\n", i);
                    break;
                case 'i':
                    printf("%d: 'I'\n", i);
                    break;
                case 'o':
                    printf("%d: 'O'\n", i);
                    break;
                case 'u':
                    printf("%d: 'U'\n", i);
                    break;
                case 'y':
                    if (i > 2) {
                        printf("%d: 'Y'\n", i);
                    }
                    break;
                default:
                    printf("%d: %c 不是元音\n", i, arg[i]); // 显示原始字符
            }
        }
    }

    return 0;
}
