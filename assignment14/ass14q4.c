/*
input : row 4 col 5
output :
a       b       c       d       e
1       2       3       4       5
a       b       c       d       e
1       2       3       4       5
a       b       c       d       e
*/

#include <stdio.h>

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0;

    for (i = 1; i <= iRow; i++)
    {

        for (j = 1; j <= iCol; j++)
        {
            if ((i % 2) != 0)
            {
                printf(" %d\t", j);
            }
            else
            {
                printf("%d\t",-j);
            }
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