#include <stdio.h>

int main(void) {
    int nInput = 0, i = 1;
    char buffer[100];
    printf("숫자를 입력하세요. : ");
    fgets(buffer, sizeof(buffer), stdin);
    sscanf(buffer, "%d", &nInput);

    if (2 <= nInput && nInput <= 9) {
        while (i <= 9) {
            printf("%d * %d = %d\n", nInput, i, nInput*i);
            ++i;
        }
    }
    else
        printf("ERROR");

    return 0;
}