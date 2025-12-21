/*
메모리의 주소 두 개를 매개변수로 받아 문자열을 복사(deep copy)하는 함수인
MyStrcpy() 함수를 작성합니다. main() 함수의 코드와 실행결과가 다음과 같을 때,
정상적으로 작동할 수 있도록 구현합니다. 기능적으로 MyStrcpy() 함수는 strcpy()
혹은 strcpy_s() 함수와 같습니다.
*/

#include <stdio.h>

void MyStrcpy(char* dest, int size, char* src)
{
    for (int i = 0; i < size; i++)
    {
        dest[i] = src[i];
    }
}

int main(int argc, char* argv[])
{
    char szBufferSrc[12] = {"TestString"};
    char szBufferDst[12] = {0};

    MyStrcpy(szBufferDst, sizeof(szBufferDst), szBufferSrc);
    puts(szBufferDst);
    return 0;
}