#include <stdio.h>
/*
주어진 배열의 각 행의 합과 열의 합을 구하고 총합을 [3][4]에
넣는 프로그램을 작성
*/

int main(void)
{
    int aList[3][4] = {
        {10, 20, 30},
        {40, 50, 60},
    };
    int i = 0, j = 0;

    //이 이하에 작성하시오
    for (i = 0; i < 2; ++i)
    {
        for (j = 0; j < 3; ++j)
        {
            aList[i][3] += aList[i][j];
        }
    }

    for (j = 0; j < 4; ++j)
    {
        for (i = 0; i < 2; ++i)
        {
            aList[2][j] += aList[i][j];
        }
    }

    for (i = 0; i < 3; ++i)
    {
        for (j = 0; j < 4; ++j)
            printf("%d\t", aList[i][j]);

        putchar('\n');
    }

    return 0;
}