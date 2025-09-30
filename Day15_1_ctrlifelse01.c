#include <stdio.h>

int main(void)
{
    int nInput = 0, nSelect = 0;
    char buffer[100];

    fgets(buffer, sizeof(buffer), stdin);
    sscanf(buffer, "%d", &nInput);

    //nSelect = nInput <= 10 ? 10 : 20;
    //삼항 연산자를 이용한 것과 동일한 구조의 if else문
    if (nInput <= 10)
    {
        nSelect = 10;   //조건식이 참인 경우
    }
    else
    {
        nSelect = 20;   //조건식이 거짓인 경우
    }
    
    printf("%d\n", nSelect);
    return 0;
}