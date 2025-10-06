#include <stdio.h>

/*
다음 코드를 실행하세요.
*/

int main(void)
{
    int i = 0;

    for (i = 0; i < 10; ++i)
    {
        if (i > 4)
            continue;
        
        printf("%dth\n", i);
    }

    printf("END: i == %d\n", i);
    return 0;
}