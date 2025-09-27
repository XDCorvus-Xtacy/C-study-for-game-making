#include <stdio.h>

int main(void)
{
    int nHeight = 0;
    char buffer[100];

    printf("키를 입력하세요. : ");
    fgets(buffer, sizeof(buffer), stdin);
    sscanf(buffer, "%d", &nHeight);

    printf("결과 : %s\n", nHeight >= 150 ? "합격" : "불합격");

    return 0;
}