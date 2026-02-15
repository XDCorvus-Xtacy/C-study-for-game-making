/*
2. __stdcall

__stdcall 호출 규칙도 __cdecl 호출 규칙처럼 매개변수를 오른쪽부터 스택에 
push한다. 그러나 매개변수로 인해 증가한 스택을 호출자 함수가 정리하는 것이 아니라 
피호출자 함수가 정리한다.

아래 코드를 디스어셈블리로 확인하면 GetMax() 함수를 호출한 이후로
mov dword ptr [nResult],eax라는 연산이 수행된다.
이는 GetMax() 함수가 반환한 값을 nResult에 대입하는 C 코드에 대한 어셈블리
코드이다. CALL 연산과 MOV 연산 사이에 스택을 정리하는 코드는 보이지 않는다.
GetMax() 함수 내부에서 정리하기 때문이다.
*/

#include <stdio.h>

int __stdcall GetMax(int a, int b, int c)
{
    int nMax = a;
    if (b > nMax)   nMax = b;
    if (c > nMax)   nMax = c;
    return nMax;
}

int __cdecl main(void)
{
    int nResult = 0;
    nResult = GetMax(1, 2, 3);
    return 0;
}