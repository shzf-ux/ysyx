#include <stdio.h>
#include <string.h>

// 定义结构体，name改为固定大小的字符数组
struct Person {
    char name[100];
    int age;
    int height;
    int weight;
};

// 打印函数直接接收结构体副本，使用点操作符访问成员
void Person_print(struct Person who) {
    printf("Name: %s\n", who.name);
    printf("\tAge: %d\n", who.age);
    printf("\tHeight: %d\n", who.height);
    printf("\tWeight: %d\n", who.weight);
}

int main(int argc, char *argv[]) {
    struct Person joe;
    strncpy(joe.name, "Joe Alex", sizeof(joe.name));
    joe.age = 32;
    joe.height = 64;
    joe.weight = 140;

    struct Person frank;
    strncpy(frank.name, "Frank Blank", sizeof(frank.name));
    frank.age = 20;
    frank.height = 72;
    frank.weight = 180;

    printf("Joe:\n");
    Person_print(joe);
    printf("Frank:\n");
    Person_print(frank);

    // 修改年龄等信息
    joe.age += 20;
    joe.height -= 2;
    joe.weight += 40;

    frank.age += 20;
    frank.weight += 20;

    // 打印更新后的信息
    printf("Updated Joe:\n");
    Person_print(joe);
    printf("Updated Frank:\n");
    Person_print(frank);

    return 0;
}
