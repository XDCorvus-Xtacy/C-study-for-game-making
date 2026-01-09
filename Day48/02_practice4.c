/*
매개변수로 char* 두 개를 받아 각 포인터가 가리키는 대상 문자열이 같은 문자열인지
비교하는 함수를 작성합니다. 만일 같으면 0을 반환하고 그렇지 않으면 1을 반환합니다.
기본적인 기능은 strcmp() 함수와 같습니다. 단, 영문 대/소문자를 구별하지 않고 비교
합니다. 따라서 'h'와 'H'를 같다고 인식해야 합니다.
*/

#include <stdio.h>
#include <string.h>

int StrICmp(const char* src, const char*dest)
{
    while (*src != '\0' && *dest != '\0')
    {
        char c1 = *src, c2 = *dest;

        if (c1 >= 'A' && c1 <= 'Z')
            c1 = c1 - 'A' +'a';
        if (c2 >= 'A' && c2 <= 'Z')
            c2 = c2 - 'A' + 'a';

        if (c1 != c2)   
            return 1;

        ++src;
        ++dest;
    }

    return (*src == '\0' && *dest == '\0') ? 0 : 1;
}

int main(void)
{
    char str1[] = "Hello";
    char str2[] = "hello";
    char str3[] = "string";

    printf("%d\n%d\n%d\n", 
            StrICmp(str1, str2), StrICmp(str1, str3), StrICmp(str1, "Hello"));
    return 0;
}