#include <stdio.h>
#include <string.h>

int main(void)
{
    char szPath[128] = {0};
    char szBuffer[128] = {0};
    printf("Input path: ");
    fgets(szBuffer, sizeof(szBuffer), stdin);

    sprintf(szPath, "C:\\Program Files\\%s", szBuffer);
    puts(szPath);
    return 0;
}