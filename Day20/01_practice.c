#include <stdio.h>

/*
1-100까지의 숫자 중에서 4의 배수가 몇 개이며, 
이들의 총합이 얼마인지 계산해 출력하는 프로그램을 작성하세요.
*/


int main(void)
{
    int cnt = 0, sum = 0, start = 0, end = 0;
    char buffer[100];

    printf("숫자 범위 입력(띄어쓰기로 구분 ex. 10 20, 1 100 ...) : ");
    fgets(buffer, sizeof(buffer), stdin);
    sscanf(buffer, "%d %d", &start, &end);

    for (int i = start; i <= end; i++)
    {
        int remainder = i%4;

        if (remainder == 0)
        {
            sum += i;
            cnt += 1;
            printf("i : %d, cnt : %d, sum : %d\n", i, cnt, sum);
        }
    }

    printf("\n\n");
    printf("개수 : %d, 총합 : %d\n", cnt, sum);
    
    return 0;
}