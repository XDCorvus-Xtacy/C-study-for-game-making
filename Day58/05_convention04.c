/*
3. __fastcall

__stdcall처럼 매개변수는 오른쪽부터 스택에 Push하고 피호출자 함수가 스택을
정리한다. 단, 매개변수가 여러 개면 가장 나중에 Push되어야 할 왼쪽 첫 번째,
두 번째 매개변수는 스택 대신 CPU의 레지스터(EDX, ECX)를 이용해 전달한다.
따라서 매개변수가 메모리에 복사되는 횟수를 줄이고 그 때문에 연산 속도가 일부
상향될 수 있다.

아래 예제를 디스어셈블리 화면으로 보면 왼쪽 첫 번째, 두 번째 인수인 1, 2는
각각 ECX. EDX 레지스터로 전달되고 오른쪽 첫 번째인 3은 스택에 Push 된다.
그리고 스택을 정리하는 코드는 보이지 않는다.
*/

#include <stdio.h>

int __fastcall GetMax(int a, int b, int c)
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