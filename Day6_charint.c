#include <stdio.h>

int main(void)
{
    //문자상수를 ASCII코드 문자형식으로 출력한다.
    printf("%c\n", 'A');
    //문자 'A'의 ASCII 코드값(65)에 1을 더한 값을 문자로 출력한다.
    printf("%c\n", 'A'+1);
    //문자상수를 ASCII코드 문자형식으로 출력한다.
    printf("%c\n", 'C');

    //문자 'A'의 ASCII 코드값을 10진수(%d)로 출력한다.
    printf("%d\n", 'A');
    //문자 'A'의 ASCII 코드값에 1을 더하고 10진수(%d)로 출력한다.
    printf("%d\n", 'A'+1);
    //문자 'C'의 ASCII 코드값을 10진수(%d)로 출력한다.
    printf("%d\n", 'C');

    //10진수(정수)를 문자(ASCII)로 출력한다.
    printf("%c\n", 65);
    printf("%c\n", 65+1);
    printf("%c\n", 67);
    return 0;
}