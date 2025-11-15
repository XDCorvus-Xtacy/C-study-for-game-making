#include <stdio.h>
#include <string.h>

int main(void)
{
    char szBuffer[12] = {"TestString"};
    char *pszData = "TestString";
    
    //두 메모리에 저장된 값이 같은 경우
    printf("%d\n", memcmp(szBuffer, pszData, 10));
    
    //왼쪽("teststring")이 더 큰 경우
    printf("%d\n", memcmp("teststring", pszData, 10));
    
    //오른쪽(pszData)이 더 큰 경우
    printf("%d\n", memcmp("DataString", pszData, 10));
    return 0;
}

/*
질문

1. memcmp()가 메모리의 크기를 비교하는 방법
2. memcmp()의 역할이 정확이 무엇이고 언제 사용하는지
*/