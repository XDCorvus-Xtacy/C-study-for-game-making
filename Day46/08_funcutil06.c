#include <stdio.h>
#include <stdlib.h>

void main()
{
    char ch;
    printf("Doyou want to EXIT? (Y/N)\n");
    ch = getchar();
    getchar();  // '\n' 제거

    if (ch == 'y' || ch == 'Y')
    {
        puts("EXIT");
        exit(1);
    }

    puts("End of main()");
}