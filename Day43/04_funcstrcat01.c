#include <stdio.h>
#include <string.h>

int main(void)
{
    char szPath[128] = {"C:\\Program Files\\"};
    char szBuffer[128] = {0};
    printf("Input path: ");
    fgets(szBuffer, sizeof(szBuffer), stdin);

    strncat(szPath, szBuffer, strlen(szBuffer));
    puts(szPath);
    return 0;
}