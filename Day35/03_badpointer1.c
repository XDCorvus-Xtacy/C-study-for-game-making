#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char *pszBuffer = NULL;
    
    pszBuffer = (char*)malloc(12);
    printf("입력: ");
    fgets(pszBuffer, 12, stdin);  //오버플로우를 방지하기 위해 gets_s(), fgets() 사용할 것
    puts(pszBuffer);
    
    //오류 확인을 위해 의도적으로 해제하지 않음
    free(pszBuffer);  //free를 동작하게 될 경우 오류 메세지 발생
    return 0;
}

/*
질문

1. get() 함수에 대해서
2. puts() 함수에 대해서
3. 문자열은 마지막에 ￦0이 저장되는데, 이것도 메모리에 포함되는가?
*/