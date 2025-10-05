#include <stdio.h>

int main(void) {
    int height = 0;
    char buffer[100];
    
    printf("피라미드의 높이를 결정하세요. : ");
    fgets(buffer, sizeof(buffer), stdin);
    sscanf(buffer, "%d", &height);

    
    for (int i=1; i<=height; i++) {
        for (int j=height; j>i; j--) {
            printf("  ");
        }
        for (int k=1; k<=i; k++) {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}



/*
창의적인 또다른 방법

#include <stdio.h>

int main(void)
{
    int i = 0, j = 0;

    for (i = 0; i < 5; ++i)
    {
        for (j = 0; j < 5; ++j)
        {
            if (i + j >= 4) printf("*\t");
            else            printf("\t");
        }

        printf("\n");
    }

    return 0;
}


나는 일일이 반복해줬는데, 총합을 기준으로 계산하는 또다른 방법
창의적으로 일을 처리할 수 있도록 창의성을 기르는 것이 프로그래밍에서도 정말 중요하다는 걸
깨닫게 해줌
*/