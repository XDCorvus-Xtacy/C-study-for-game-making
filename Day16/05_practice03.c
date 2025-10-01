#include <stdio.h>

//if문에 대입 연산자를 사용한 오류를 찾아내는 문제
// '=' -> '>='

int main(void) {
    int nAge = 0;
    char buffer[100];
    
    for (int i = 0; i < 5; i++) {
        printf("나이를 입력하세요. : ");
        fgets(buffer, sizeof(buffer), stdin);
        sscanf(buffer, "%d", &nAge);
        if (nAge >= 20)
            puts("당신은 성인입니다.");
        else puts("당신은 미성년자입니다.");
    }
    puts("End");
    return 0;
}