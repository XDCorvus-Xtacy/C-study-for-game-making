#include <stdio.h>
#include <string.h>

int main(void)
{
    char szBuffer[12] = {"TestString"};
    char *pszData = "TestString";
    
    //다음 코드들은 주소와 상관없이 대상 메모리에 저장된
    //문자열이 같은지 비교한다.
    //만일 길이가 다르면 무조건 같은 문자열이 아니다.
    printf("%d\n", strcmp(szBuffer, pszData));
    printf("%d\n", strcmp("TestString", pszData));
    printf("%d\n", strcmp("Test", "TestString"));
    return 0;
}

/*
질문

1. strcmp() 함수와 memcmp() 함수의 공통점과 차이점
2. 문득 든 궁금증인데 스택 영역과 힙 영역은 다른가?
   즉, 자동변수에 할당되는 메모리와 수동할당되는 메모리가 다른가?
3. strcmp()의 파라미터는 메모리 주소인데, 어떻게 문자열이 들어가는가?
*/