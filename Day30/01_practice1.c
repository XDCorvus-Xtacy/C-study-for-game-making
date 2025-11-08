#include <stdio.h>

int GetMin(int a, int b, int c, int d)
{
    int nMin = 9999;
    if (nMin > a)   nMin = a;
    if (nMin > b)   nMin = b;
    if (nMin > c)   nMin = c;
    return nMin;
}

int main(void)
{
    int aList[4];
    char buffer[100];
    
    for (int i=0; i<4; i++)
    {
        printf("%d번째 수를 입력하세요. : ", i+1);
        fgets(buffer, sizeof(buffer), stdin);
        sscanf(buffer, "%d", &aList[i]);
    }
    
    printf("MIN: %d\n", GetMin(aList[0], aList[1], aList[2], aList[3]));
    
    return 0;
}