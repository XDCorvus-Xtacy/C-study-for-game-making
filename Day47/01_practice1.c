/*
매개변수로 검색 대상 문자열이 저장된 메모리의 주소와 그 대상 문자열에서 찾고 싶은
문자열이 저장된 메모리의 주소를 받아 검색에 성공하면 대상 메모리에서 찾고자 하
는 문자열이 저장된 위치의 인덱스를 반환하는 함수를 작성하세요. 기능적으로는
strstr() 함수와 같지만, 반환하는 자료형은 char*가 아니라 대상 메모리에 대한 인덱
스를 정수형으로 반환해야 합니다. 만일 찾는 문자열이 없다면 -1을 반환하는 함수로
정의합니다.
*/
#include <stdio.h>
#include <string.h>

int StrstrIndex(char* src, char* dest)
{
    char* addr = strstr(src, dest);
    
    if (addr != NULL)
        return (int)(addr - src);
    else return -1;
}

int main(void)
{
    char* src = "Hello World Test String";
    char* word[] = {"Hello", "World", "spring"};

    for (int i = 0; i<3; i++)
        printf("%d\n", StrstrIndex(src, word[i]));

    return 0;
}