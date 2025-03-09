#include <stdio.h>
#include <stdlib.h>
char buff[256];
char *string;
int main() {
    printf("Input a string: ");
    gets(string);  // 错误：string未初始化
    printf("Your string: %s\n", string);
    return 0;
}
