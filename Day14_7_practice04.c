#include <stdio.h>

int main(void)
{
    double cost = 1000;
    int nAge = 0;
    char buffer[100];

    printf("나이를 입력해주세요. : ");
    fgets(buffer, sizeof(buffer), stdin);
    sscanf(buffer, "%d\n", &nAge);

    if (nAge < 20)
    {
        printf("나이: %d세, 요금: %.0f원\n", nAge, cost*0.75);
    }
    else
    {
        printf("나이: %d세, 요금: %.0f원\n", nAge, cost);
    }

    return 0;
}