/*
전역변수와 식별자 검색 순서

1. 전역변수
- 전역변수의 이름 앞에는 'g_'처럼 전치사를 붙이는 것이 좋다.

2. 식별자 검색 순서
    1. 가장 최근에 형성된 블록 스코프에 속한 지역변수
    2. 현재 블록 스코프의 외부를 감싸고 있는 상위 스코프(최대 함수 몸체까지 검색)
    3. 파일 스코프(전역변수)
*/

#include <stdio.h>

//전역변수 nInput의 선언 및 정의
int nInput = 100;

void TestFunc(void)
{
    //전역변수 nInput의 값을 출력
    printf("TestFunc() : %d\n", nInput);
}

int main(void)
{
    //전역변수와는 다른 지역변수 nInput 변수 선언 및 정의
    int nInput = 0;
    printf("%d\n", nInput);
    {
        //전역변수 및 앞서 선언한 nInput과도 다른 nInput 변수 선언 및 정의
        int nInput = 20;
        printf("%d\n", nInput);
    }
    TestFunc();
    return 0;
}