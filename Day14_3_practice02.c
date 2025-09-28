#include <stdio.h>

int main(void)
{
    int nMax = -9999, nInput = 0;
    char buffer[100];

    printf("수 입력 : ");

    fgets(buffer, sizeof(buffer), stdin);
    sscanf(buffer, "%d", &nInput);
    nMax = nInput > nMax ? nInput : nMax;

    fgets(buffer, sizeof(buffer), stdin);
    sscanf(buffer, "%d", &nInput);
    nMax = nInput > nMax ? nInput : nMax;


    fgets(buffer, sizeof(buffer), stdin);
    sscanf(buffer, "%d", &nInput);
    nMax = nInput > nMax ? nInput : nMax;

    printf("MAX : %d\n", nMax);

    return 0;
}