/*
input : row = 4 , col = 4
output :
        A A A A A
        B B B B B
        C C C C C
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
    char ch = 'A';
    for (i = 1; i <= iRows; i++)
    {

        for (j = 1; j <= iCols; j++)
        {
            printf("%c ", ch);
        }
        printf("\n");
        ch++;
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