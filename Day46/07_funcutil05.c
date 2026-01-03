#include <stdio.h>
#include <stdlib.h>

void main()
{
    char szCommand[512] = {0};
    printf("Input command: ");
    fgets(szCommand, sizeof(szCommand), stdin);

    system(szCommand);
//  system("notepad.exe");
}