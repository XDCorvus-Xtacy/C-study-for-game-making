/*
문제 2
매개변수로 char*형 자료를 받아서 문자열의 길이를 계산해 반환하는 함수를
작성하세요. 함수의 이름은 GetLength()로 합니다.
*/

#include <stdio.h>

int GetLength(char* ch)
{
    int nLength = 0;
    
    //문자열 수 계산
    while (ch[nLength] != '\0')
        ++nLength;

    return nLength;
}

int main(void)
{
    char szBuffer[100];
    char* pszBuffer = szBuffer;

    //사용자로부터 문자열 입력받기
    printf("문자열을 입력하세요. : ");
    fgets(szBuffer, sizeof(szBuffer), stdin);

    //입력된 줄바꿈 문자 제거
    szBuffer[strcspn(szBuffer, "\n")] = '\0';

    //결과 출력
    printf("Input: %s\nLength: %d\n", szBuffer, GetLength(pszBuffer));

    return 0;
}
