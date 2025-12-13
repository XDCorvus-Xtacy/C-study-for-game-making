/*
입력
How many strings? 3
Max length? 20
Input #1: Hello
Input #2: World
Input #3: Test

출력
[Result]
HelloWorldTest


**반드시 지켜야 할 조건

1. char** 구조를 사용할 것. 문자열 목록은 char** 로 관리
2. 문자열 저장은 동적 할당
3. 최종 결과 문자열도 동적 할당
4. 문자열을 합칠 때 strcpy, strcat 사용 금지. 직접 문자 단위로 복사할 것
5. 최종 문자열 크기는 realloc을 사용하여 확장할 것
6. 모든 동적 메모리는 free로 해제할 것
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int GetNumber(void)
{
    int num = 0;
    char buffer[100];

    if (fgets(buffer, sizeof(buffer), stdin) == NULL)
        return -1;

    if (sscanf(buffer, "%d", &num) != 1)
        return -1;

    return num;
}

int main(void)
{
    int num = 0;
    int len = 0;
    char szBuffer[100];

    printf("How many string? ");
    num = GetNumber();
    printf("Max Length? ");
    len = GetNumber();

    char* *pszBuffer = malloc(sizeof(char*)*num);

    for (int i=0; i<num; i++)
    {
        pszBuffer[i] = malloc(len + 1);

        printf("Input #%d ", i+1);
        fgets(szBuffer, sizeof(szBuffer), stdin);
        szBuffer[strcspn(szBuffer, "\n")] = '\0';

        strcpy(pszBuffer[i], szBuffer);
    }

    char* merged_string = malloc(strlen(pszBuffer[0]));
    strcpy(merged_string, pszBuffer[0]);
    int merged_len = strlen(pszBuffer[0]);

    for (int i=1; i<num; i++)
    {
        merged_string = realloc(
            merged_string, merged_len + strlen(pszBuffer[i]) + 1);

        for (int j=0; j<strlen(pszBuffer[i]); j++)
        {
            merged_string[merged_len + j] = pszBuffer[i][j];
        }

        merged_string[strlen(merged_string)] = '\0';
        merged_len += strlen(pszBuffer[i]);
    }

    printf("\n[Result]\n%s\n", merged_string);

    for (int i=0; i<num; i++)
        free(pszBuffer[i]);

    free(pszBuffer);
    free(merged_string);

    return 0;
}

/*
질문
1. strcpy()의 역할은 무엇이지? 어떻게 동작하는 함수이지?
2. strcspn은 무엇의 줄임말이지?
3. realloc()을 하기 전에 무조건 malloc()이 선행되어야 하나?
4. char* merged_string = malloc(strlen(pszBuffer[0]));
merged_string = pszBuffer[0];
이런 식으로 코드를 작성하면 안 되나? 안 된다면 이런 식으로 작성하면 안 되는 이유를 설명해줘
5. 
*/