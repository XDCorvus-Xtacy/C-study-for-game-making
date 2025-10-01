#include <stdio.h>

int main(void)
{
    double cost = 1000;
    int nAge = 0;
    int rate = 0;
    char buffer[100];
    printf("나이를 입력하세요. : ");
    fgets(buffer, sizeof(buffer), stdin);
    sscanf(buffer, "%d", &nAge);

    //각 나이별 할인율 적용
    if (nAge >= 65)
        rate = 0;
    else if (nAge >=20)
        rate = 1;
    else if (nAge >= 14)
        rate = 0.75;
    else if (nAge >= 4)
        rate = 0.5;
    else if (nAge >= 0)
        rate = 1;

    //가격 산출
    printf("나이: %d세,  요금: %.0f원\n", nAge, cost*rate);

    return 0;
}