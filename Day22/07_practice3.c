/*
사용자로부터 문자열을 입력받은 후 문자열의 길이를 출력하는 프로그램을
작성합니다. 단, 입력되는 문자열이 한글이라고 가정하고 한글 문자의 개수를
출력해야 합니다. 사용자가 영문이나 숫자를 입력하는 문제는 고려할 필요가
없으며 무조건 한글만 입력한다고 가정합니다. 그리고 글자 사이의 공백이나
탭같은 화이트 스페이스는 없는 것으로 합니다.

입력 예:
    나는천재다
출력 예:
    한글 문자의 개수는 5자 입니다.
*/

#include <stdio.h>
#include <string.h>

int main(void)
{
    char str[100];

    printf("문자열을 입력하세요: ");
    fgets(str, sizeof(str), stdin);

    // 개행 문자 제거
    str[strcspn(str, "\n")] = '\0';

    int byte_len = strlen(str);    // 총 바이트 수
    int hangul_len = byte_len / 3; // 한글만 있다고 가정 → 3바이트씩 한 글자

    printf("한글 문자의 개수는 %d자 입니다.\n", hangul_len);

    return 0;
}
