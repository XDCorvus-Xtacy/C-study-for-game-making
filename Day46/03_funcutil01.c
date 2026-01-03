#include <stdio.h>
#include <stdlib.h>

void main(void)
{
    char szBuffer[32];
    int nResult = 0;

    printf("Input string: ");
    fgets(szBuffer, sizeof(szBuffer), stdin);

    nResult = atoi(szBuffer);
    printf("%d\n", nResult);
}