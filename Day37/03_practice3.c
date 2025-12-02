/*
문제4
인터넷에서 strrev() 함수의 사용방법에 대해 찾아보고 이 함수와 동일한 기능을
수행할 수 있는 MyStrrev() 함수를 작성하세요
*/

#include <stdio.h>
#include <stdlib.h>

int GetLength(char* ch)
{
    int nLength = 0;
    while (ch[nLength] != '\0')  // '\n' 사용하면 안 됨
    {
        ++nLength;
    }
    return nLength;
}

char* MyStrrev(char* str)
{
    int Len = GetLength(str);
    char *szBuffer = malloc(Len + 1);

    for(int i = 0; i < Len; ++i)
        szBuffer[i] = str[Len - (i + 1)];

    szBuffer[Len] = '\0';  // 문자열 끝 표시
    return szBuffer;
}

int main(void)
{
    char Buffer[100];

    printf("Input: ");
    fgets(Buffer, sizeof(Buffer), stdin);

    // '\n' 제거
    int len = GetLength(Buffer);
    if (len > 0 && Buffer[len - 1] == '\n')
        Buffer[len - 1] = '\0';

    char *p = MyStrrev(Buffer);
    printf("reverse: %s\n", p);

    free(p);
    return 0;
}