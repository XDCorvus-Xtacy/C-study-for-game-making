#include <stdio.h>

int main(void)
{
    int aList[5] = {0};
    char buffer[100];

    //숫자 입력
    for (int i=0; i<5; ++i)
    {
        printf("%d번째 수를 입력하세요. : ", i+1);
        fgets(buffer, sizeof(buffer), stdin);
        sscanf(buffer, "%d", &aList[i]);
    }

    //최소값과 최댓값 출력
    int min = 9999, max = 0;

    for (int i=0; i<5; ++i)
    {
        if (max < aList[i])     max = aList[i];
        if (min > aList[i])     min = aList[i];
    }
    printf("MIN: %d, MAX: %d\n", min, max);
    return 0;
}