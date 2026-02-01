/*
Linux에서만 안 되는 건지는 모르겠는데 실행되지 않음.
fp->가 표준 c가 아니라고 함.
대안을 찾아보려 했으나 교재 내용과도 너무 멀어지고 이해도 못 한 상태라서
우선은 commit & push 하지만 Linux 환경에서는 실행되지 않음.
참고 바람.
*/

#include <stdio.h>

void main()
{
    //표준입력장치 파일(stdin)을 가리키는 포인터 변수 선언 및 정의
    FILE *fp = stdin;
    printf("Input string: ");

    //사용자로부터 '문자열'을 입력받은 후 첫 글자를 읽어와 출력한다.
    printf("getchar() - %c\n", getchar());

    //버퍼에 남아있는 문자의 개수와 내용에 대한 정보를 출력한다.
    printf("[%d] %s", fp->_cnt, fp->_base);
    printf("READ: %d\n", fp->_ptr - fp->_base);

    //다시 한 글자를 읽어온 후 달라진 내용을 확인한다.
    printf("\n\ngetchar() - %c\n", getchar());
    printf("[%d] %s", fp->_cnt, fp->_base);
    printf("READ: %d\n", fp->_ptr - fp->_base);

    //파일 입출력 버퍼를 초기화한 후 결과를 확인한다.
    fflush(fp);
    printf("\n\nAfter flushing\n[%d] %s",
        fp->_cnt, fp->_base);
    printf("READ: %d\n", fp->_ptr - fp->_base);
}