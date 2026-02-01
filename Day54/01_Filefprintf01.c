#include <stdio.h>
#include <stdlib.h>

void main()
{
    FILE *fp = NULL;
    //현재 경로에 Test.txt 파일을 생성한다.
    fp = fopen("Test.txt", "w");

    //생성한 파일에 문자열을 쓴다(혹은 출력한다).
    fprintf(fp, "%s\n", "Test string");
    fprintf(fp, "%s\n", "Hello world!");

    //파일을 닫고 메모장으로 확인한다.
    fclose(fp);
    system("nano Test.txt");  //Linux에서는 notepad.exe를 실행할 수 없음. nano 사용.
}