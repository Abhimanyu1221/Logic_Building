// accept n from user and print its table

#include <stdio.h>
void Table(int iNo)
{
    if (iNo < 0)
    {
        iNo = -iNo;
    }
    int iCnt = 0;
    for (iCnt = 1; iCnt <= 10; iCnt++)
    {
        printf("%d\t", (iNo * iCnt));
    }
}
int main()
{
    int iValue = 0;
    printf("Enter the number : ");
    scanf("%d", &iValue);

    Table(iValue);
    return 0;
}