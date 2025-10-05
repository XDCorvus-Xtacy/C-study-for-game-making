#include <stdio.h>

int main(void) {
    int height = 0;
    char buffer[100];

    printf("피라미드 높이를 입력하세요. : ");
    fgets(buffer, sizeof(buffer), stdin);
    sscanf(buffer, "%d", &height);

    /*
    x축의 개수 : n층 -> 2n-1칸
    */

    for (int i=1; i<=height; i++) {
        for (int j=height; j>i; j--) {
            printf("  ");
        }
        for (int k=2*i-1; k>0; k--) {
            printf("* ");
        }

        printf("\n");
    }

    return 0;
}