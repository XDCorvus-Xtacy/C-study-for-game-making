/*
릴리즈 모드로 빌드하면 두 함수는 모두 인라인 처리된다.
하지만 프로젝트 속성을 '__inline만 확장'으로 변경한 후 빌드해 실행하고
디스어셈블리 화면을 확인하면 NewAdd() 함수는 인라인 처리가 되지만
Add() 함수는 일반 함수로 번역된다.
*/

#include <stdio.h>

int Add(int a, int b)
{
    return a + b;
}

__inline int NewAdd(int a, int b)
{
    return a + b;
}

int main(void)
{
    printf("%d\n", Add(3, 4));
    printf("%d\n", NewAdd(3, 4));
    return 0;
}