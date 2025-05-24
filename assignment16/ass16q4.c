/*
input : 4 4
output:
*       *       *       *
*       *               *
*               *       *
*       *       *       *
*/

#include <stdio.h>
void Pattern(int iCols, int iRows)
{
    if (iCols != iRows)
    {
        printf("Invalid input\n");
        return;
    }
    int i = 0, j = 0;
    for (i = 1; i <= iRows; i++)
    {
        for (j = 1; j <= iCols; j++)
        {
            if ((i == 1) || (i == iRows) || (j == 1) || (j == iCols) || (i == j))
            {
                printf("*\t");
            }
            else
            {
                printf(" \t");
            }
        }
        printf("\n");
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;
    printf("Enter the no of Columns and Rows\n");
    scanf("%d %d", &iValue1, &iValue2);

    Pattern(iValue1, iValue2);
    return 0;
}