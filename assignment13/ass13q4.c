/*
input : row = 4 , col = 5
output :
        4 4 4 4 4
        3 3 3 3 3
        2 2 2 2 2
        1 1 1 1 1
*/
#include <stdio.h>
void Pattern(int iRows, int iCols)

{
    if (iRows < 0)
    {
        iRows = -iRows;
    }
    if (iCols < 0)
    {
        iCols = -iCols;
    }
    int i = 0, j = 0;

    for (i = iRows; i >= 1; i--)
    {

        for (j = 1; j <= iCols; j++)
        {
            printf("%d ", i);
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