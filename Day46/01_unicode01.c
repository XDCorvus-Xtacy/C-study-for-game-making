#include <stdio.h>
#include <string.h>
#include <wchar.h>

int main(void)
{
    wchar_t *pwszData = L"String";
    wchar_t wszData[32];

    wcscpy(wszData, pwszData);
    wprintf(L"%ls\n", wszData);
    return 0;
}

/*
교재와의 차이점
1. 교재에서는 wchar.h를 호출하지 않았다.
2. 교재에서는 wprintf()ㅇ서 출력 형식을 %s로 했지만 여기서는 %ls로 출력했다.
3. 교재에서는 %s로 해도 String이 출력됐지만, 여기서는 S만 출력되었고 %ls로 실행해야 정상출력됐다.
*/