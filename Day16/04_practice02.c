#include <stdio.h>

// 정수를 입력받는 함수
int inputInt(const char *msg) {
    char buffer[100];
    int value;

    printf("%s", msg);                  // 안내 메시지 출력
    fgets(buffer, sizeof(buffer), stdin); // 문자열 입력
    sscanf(buffer, "%d", &value);       // 정수 변환
    return value;                       // 값 반환
}

int main(void) {
    int nInput = 0;
    int nMax = 0;

    for (int i=0; i < 5; i++) {
        nInput = inputInt("숫자를 입력하세요. : ");
        if (nMax <= nInput)
            nMax = nInput;    
    }

    printf("MAX : %d\n", nMax);

    return 0;
}