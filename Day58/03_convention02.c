/*
__cdecl 호출 규칙은 매개변수를 오른쪽부터 스택에 Push한다.
또한 매개변수로 인해 증가한 스택을 호출자 함수가 본래 크기로 줄인다.
아래 예제를 디스어셈블리 화면을 확인하면 GetMax() 함수를 호출하는 부분에서
오른쪽 인수 3부터 스택에 Push하는 것을 확인할 수 있다.

그리고 call 연산으로 GetMax 함수를 호출한 후 이 함수가 반환하면 main 함수
내부에서는 add esp, 0Ch라는 연산을 수행한다. 여기서 '0Ch'는 0x0C, 즉 10진수 
12를 의미하며, esp(extended stack pointer)는 스택 메모리에 대한 '포인터'이다.
이 주소에 대해 ADD 연산을 수행하면 주소는 증가한다.
즉, 여기서는 12바이트만큼 증가한다. (=esp + 0Ch)

주소가 증가했다는 것은 스택의 감소를 의미한다. 즉, main() 함수에 들어가는,
이 한 줄의 코드로 스택은 GetMax() 함수 호출 전 상태로 복원된다.

이것 때문에 자동변수 메모리가 자동으로 관리된다고 말하는 것이다.
*/

#include <stdio.h>

int __cdecl GetMax(int a, int b, int c)
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