#include <stdio.h>

int main(void)
{
    int x = 0;
    char buf[100];

    printf("숫자 입력 : ");
    fgets(buf, sizeof(buf), stdin);
    sscanf(buf, "%d", &x);

    //int / int는 int이므로 소수점 이하는 버려지고 출력된다.
    printf("몫 : %d\n", x / 3);
    //몫은 버리고 나머지(int)만 출력한다.
    printf("나머지 : %d\n", x % 3);
    return 0;
}