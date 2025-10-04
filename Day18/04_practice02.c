#include <stdio.h>

int main(void) {
    int total = 0, i = 0;
    while (i < 10) {
        ++i;
        total = total + i;
        printf("%d, %d\n", i, total);
    }
    printf("total : %d\n", total);
    return 0;
}