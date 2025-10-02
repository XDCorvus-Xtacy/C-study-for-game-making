#include <stdio.h>

int main(void) {
    int nInput = 0;
    char ch = 0;
    char buffer[100];
    printf("숫자를 입력하세요. : ");
    fgets(buffer, sizeof(buffer), stdin);
    sscanf(buffer, "%d", &nInput);

    if (nInput > 9)
        nInput = 9;
    else if (nInput < 0)
        nInput = 0;

    while (nInput != 0) {
        printf("*");
        nInput--;
    }

    printf("\n");

    return 0;
}