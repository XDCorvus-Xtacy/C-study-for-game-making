/*
문제 5
사용자로부터 입력받은 첫 번째 문자열을 동적 할당된 메모리에 저장한 후 화면에 출력하고,
두 번째로 입력받은 문자열을 첫 번째로 동적 할당된 메모리에 덧붙여 출력하는 프로그램을
작성합니다. 이때, 메모리가 부족해서 문제가 발생하지 않도록 메모리의 크기를 조정합니다.
기존에 할당받은 메모리의 크기를 늘려도 좋고 다시 할당받아도 좋습니다. 혹은 두 경우를
모두 구현하는 것도 좋습니다.

출력 예:
    입력: HelloWorld
    출력: HelloWorld
    입력: TestString
    출력: HelloWorldTestString
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
    char szBuffer[100];

    //첫 문자열 Input
    printf("Input: ");
    fgets(szBuffer, sizeof(szBuffer), stdin);
    szBuffer[strcspn(szBuffer, "\n")] = '\0';

    //길이 계산 + 동적 할당
    int len1 = strlen(szBuffer);
    char *pszBuffer = malloc(sizeof(char)*(len1+1));
    strcpy(pszBuffer, szBuffer);

    printf("%s\n", pszBuffer);

    //다음 문자열 Input
    printf("Input : ");
    fgets(szBuffer, sizeof(szBuffer), stdin);
    szBuffer[strcspn(szBuffer, "\n")] = '\0';

    int len2 = strlen(szBuffer);

    //메모리 재할당
    pszBuffer = realloc(pszBuffer, sizeof(char)*(len1 + len2 + 1));

    //이어붙이기
    strcpy(pszBuffer + len1, szBuffer);
    
    printf("%s\n", pszBuffer);

    free(pszBuffer);

    return 0;
}
