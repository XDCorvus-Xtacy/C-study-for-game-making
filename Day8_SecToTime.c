#include <stdio.h>

int main(void)
{
    int h, m, s, first_s;
    char sec[100];

    printf("시간(초)을 입력하세요. : ");
    fgets(sec, sizeof(sec), stdin);
    sscanf(sec, "%d", &first_s);

    s = first_s % 60;
    m = (first_s / 60) % 60;
    h = first_s / 3600;

    printf("%d초는 %02d시간 %02d분 %02d초 입니다.\n", first_s, h, m, s);

    return 0;
}