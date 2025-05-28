#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <string.h>

void die(const char *message)
{
    if(errno) {
        perror(message);
    } else {
        printf("ERROR: %s\n", message);
    }

    exit(1);
}

typedef int (*compare_cb)(int a, int b);

// 冒泡排序函数
int *bubble_sort(int *numbers, int count, compare_cb cmp)
{
    int temp = 0;
    int i = 0;
    int j = 0;
    int *target = malloc(count * sizeof(int));

    if(!target) die("Memory error.");

    memcpy(target, numbers, count * sizeof(int));

    for(i = 0; i < count; i++) {
        for(j = 0; j < count - 1; j++) {
            if(cmp(target[j], target[j+1]) > 0) {
                temp = target[j+1];
                target[j+1] = target[j];
                target[j] = temp;
            }
        }
    }

    return target;
}

// 选择排序函数
int *selection_sort(int *numbers, int count, compare_cb cmp)
{
    int i, j, min_idx;
    int *target = malloc(count * sizeof(int));

    if(!target) die("Memory error.");

    memcpy(target, numbers, count * sizeof(int));

    for (i = 0; i < count - 1; i++) {
        min_idx = i;
        for (j = i + 1; j < count; j++) {
            if (cmp(target[j], target[min_idx]) < 0) {
                min_idx = j;
            }
        }
        if (min_idx != i) {
            int temp = target[min_idx];
            target[min_idx] = target[i];
            target[i] = temp;
        }
    }

    return target;
}

int sorted_order(int a, int b)
{
    return a - b;
}

int reverse_order(int a, int b)
{
    return b - a;
}

int strange_order(int a, int b)
{
    if(a == 0 || b == 0) {
        return 0;
    } else {
        return a % b;
    }
}

// 修改后的 test_sorting 函数，接收任意排序函数和比较回调
void test_sorting(int *numbers, int count, int *(*sort_func)(int *, int, compare_cb), compare_cb cmp)
{
    int i = 0;
    int *sorted = sort_func(numbers, count, cmp);

    if(!sorted) die("Failed to sort as requested.");

    for(i = 0; i < count; i++) {
        printf("%d ", sorted[i]);
    }
    printf("\n");

    free(sorted);
}

int main(int argc, char *argv[])
{
    if(argc < 2) die("USAGE: ex18 4 3 1 5 6");

    int count = argc - 1;
    int i = 0;
    char **inputs = argv + 1;

    int *numbers = malloc(count * sizeof(int));
    if(!numbers) die("Memory error.");

    for(i = 0; i < count; i++) {
        numbers[i] = atoi(inputs[i]);
    }

    // 使用冒泡排序测试
    test_sorting(numbers, count, bubble_sort, sorted_order);
    test_sorting(numbers, count, bubble_sort, reverse_order);
    test_sorting(numbers, count, bubble_sort, strange_order);

    // 使用选择排序测试
    test_sorting(numbers, count, selection_sort, sorted_order);
    test_sorting(numbers, count, selection_sort, reverse_order);
    test_sorting(numbers, count, selection_sort, strange_order);

    free(numbers);

    return 0;
}
