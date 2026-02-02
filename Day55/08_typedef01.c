#include <stdio.h>

//unsigned int형을 'UINT'형으로 다시 선언
typedef unsigned int UINT;

int main(void)
{
    //UINT는 unsigned int 형식과 같다.
    UINT uData = 10;
    printf("%u\n", uData);
    return 0;
}