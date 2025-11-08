#include <stdio.h>

int GetFee(int Fee, int Age)
{
    //20세 이상
    if (Age >= 20)    return Fee;
    
    //14~19세
    else if (Age>=14 && Age<=19)          return Fee*0.75;
    
    //4~13세
    else if (Age>=4 && Age<=13)          return Fee*0.5;
    
    //0~13세
    else if (Age>=0 && Age<=13)          return 0;
}


int main(void)
{
    int nFee = 0, nAge = 0;
    char buffer[100];
    
    printf("기본 요금을 입력해주세요. : ");
    fgets(buffer, sizeof(buffer), stdin);
    sscanf(buffer, "%d", &nFee);
    
    printf("나이를 입력하세요. : ");
    fgets(buffer, sizeof(buffer), stdin);
    sscanf(buffer, "%d", &nAge);
    
    printf("나이: %d세\t요금: %d원\n", nAge, GetFee(nFee, nAge));
    
    return 0;
}