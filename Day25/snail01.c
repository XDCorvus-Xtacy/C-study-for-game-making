#include <stdio.h>

/*
1  2  3  4  5
16 17 18 19 6
15 24 25 20 7
14 23 22 21 8
13 12 11 10 9

내일 한번 입력받은 array의 크기만큼 채우는 걸로 구현해보기
*/

int main(void)
{
    char buffer[100];
    int nInput = 0;

    printf("원하는 크기를 입력하세요. : ");
    fgets(buffer, sizeof(buffer), stdin);
    sscanf(buffer, "%d", &nInput);

    int aList[nInput][nInput];
    int x = -1, y =0, nCounter = 0;
    int i = 0, j =0, nDirection = 1, nLength = 0;

    //aList 채우기
    for (i=0;i<nInput;i++)
    {
        for (j=0;j<nInput;j++)
        {
            aList[i][j] = 0;
        }
    }
    
    for (nLength = nInput*2-1; nLength > 0; nLength -=2)
    {
        for (i = 0; i < nLength; i++)
        {
            if (i < nLength/2 + 1)  x += nDirection;
            else                    y += nDirection;
            
            aList[y][x] = ++nCounter;
        }
        
        nDirection = -nDirection;
    }
    
    for (i=0;i<nInput;i++)
    {
        for (j=0;j<nInput;j++)
        {
            printf("%d\t", aList[i][j]);
        }
        putchar('\n');
    }
    return 0;
}