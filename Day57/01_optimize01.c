/*
릴리즈 모드로 빌드하고 디버그 모드로 실행한 뒤, 디스어셈블리 창으로 번역상태를
확인하면 Add() 함수는 번역 조차 하지 않는다.
컴파일러가 이와 같이 최적화할 수 있었던 이유는 Add() 함수의 매개변수를
'상수'로 기술했기 때문이다.
*/

#include <stdio.h>

int Add(int a, int b)
{
    int nResult = 0;
    nResult = a + b;
    return nResult;
}

int main(void)
{
    int nResult = 0;
    nResult = Add(3, 4);
    printf("%d\n", nResult);
    return 0;
}
