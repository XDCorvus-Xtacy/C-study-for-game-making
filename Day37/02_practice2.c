/*
문제 3
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
2. malloc()으로 메모리 주소를 할당해놓고 szBuffer 주소로 덮어썼다.
*/