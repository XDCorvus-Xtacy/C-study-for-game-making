/*
함수 호출 규칙

1. __cdecl 
    매개변수 스택 정리: Caller
    매개변수 메모리: Stack

2. __stdcall 
    매개변수 스택 정리: Caller
    매개변수 메모리: Stack

3. __fastcall
    매개변수 스택 정리: Callee
    매개변수 메모리: Stack + Reqister


우리가 자동변수를 선언할 떄 auto를 생략해도 되는 것처럼 __cdecl도 생략 가능
원래의 경우는 아래와 같이 기술할 것
*/

#include <stdio.h>

int __cdecl main(void)
{
    printf("Hello, World\n");
    return 0;
}