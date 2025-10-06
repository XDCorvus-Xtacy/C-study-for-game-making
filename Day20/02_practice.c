#include <stdio.h>

/*
다음과 같이 '*'을 출력하는 프로그램을 작성하세요

        *
      *   *
    *   *   *
  *   *   *   *
*   *   *   *   *

*/

int main(void)
{
    int height = 0;
    char buffer[100];

    printf("피라미드의 높이 입력 : ");
    fgets(buffer, sizeof(buffer), stdin);
    sscanf(buffer, "%d", &height);

    for (int i=1; i<=height; i++)       //layer 구성
    {
        for (int j=1; j<=height; j++)
        {
            // 공백과 별의 출력 개수의 합은 height임
            // 따라서 총 반복횟수인 height에서 i(별의 개수)를 뺀 나머지 수는
            // 공백이어야함
            // j의 수가 커지면서 공백으로 채우다가 분기점인 
            // i + j = height 이후부터는 *이 찍혀야함
            if (i+j > height)  printf("*   ");  //공백이 채워지고나서는 별을 찍는다.
            else                printf("  ");   //채워지기 전에는 공백을 출력한다.
        }
        printf("\n");
    }

    return 0;
}