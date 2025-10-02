#include <stdio.h>

int main(void) {
    char ch = 0;
    int nIndex = 0;

    while ((ch = getchar()) != '\n') {
        //버퍼에서 꺼낸 문자의 인덱스와 값을 출력한다.
        printf("%02d\t%c\n", nIndex, ch);
        //한 글자를 출력했으니 인덱스도 1 증가시킨다.
        ++nIndex;
    }

    return 0;
}