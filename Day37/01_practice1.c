/*
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

/*
질문

1. szBuffer를 fgets()로 받게 되면 /n도 szBuffer에 저장되는데, 
/0으로 바꾸려면 어떤 방법을 써야하지?
2. szBuffer 사이즈를 100으로 지정했는데, fgets로 입력을 받으면 나머지 빈 공간은
0으로 채워지게 되나? 예를 들면 Hello world를 입력한다면
Hello World\00000000... 이렇게 저장되는 건가?
3. 이 문제를 더 깔끔하고 최적화된 코드로 수정하려면 어떻게 해야하는가?
*/