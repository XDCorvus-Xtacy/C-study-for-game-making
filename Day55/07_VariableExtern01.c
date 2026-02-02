//VariableExtern01.c file

#include <stdio.h>

//(다른 외부 파일에 정의된)함수의 원형 선언
void InitCounter(int nData);
void IncreaseCounter();

//(다른 외부 파일에 정의된)전역변수 선언(정의가 아님에 주의!)
extern int g_nCounter;

void main(void)
{
    InitCounter(10);
    printf("%d\n", g_nCounter);
    IncreaseCounter();
    printf("%d\n", g_nCounter);
}