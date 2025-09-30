#include <stdio.h>

int main(void)
{
    int nAge = 0;
    double cost = 1000;
    double bill = 0;
    char buffer[100];

    printf("나이를 입력하세요. :");
    fgets(buffer, sizeof(buffer), stdin);
    sscanf(buffer, "%d", &nAge);

    if (nAge < 20)
    {
        if (nAge >= 14) bill = cost*0.75;
        else
        {
            if (nAge >= 4) bill = cost*0.5;
        }
    }
    else bill = cost;
    
    printf("나이: %d세, 요금: %.0f원\n", nAge, bill);
    return 0;
}