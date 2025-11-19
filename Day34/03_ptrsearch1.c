#include <stdio.h>
#include <string.h>

int main(void)
{
    char szBuffer[32] = {"I am a boy."};
    
    //배열의 주소를 출력한다.
    printf("%p\n", szBuffer);
    
    //대상 문자열에서 문자열을 검색하고 찾은 위치(주소)를 출력한다.
    printf("%p\n", strstr(szBuffer, "am"));
    printf("%p\n", strstr(szBuffer, "boy"));
    
    //문자열이 검색된 위치에서 기준이 되는 주소를 빼면
    //인덱스를 계산할 수 있다.
    printf("Index: %d\n", strstr(szBuffer, "am") - szBuffer);
    printf("Index: %d\n", strstr(szBuffer, "boy") - szBuffer);
    return 0;
}

/*
질문

1. 주소에 식별자를 붙이는데, 만약 printf로 출력할 떄, 형식을 %d, %p 등 형식을 
어떤 형식을 지정하냐에 따라서 출력 결과가 달라지나? 만약 그렇다면 왜 이렇게 되는가?
2. 문자열은 문자들의 배열이라고 알고 있는데, 그렇다면 strstr()로 단어를 찾을 때는 
문자열 안의 문자열을 찾는 것으로 봐야하나? 이런 질문을 하는 이유는 인덱스 계산할 때, 
문자열의 첫 번째 글자의 인덱스를 기준으로 계산하는지 궁금하기 때문
*/