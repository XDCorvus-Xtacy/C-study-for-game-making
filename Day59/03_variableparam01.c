#include <stdio.h>
#include <stdarg.h>

int GetMax(int nCount, ...)
{
    int nMax = -9999, nParam = 0, i = 0;
    va_list pList;

    va_start(pList, nCount);
    for (i = 0; i < nCount; ++i)
    {
        nParam = va_arg(pList, int);
        if (nParam > nMax)  nMax = nParam;
    }

    va_end(pList);
    return nMax;
}

int main(void)
{
    printf("MAX: %d\n", GetMax(3, 10, 30, 20));
    printf("MAX: %d\n", GetMax(4, 40, 10, 30, 20));
    printf("MAX: %d\n", GetMax(5, 40, 10, 50, 30, 20));
    return 0;
}