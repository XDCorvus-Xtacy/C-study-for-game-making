#include <stdio.h>

int main(void) 
{
    char ch = 0;

    printf("입력 : ");
    
    do 
    {
        //조건을 나중에 비교하므로
        //일단 한번은 무조건 실행한다.
        ch = getchar();
        putchar(ch);

    } while (ch != '\n');   //조건식 오른쪽 끝에 ;이 있다는 점에 주의한다.

    return 0;
}