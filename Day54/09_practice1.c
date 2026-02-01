/*
표준입력장치(stdin)에서 문자열을 입력받은 후, 표준출력장치(stdout)로 출력하는
프로그램을 작성하세요. 단, 반드시 fgets()와 fputs() 함수를 사용하세요.
*/

#include <stdio.h>

int main(void)
{
    char buffer[100];

    /* 표준입력(stdin)에서 문자열 입력 */
    fgets(buffer, sizeof(buffer), stdin);

    /* 표준출력(stdout)으로 문자열 출력 */
    fputs(buffer, stdout);

    return 0;
}