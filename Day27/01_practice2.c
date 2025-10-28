#include <stdio.h>

int main(void)
{
    int aList[5][5];
    int x = 4, y = 0, nDirection = 1;
    int i = 0, j = 0, nCounter = 0;
    
    for (int Length = 9; Length > 0; Length -= 2)
    {
        for (i=0; i<Length; i++)
        {
            if (i< Length/2 + 1)    x -= nDirection
            else                    y -= nDirection
        }
    }
}