#include <stdio.h>
//_msize() 함수를 위한 헤더 포함
// window -> _msize()
// Linux, UNIX -> malloc_usable_size()
#include <malloc.h>
#include <string.h>

int main(void)
{
    char *pszBuffer = NULL, *pszNewBuffer = NULL;
    
    //12바이트 메모리를 동적할당한 후
    pszBuffer = (char*)malloc(12);
    //NULL 문자를 포함해 영문 11자를 저장한다.
    sprintf(pszBuffer, "%s", "TestString");
    //동적할 메모리의 주소, 크기, 저장된 문자열 등을 출력한다.
    printf("[%p] %d %s\n",
        pszBuffer, malloc_usable_size(pszBuffer), pszBuffer);
        
    //12바이트의 메모리를 32바이트로 '확장'을 시도한다.
    pszNewBuffer = (char*)realloc(pszBuffer, 32);
    if (pszNewBuffer == NULL)
        free(pszBuffer);
        
    //문자열을 덮어쓰고 주소, 메모리 크기, 저장된 내용을 확인한다.
    sprintf(pszNewBuffer, "%s", "TestStringData");
    printf("[%p] %d %s\n",
        pszNewBuffer, malloc_usable_size(pszNewBuffer), pszNewBuffer);
        
    free(pszNewBuffer);
    return 0;
}