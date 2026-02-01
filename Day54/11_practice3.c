/*
현재 경로에서 'TestFile.txt' 텍스트 파일을 연 후, 원본 파일에서 행 단위로 문자열을
읽어 들여 대상 파일에 복사하는 프로그램을 작성하세요. 단, 대상 파일도 현재 경로에 생성
하며, 파일명은 'DstFile.txt'로 합니다.
*/

#include <stdio.h>

void main()
{
    FILE *fp = NULL;
    FILE *Dfp = NULL;
    char szBuffer[512];

    fp = fopen("TestFile.txt", "w");
    if (fp == NULL)     return;

    fputs("Hello World!\nTest string\nData\n", fp);
    fclose(fp);

    fp = fopen("TestFile.txt", "r");
    Dfp = fopen("DstFile.txt", "w");
    if (fp == NULL || Dfp == NULL)  return;

    while (fgets(szBuffer, sizeof(szBuffer), fp))
    {
        fputs(szBuffer, Dfp);
    }

    fclose(fp);
    fclose(Dfp);
}