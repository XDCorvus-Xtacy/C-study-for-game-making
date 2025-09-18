#include <stdio.h>

int main(void)
{
    //char변수 32개가 한 덩어리로 묶인 배열 선언 및 정의
    char szName[32] = { 0 };

    //사용자로부터 이름(문자열)을 입력받는다.
    printf("이름을 입력하세요: ");
    //사용자가 입력한 문자들을 문자 배열에 모두 저장한다.
    //gets(szName); c11 이후 삭제. 리눅스에서 사용 불가
    fgets(szName, sizeof(szName), stdin);
    //배열애 저장된 이름을 화면에 출력한다.
    printf("당신의 이름은 ");
    puts(szName);
    puts("입니다.");
    return 0;
}