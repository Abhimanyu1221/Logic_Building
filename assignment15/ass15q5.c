/*
input : rows = 5 cols 5
output :
1       2       3       4       5
1       *       *       *       5
1       *       *       *       5
1       *       *       *       5
1       2       3       4       5
*/

#include <stdio.h>

void Pattern(int iRows, int iCols)
{
    if (iRows != iCols)
    {
        iRows = iCols;
    }
    int i = 0, j = 0;
    for (i = 1; i <= iRows; i++)
    {
        for (j = 1; j <= iCols; j++)
        {
            if ((i == 1) || (i == iRows) || (j == 1) || (j == iCols))
            {
                printf("%d\t", j);
            }
            else
            {
                printf("*\t");
            }
        }
        printf("\n");
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;
    printf("Enter number of rows and columns\n");
    scanf("%d %d", &iValue1, &iValue2);
    Pattern(iValue1, iValue2);
    return 0;
}