/*
오늘을 기준으로 10일 후와 100일 후의 날짜를 계산하여 출력하는 프로그램을
작성하세요.
*/

#include <stdio.h>
#include <time.h>

#define DAY (60 * 60 * 24)

int main(void)
{
    time_t now = time(NULL);

    time_t after_10 = now + 10 * DAY;
    time_t after_100 = now + 100 * DAY;

    printf("오늘 날짜:\n%s\n", ctime(&now));
    printf("10일 후:\n%s\n", ctime(&after_10));
    printf("100일 후:\n%s\n", ctime(&after_100));

    return 0;
}