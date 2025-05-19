/*
input : row = 4 , col = 4
output :
        A B C D
        A B C D
        A B C D
        A B C D
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

    for (i = 1; i <= iRows; i++)
    {
        char ch = 'A';
        for (j = 1; j <= iCols; j++)
        {
            printf("%c ", ch);
            ch = (ch + 1);
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