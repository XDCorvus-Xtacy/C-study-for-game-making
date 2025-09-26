#include <stdio.h>

int main(void)
{
    int nInput = 0, bResult = 0;
    char buffer[100];

    printf("숫자입력 : ");

    fgets(buffer, sizeof(buffer), stdin);
    sscanf(buffer, "%d", &nInput);
    bResult = nInput < 4 || nInput >= 60;
    printf("Result : %d (1:True, 0:False)\n", bResult);
}