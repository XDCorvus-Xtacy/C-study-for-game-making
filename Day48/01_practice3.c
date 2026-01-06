/*
int형 5행 4열 배열에서 각 요소의 총합을 계산하여 반환하는 GetTotal() 함수를
작성하세요.
*/
#include <stdio.h>
#include <stdlib.h>

int GetTotal(int** arr, int row, int col)
{
    int sum = 0;

    for (int i=0; i<row; i++)
        for (int j=0; j<col; j++)
            sum += arr[i][j];

    return sum;
}

int main(void)
{
    int row = 0, col = 0;
    char Buffer[100];

    printf("Input row: ");
    fgets(Buffer, sizeof(Buffer), stdin);
    sscanf(Buffer, "%d", &row);
    printf("Input col: ");
    fgets(Buffer, sizeof(Buffer), stdin);
    sscanf(Buffer, "%d", &col);

    int** nList = (int**)malloc(sizeof(int*)*row);

    for (int i = 0; i<row; i++)
        nList[i] = (int*)malloc(sizeof(int)*col);

    for(int i = 0; i<row; i++)
        for(int j=0; j<col; j++)
        {
            printf("%d행 %d열: ", i+1, j+1);
            fgets(Buffer, sizeof(Buffer), stdin);
            sscanf(Buffer, "%d", &nList[i][j]);
        }

    printf("Total: %d\n", GetTotal(nList, row, col));

    for (int i = 0; i<row; i++)
        free(nList[i]);
    free(nList);

    return 0;
}