//오버플로우 문제로 대체 코드 작성.

#include <stdio.h>

int main() {
    char buffer[100];
    int age;

    printf("나이를 입력하세요: ");

    if (fgets(buffer, sizeof(buffer), stdin) != NULL) {
        if (sscanf(buffer, "%d", &age) == 1) {
            printf("당신의 나이는 %d세입니다.\n", age);
        } else {
            printf("정수를 입력해야 합니다.\n");
        }
    }
    return 0;
}
