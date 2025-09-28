#include <stdio.h>

int main(void)
{
    int nMax = -9999, nInput = 0;
    char buffer[100];

    for (int i =0; i < 3; i++)
    {
        printf("%d번째 수를 입력하세요. : ", i + 1);
        if (fgets(buffer, sizeof(buffer), stdin) != NULL)
        {
            if (sscanf(buffer, "%d", &nInput) != 1)
            {
                printf("잘못된 입력입니다. 정수를 입력해주세요.￦n");
                i--;    //다시 입력받도록 i 감소
            }
        }

        if (nMax <= nInput)
        {
            nMax = nInput;
        }
    }

    printf("MAX : %d\n", nMax);
    return 0;
}