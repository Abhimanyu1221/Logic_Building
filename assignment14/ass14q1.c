/*
input : row 4 col 4
output :
1       2       3       4
5       6       7       8
9       1       2       3
4       5       6       7
*/

#include <stdio.h>

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0;
    int iCnt = 0;
    for (i = 1; i <= iRow; i++)
    {
        for (j = 1; j <= iCol; j++)
        {
            printf("%d\t", ((iCnt % 9)+1));
            iCnt++;
            // if (iCnt > 9)
            // {
            //     iCnt = 1;
            // }
            // else
            // {
            //     printf("%d\t", (iCnt%9));
            //     iCnt++;
            // }
        }
        printf("\n");
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter the value of row and column : ");
    scanf("%d %d", &iValue1, &iValue2);
    Pattern(iValue1, iValue2);

    return 0;
}