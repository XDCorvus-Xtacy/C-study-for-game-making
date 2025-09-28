#include <stdio.h>

int main(void)
{
    int nMax = 0;
    int a, b, c;
    char buffer[100];

    printf("수 입력(3개) : ");

    fgets(buffer, sizeof(buffer), stdin);
    sscanf(buffer, "%d %d %d", &a, &b, &c);

    nMax = a;
    nMax = nMax >= b ? nMax : b;
    nMax = nMax >= c ? nMax : c;

    printf("MAX : %d\n", nMax);
    return 0;
}