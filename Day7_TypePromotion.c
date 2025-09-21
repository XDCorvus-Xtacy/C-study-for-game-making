#include <stdio.h>

int main(void)
{
    char ch = 'A';

    //char를 %c로 출력
    printf("%c\n", ch);

    //'char + int'는 int 형식이다.
    printf("%c\n", ch + 1);
    printf("%c\n", 'A' + 2);

    //'double + int'는 double 형식이다.
    //따라서 %d 형식으로는 출력할 수 없다!
    printf("%d\n", 5.0 + 2);
    printf("%f\n", 5.0 + 2);
    return 0;
}