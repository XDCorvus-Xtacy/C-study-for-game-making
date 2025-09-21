/*
사용자로부터 두 정수를 입력받아 두 수의 평균을 계산하여 츌력하는 예제를 작성합니다. 
사용자 입력은 scanf() 함수를 통해 받고, 출력은 printf() 함수를 이용해야 합니다. 
단, 반그시 소수점 둘째 자리까지만 표시해야 하며, 변수는 2개만 선언합니다.
*/

#include <stdio.h>

int main(void) {
    int a, b;
    char buffer[100];

    printf("두 정수를 입력하세요. : ");
    fgets(buffer, sizeof(buffer), stdin);
    sscanf(buffer, "%d %d", &a, &b);

    printf("AVG : %.2f\n", (a + b) / 2.0);

    return 0;
}
