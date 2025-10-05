#include <stdio.h>

int main(void) {
    int height = 0;
    char buffer[100];
    
    printf("피라미드의 높이를 결정하세요. : ");
    fgets(buffer, sizeof(buffer), stdin);
    sscanf(buffer, "%d", &height);

    
    for (int i=1; i<=height; i++) {
        for (int j=height; j>i; j--) {
            printf("  ");
        }
        for (int k=1; k<=i; k++) {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}