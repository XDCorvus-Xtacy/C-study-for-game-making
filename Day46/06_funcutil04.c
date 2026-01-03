#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main()
{
    int i = 0;
    srand((unsigned)time(NULL));

    for(i=0; i<10; i++)
        printf("%6d\n", rand());        //0~RAND_MAX(231-1)까지 난수 발생

    for(i=0; i<10; i++)
        printf("%6d\n", rand() % 10);   //0~9까지 난수 발생
}