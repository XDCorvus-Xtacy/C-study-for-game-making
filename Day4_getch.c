/*


*******리눅스에서는 _getch 사용 불가


#include <stdio.h>
// _getch() 함수를 사용하기 위한 헤더 파일 포함
#include <conio.h>


int main(void)
{
    char ch = 0;
    //사용자에게 전달할 메세지(문자열) 출력
    printf("아무 키나 누르면 다음으로 넘어갑니다. \n");
    //사용자로부터 키보드 입력을 한번 받는다. 사용자가 입력한 값을
    //_getch() 함수가 반환하면 이를 ch 변수에 저장한다.

    //ch = _getch();

    //사용자가 입력한 문자를 출력한다.
    printf("입력한 키는 ");
    printf(ch);
    printf("입니다.\n");
    return 0;
}
*/




// ****GPT 방법****


#include <stdio.h>
#include <termios.h>
#include <unistd.h>

int getch(void) {
    struct termios oldt, newt;
    int ch;

    // 현재 터미널 설정 저장
    tcgetattr(STDIN_FILENO, &oldt);
    newt = oldt;

    // 버퍼링 비활성화, 에코 비활성화
    newt.c_lflag &= ~(ICANON | ECHO);
    tcsetattr(STDIN_FILENO, TCSANOW, &newt);

    ch = getchar();  // 입력 받기

    // 원래 설정으로 복원
    tcsetattr(STDIN_FILENO, TCSANOW, &oldt);

    return ch;
}

int main(void) {
    printf("아무 키나 누르세요...\n");
    int c = getch();
    printf("입력한 키: %c (코드: %d)\n", c, c);
    return 0;
}
