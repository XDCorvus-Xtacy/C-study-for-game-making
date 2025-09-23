#include <stdio.h>

int main(void)
{
    printf("----------opassign01----------\n");

    int x = 0, nInput = 0;
    char buffer[100];

    printf("숫자를 입력하세요. : ");
    fgets(buffer, sizeof(buffer), stdin);
    sscanf(buffer, "%d", &nInput);

    //nInput 변수에 저장된 사용자가 입력한 값을 x에 복사한다.
    //x에 들어있던 값은 Overwrite되고 사라진다.
    x = nInput;
    printf("x = %d\n", x);





    printf("\n\n\n\n");
    printf("----------opswap----------\n");
    //nTmp는 '교환'을 위해 필요한 변수이다.
    int a = 10, b = 20, nTmp = 0;
    printf("Before: %d, %d\n", a, b);

    //두 변수 x와 y에 저장된 값을 서로 교환한다.
    nTmp = a;
    a = b;
    b = nTmp;

    //교환이 완료된 것을 확인하기 위해 출력한다.
    printf("After: %d, %d\n", a, b);





    printf("\n\n\n\n");
    printf("----------opcomassign01----------\n");

    int nResult = 0, nData = 10;

    nResult += 3;           //nResult = nResult + 3;
    printf("%d\n", nResult);

    nResult *= nData;       //nResult = nResult * nData;
    printf("%d\n", nResult);

    nResult /= 2;           //nResult = nResult / 2;
    printf("%d\n", nResult);

    nResult -= nData - 5;   //nResult = nResult - (nData - 5);
    printf("%d\n", nResult);

    nResult %= 3;           //nResult = nResult % 3;
    printf("%d\n", nResult);
    return 0;
}