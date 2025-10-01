#include <stdio.h>

//블록 스코프 변수 선언 문제

int main(void) {
    int nInput = 0;
    char buffer[100];
    printf("숫자를 입력하세요. : ");
    fgets(buffer, sizeof(buffer), stdin);
    sscanf(buffer, "%d", &nInput);

    if (nInput > 10) {
        int nInput = 20;
        printf("%d\n", nInput);

        if (nInput < 20) {
            int nInput = 30;
            printf("%d\n", nInput);
        }
    }

    printf("%d\n", nInput);
    return 0;
}