#include <stdio.h>

/*
1  10 11 20 21
2  9  12 19 22
3  8  13 18 23
4  7  14 17 24
5  6  15 16 25
*/

int main(void)
{
    int y = 0, nDirection = 1;
    int i = 0, j = 0, nCounter = 0;
    int arr[5][5] = {0};
    
    
    //solution 1
    for (i=0; i<5; i++)
    {
        for (j=0; j<5; j++)
        {
            if (i%2 == 0)   arr[j][i] = ++nCounter;
            else            arr[4-j][i] = ++nCounter;
        }
    }
    
    
    for (i=0; i<5; i++)
    {
        for (j=0; j<5; j++)
        {
            printf("%d\t", arr[i][j]);
        }
        putchar('\n');
    }
    
    return 0;
}