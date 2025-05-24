/*
input : rows = 4 cols 4
output :
*       *       *       *
*       *       *       #
*       *       #       #
*       #       #       #
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
        for (j = iCols; j >= 1; j--)
        {
            if (i > j)
            {
                printf("#\t");
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