/*
How many strings? 3
Max length? 20
Input #1: Apple
Input #2: Pineapple
Input #3: Melon

[All strings]
Apple
Pineapple
Melon

[Longest string]
Pineapple
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int GetNumber(void)
{
    int num = 0;
    char buffer[100];

    fgets(buffer, sizeof(buffer), stdin);
    sscanf(buffer, "%d", &num);

    return num;
}

int main(void)
{
    int num = 0;
    int len = 0;
    int szBuffer[100];

    printf("How many string? ");
    num = GetNumber();
    printf("Max length? ");
    len = GetNumber();

    char* *pszBuffer = malloc(sizeof(char*) * num);

    for (int i=0; i<num; i++)
    {
        printf("Input #%d: ", i+1);
        fgets(szBuffer, sizeof(szBuffer), stdin);
        szBuffer[strcspn(szBuffer, "\n")] = '\0';

        pszBuffer[i] = malloc(strlen(szBuffer) + 1);
        strcpy(pszBuffer[i], szBuffer);
    }

    printf("\n\n[All strings]\n");
    for (int i=0; i<num; i++)
        printf("%s", pszBuffer[i]);

    int max_length = 0;
    int max_index = 0;
    for (int i=0; i<num; i++)
    {
        int len = 0;
        len = strlen(pszBuffer[i]);
        if (len > max_length)   
        {
            max_length = len;
            max_index = i;
        }
    }

    printf("\n[Longest string]\n%s\n", pszBuffer[max_index]);

    return 0;
}

/*
해결하지 못 한 부분
1. 문자열 길이가 같은 경우에의 출력 문제
2. 문자열 개수와 길이의 입력을 받을 때 만약 숫자가 입력되지 않고 문자만 입력됐을 경우의 문제
*/