#include <stdio.h>
int main() {
    int arr[10];
    for (int i = 0; i < 10; i++) {
        arr[i] = i;
        #ifdef DEBUG
        printf("arr[%d] = %d ", i, arr[i]);
        #endif
    }
    return 0;
}
