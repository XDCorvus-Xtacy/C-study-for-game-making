/*
다음 코드에서 배열 szBuffer의 메모리 구조를 그림으로 표현한 후, 예제의
실행결과를 작성합니다. 특히, 세 번쨰와 여섯 번째 printf() 함수의 출력
결과에 대해서는 왜 그런 결과가 출력되었는지 이유를 기술합니다.
*/

#include <stdio.h>
#include <string.h>

int main(void)
{
    char szBuffer[32] = {"You are a girl."};
    char *pszData = szBuffer + 4;
    
    printf("%c\n", szBuffer[0]);
    printf("%c\n", pszData[0]);
    printf("%c\n", pszData[6]);
    
    printf("%s\n", szBuffer + 4);
    printf("%s\n", pszData);
    printf("%s\n", pszData + 4);
    return 0;
}