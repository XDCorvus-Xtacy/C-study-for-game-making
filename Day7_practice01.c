/*
getchar 함수를 호출하여 사용자로부터 영문 네 글자 이상을 입력받고,
그중에서 두 번째 글자만 화면에 출력하려고 합니다. 다음 입출력 예를 보고
같은 결과를 얻을 수 있도록 프로그램을 작성합니다.
*/

#include <stdio.h>

int main(void){
    int ch;

    printf("입력 : ");

    //첫 번째 문자
    ch = getchar();

    //두 번째 문자
    ch = getchar();

    printf("출력 : %c\n", ch);

    return 0;
}