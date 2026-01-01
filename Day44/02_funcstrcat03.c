#include <stdio.h>
#include <string.h>

int main(void)
{
    char szPath[128] = {"C:\\Program Files\\"};
    
    strcat(szPath + 17, "CHS\\");
    strcat(szPath + 17 + 8, "C programming");
    
    puts(szPath);
    return 0;
}