#include <stdio.h>

int main(void)
{
    //int 5개가 한 덩어리인 배열 선언 및 0 초기화
    int aList[5] = { 0 };
    int i = 0;
    char buffer[100];

    //다섯 번 반복해 사용자 입력을 받고 순차적으로 인덱스를
    //증가시켜 각각의 배열요소에 저장한다.
    for (i = 0; i < 5; ++i)
    {
        printf("%d번째 숫자를 입력하세요. : ", i+1);
        fgets(buffer, sizeof(buffer), stdin);
        sscanf(buffer, "%d", &aList[i]);
    }

    for (i = 0; i < 5; ++i)
    {
        printf("%d\n", aList[i]);
    }

    return 0;
}