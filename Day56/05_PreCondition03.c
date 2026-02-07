/*
리눅스에는 동작하지 않는 코드라 주석처리 하고 아래에 리눅스에서 동작하는 코드 기술


#include <stdio.h>
#define MYUNICODE

#ifdef MYUNICODE
    typedef wchar_t TCHAR;
    #define _T(string)  L##string
    #define PRINT      wprintf
#else
    typedef char    TCHAR;
    #define _T(string)  string
    #define PRINT       printf
#endif

void main()
{
    TCHAR szData[16] = _T("Test String");
    PRINT(_T("%s\n"), szData);
    PRINT(_T("%d, %d\n"), sizeof(TCHAR), sizeof(szData));
}
*/

#include <stdio.h>
#include <wchar.h>
#include <locale.h>

#define MYUNICODE

#ifdef MYUNICODE
    typedef wchar_t TCHAR;
    #define _T(string)  L##string
    #define PRINT       wprintf
    #define TSTR        "%ls"
#else
    typedef char TCHAR;
    #define _T(string)  string
    #define PRINT       printf
    #define TSTR        "%s"
#endif

int main(void)
{
    // 로케일 설정 (필수!)
    setlocale(LC_ALL, "");

    TCHAR szData[16] = _T("Test String");

    PRINT(_T(TSTR "\n"), szData);
    PRINT(_T("%zu, %zu\n"), sizeof(TCHAR), sizeof(szData));

    return 0;
}