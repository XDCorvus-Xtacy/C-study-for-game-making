#include <stdio.h>

int main(void)
{
    int nInput, nTotal = 0;
    char buffer[100];

    for (int i = 0; i < 3; i++){
        printf("%d번째 숫자 입력 : ", i + 1);
        fgets(buffer, sizeof(buffer), stdin);
        sscanf(buffer, "%d", &nInput);
        nTotal += nInput;
    }

    printf("Total : %d\n", nTotal);
    return 0;
}