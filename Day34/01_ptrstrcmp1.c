#include <stdio.h>

int main(void)
{
    char szBuffer[12] = {"TestString"};
    char *pszData = "TestString";
    
    //다음 코드들은 두 문자열이 같은지 비교하는 것이 아니라
    //문자열이 저장된 메모리의 위치가 같은지 비교하는 것이다.
    printf("%d\n", szBuffer == pszData);
    printf("%d\n", "TestString" == pszData);
    printf("%d\n", "DataSString" == "TestString");
    return 0;
}


/*
질문

1. 위 printf()에서 ==는 무슨 연산을 하고 뭐를 반환하지?
2. 위 printf는 주소 비교 결과를 프린트하는 것인데,
   왜 주소가 같은 경우도 존재하는 거지?
*/