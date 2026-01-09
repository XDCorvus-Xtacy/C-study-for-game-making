/*
난수를 구하는 함수를 사용하여 가위바위보 게임을 구현합니다. 0~2 범위의 숫자를
발생시켜서 0은 '가위', 1은 '바위', 2는 '보'라고 가정합니다. 게임 방식은 사용자로부
터 0~2 범위의 정수를 입력받은 후, 이에 대응하는 0~2 범위의 난수를 발생시켜 사용자
가 입력한 정보와 비교하는 방식으로 게임을 진행합니다. 반드시 사용자, 컴퓨터가 선정한
것이 무엇이며 누가 승자인지 표시해야 합니다.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

char* itoc(int a)
{
    if (a == 0)
        return "가위";
    else if (a == 1)
        return "바위";
    return "보";
}

int CheckWinner(int a, int b)
{
    if (a - b == 1)
        return a;
    else if (b - a == 1)
        return b;
    else return 0;
}

int main()
{
    char play = 'y';

    while (play == 'Y' || play == 'y')
    {
        srand((unsigned)time(NULL));

        int com = rand()%3;
        int p;
        char buffer[100];
        int flag = 0;

        while (flag == 0)
        {
            printf("무엇을 낼 건가요?\n0:가위\n1:바위\n2:보\n입력: ");
            fgets(buffer, sizeof(buffer), stdin);
            sscanf(buffer, "%d", &p);

            if (p > 2 || p < 0)
                printf("\n올바른 숫자(0~2)를 입력하세요.\n");
            else flag = 1;
        }

        if (com == p)
        {
            printf("\n비겼습니다!\n");
        }
        else
        {
            char* winner;

            if (CheckWinner(com, p) == com)
                winner = "컴퓨터";
            else winner = "플레이어";

            printf("\n%s가 이겼습니다!\n", winner);
        }

        printf("당신은 %s, 컴퓨터는 %s를 냈습니다.\n", itoc(p), itoc(com));
        printf("\n계속하시겠습니까? [Y/N] : ");
        play = getchar();
        getchar();
    }
    printf("다음에 또 봐요~\n");
}

