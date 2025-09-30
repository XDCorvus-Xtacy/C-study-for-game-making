#include <stdio.h>

int main(void)
{
    int nInput = 0;     //1번
    char buffer[100];
    //1번 nInput에 저장
    fgets(buffer, sizeof(buffer), stdin);
    sscanf(buffer, "%d", &nInput);

    if (nInput > 10)
    {
        int nInput = 20;    //2번
        //2번 nInput을 출력
        printf("%d\n", nInput);

        if (nInput < 20)
        {
            int nInput = 30; //3번
            //3번 nInput을 출력
            //가장 최근에 선언된 것이 우선한다.
            printf("%d\n", nInput);

            //3번 nInput은 여기서 소멸한다.
        }

        //2번 nInput은 여기서 소멸한다.
    }

    //1번 nInput을 출력
    printf("%d\n", nInput);

    //1번 nInput은 여기서 소멸한다.
    return 0;
}