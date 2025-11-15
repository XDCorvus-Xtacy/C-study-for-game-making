#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char szBuffer[12] = {"HelloWorld"};
    char *pszData = NULL;
    
    pszData = (char*)malloc(sizeof(char)*12);
    // 2번 결함: pszData = szBuffer;    => 단지 주소를 대입한 것
    memcpy(pszData, szBuffer, sizeof(szBuffer));
    // or strcpy(pszData, szBuffer);
    // window -> strcpy_s()
    // UNIX, Linux -> strncpy()
    
    puts(pszData);
    
    free(pszData);  // 1번 결함 보완
    return 0;
}