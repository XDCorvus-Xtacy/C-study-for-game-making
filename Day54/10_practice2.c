/*
현재 경로에서 'TestFile.txt' 텍스트 파일을 연 후, 사용자가 입력한 문자열을 뒤에 이어서
추가한 후 다시 저장하는 프로그램을 작성하세요.
*/

#include <stdio.h>

void main()
{
    FILE *fp = NULL;
    char szBuffer[512];

    fp = fopen("TestFile.txt", "a");
    if (fp == NULL)     return;
    
    printf("Input text: ");
    fgets(szBuffer, sizeof(szBuffer), stdin);

    fputs(szBuffer, fp);
    fclose(fp);
}