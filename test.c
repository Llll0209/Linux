#include <stdio.h>
#define sum(a, b) a + b  // 宏定义
int main() {
    int num = sum(1, 2);
    printf("num = %d\n", num);
    return 0;
}
