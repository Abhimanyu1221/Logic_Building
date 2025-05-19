/* input : row = 4 cols 4
    * * * *
    * * * *
    * * * *
    * * * *

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
        for (j = 1; j <= iCols; j++)
        {
            printf("*\t");
        }
        printf("\n");
    }
}
int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter the No of Rows and Columns : ");
    scanf("%d %d", &iValue1, &iValue2);

    Pattern(iValue1, iValue2);

    return 0;
}