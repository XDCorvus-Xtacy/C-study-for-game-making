#include <stdio.h>

int main(void)
{
    int nInput = 0, bResult = 0;
    char buffer[100];

    printf("숫자 입력 : ");

    fgets(buffer, sizeof(buffer), stdin);
    sscanf(buffer, "%d", &nInput);
    bResult = nInput > 3 && nInput < 20;
    printf("Result : %d (1:True, 0:False)\n", bResult);
    return 0;
}