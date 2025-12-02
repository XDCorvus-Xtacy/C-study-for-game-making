/*
다음 코드의 논리적 오류 두 가지는 무엇이고 어떻게 수정해야 하는지 기술하세요

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char szBuffer[12] = {"HelloWorld"};
    char *pszData = NULL;

    pszData = (char*)malloc(sizeof(char)*12);
    pszData = szBuffer;
    puts(pszData);
    return 0;
}
*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char szBuffer[12] = {"HelloWorld"};
    char *pszData = NULL;

    pszData = (char*)malloc(sizeof(char)*12);
    strcpy(pszData, szBuffer);
    puts(pszData);
    free(pszData);
    return 0;
}

/*
정답
1. free로 메모리 할당을 해제하지 않았다
2.
*/

/*
질문

1. strcspn() 함수의 정의, 인자, 사용법 등 이 함수에 대해서 설명해줘
2. malloc() 함수의 정의, 인자, 사용법 등 이 함수에 대해서 설명해줘
3. 나머지 하나의 정답을 알려줘
*/