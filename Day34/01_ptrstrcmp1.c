#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char *pszBuffer = NULL;
    
    pszBuffer = (char*)malloc(12);
    printf("입력: ");
    //gets(pszBuffer);  //오버플로우를 방지하기 위해 gets_s(), fgets() 사용할 것
    fgets(pszBuffer, 12, stdin);
    puts(pszBuffer);
    
    //오류 확인을 위해 의도적으로 해제하지 않음
    free(pszBuffer);  //free를 동작하게 될 경우 오류 메세지 발생
    return 0;
}

