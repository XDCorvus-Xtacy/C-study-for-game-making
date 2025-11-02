#include <stdio.h>

int GetData(void)
{
    int nInput = 0;
    printf("정수를 입력하세요. : ");
    scanf("%d", &nInput);
    
    return nInput;
}

int GetMax(int a, int b, int c)
{
    int nMax = a;
    if (nMax < b)   nMax = b;
    if (nMax < c)   nMax = c;
    return nMax;
}

void PrintData(int a, int b, int c, int max)
{
    printf("%d, %d, %d 중 가장 큰 수는 %d 입니다.\n", a, b, c, max);
}

int main(void)
{
    int aList[3] = {0};
    int nMax = -9999, i = 0;
    //입력
    for (i = 0; i < 3; i++)
        aList[i] = GetData();
    //최댓값 계산
    nMax = GetMax(aList[0], aList[1], aList[2]);
    
    //출력
    PrintData(aList[0], aList[1], aList[2], nMax);
    return 0;
}