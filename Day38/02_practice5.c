/*
문제 6
정수를 입력받고, 그 개수만큼 char*를 여러 개 저장할 수 있는 메모리를 동적 할당합니다.
그리고 입력할 문자열의 최대 길이를 입력받고, 최대 길이의 문자열을 저장할 수 있는 크기
의 메모리를 동적 할당하여 입력받은 문자열을 저장한 후 출력하는 프로그램을 작성합니다.
이해를 돕기 위해 메모리의 구조를 그림으로 표현하면 다음과 같습니다.

       / char* ->  Test string!
char** - char* ->  Hong gil-dong
       \ char* ->  Choi ho-sung

이 그림에 대해서 설명한다면, 최초 사용자는 3을 입력했고 총 세 번의 문자열을 입력합니다.
그리고 가장 긴 문자열의 길이는 12입니다.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    int num = 0;
    int len = 0;
    char buffer[100];

    // 문자열 개수 입력
    printf("Input Number: ");
    fgets(buffer, sizeof(buffer), stdin);
    sscanf(buffer, "%d", &num);

    // char* 배열 동적 할당 (num개의 문자열 저장)
    char **pszBuffer = malloc(sizeof(char*) * num);

    // 최대 문자열 길이 입력
    printf("Input String Length: ");
    fgets(buffer, sizeof(buffer), stdin);
    sscanf(buffer, "%d", &len);

    // 문자열 입력
    for (int i = 0; i < num; i++)
    {
        printf("%d번째 단어 입력: ", i + 1);
        fgets(buffer, sizeof(buffer), stdin);
        buffer[strcspn(buffer, "\n")] = '\0';  // '\n' 제거

        // 문자열 하나 저장할 공간 동적 할당
        pszBuffer[i] = malloc(len + 1);

        // 안전하게 복사
        strncpy(pszBuffer[i], buffer, len);
        pszBuffer[i][len] = '\0';  // 혹시 잘린 경우 대비
    }

    // 출력
    for (int i = 0; i < num; i++)
        printf("%s\n", pszBuffer[i]);

    // 메모리 해제
    for (int i = 0; i < num; i++)
        free(pszBuffer[i]);
    free(pszBuffer);

    return 0;
}