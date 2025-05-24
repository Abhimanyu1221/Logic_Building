/*
input :  5 5 
output:
1       2       3       4       5
1       2                       5
1               3               5
1                       4       5
1       2       3       4       5
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
        for (j = 1; j <=iCols; j++)
        {
            if ((i == j) || (i == 1) || (i == iRows) || (j == 1) || (j == iCols))
            {
                printf("%d\t",j);
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