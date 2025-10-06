/*
다음 코드에서 goto 문을 제거하고 반복문을 이용해서 같은 결과를
얻을 수 있도록 프로그램을 변경하세요

#include <stdio.h>

int main(void)
{
    int nInput;

INPUT:
    printf("Input number : ");
    scanf("%d", &nInput);

    if (nInput < 0 || nInput > 10)
        goto INPUT;

    puts("End");
    return 0;
}

*/

#include <stdio.h>

int main(void)
{
    int nInput;
    char buffer[100];

    while (1)   //무한반보
    {
        printf("Input number : ");
        fgets(buffer, sizeof(buffer), stdin);
        sscanf(buffer, "%d", &nInput);

        if (nInput >= 0 && nInput <= 10)
            break;      //조건 만족 시 반복 종료
    }

    puts("End");
    return 0;
}