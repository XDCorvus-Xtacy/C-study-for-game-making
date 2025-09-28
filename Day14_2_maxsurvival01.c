#include <stdio.h>

int main(void)
{
    int nMax = 0, nInput = 0;
    char buffer[100];

    //처음 입력받은 값은 일단 최댓값이다.
    fgets(buffer, sizeof(buffer), stdin);
    sscanf(buffer, "%d", &nInput);
    nMax = nInput;

    //현재까지 확인한 최댓값과 사용자가 입력한 값을 비교하기
    //새로운 최댓값을 결정한다.
    fgets(buffer, sizeof(buffer), stdin);
    sscanf(buffer, "%d", &nInput);
    nMax = nInput > nMax ? nInput : nMax;

    //같은 논리를 계속 거듭해 최종 최댓값을 결정한다.
    fgets(buffer, sizeof(buffer), stdin);
    sscanf(buffer, "%d", &nInput);
    nMax = nInput > nMax ? nInput : nMax;

    printf("MAX : %d\n", nMax);
    return 0;
}