/*
매개변수로 char*의 배열이름과 요소의 개수를 인수로 받아 오름차순으로 문자열을
정리하는 SortString() 함수를 작성하세요. 다음과 같은 main() 함수의 코드에 대한
출력 예를 참고하여 작성합니다.

출력 예:
노홍철
박명수
유재석
정형돈
하하
*/
#include <stdio.h>
#include <string.h>

void SortString(char** arr, int a)
{
    char* tmp;

    for (int i = 0; i<a-1; i++)
        for (int j = i+1; j<a; j++)
        {
            if (strcmp(arr[i], arr[j]) > 0)
            {
                tmp = arr[i];
                arr[i] = arr[j];
                arr[j] = tmp;
            }
        }
}

int main(void)
{
    char* aList[5] = {
        "정형돈",
        "노홍철",
        "하하",
        "유재석",
        "박명수"
    };
    int i = 0;

    SortString(aList, 5);

    for(i=0; i<5; i++)
        puts(aList[i]);
    return 0;
}