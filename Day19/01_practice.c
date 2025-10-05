#include <stdio.h>

int main(void) {
    int i = 0, j = 0, k = 0;
    
    for (i=1; i<=5; i++) {
        for (j=4; j>=i; j--) {
            printf("  ");
        }

        for (k=1; k<=i; k++) {
            printf("* ");
        }

        putchar('\n');
    }

    return 0;
}