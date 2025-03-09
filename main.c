#include <stdio.h>
#include "calc.h"
int main() {
    double v1 = 3.2, v2 = 8.9;
    printf("Average: %.2f\n", aver(v1, v2));
    printf("Sum: %.2f\n", sum(v1, v2));
    return 0;
}
