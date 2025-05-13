// accept n from user and print its table in reverse order

#include <stdio.h>
void ReverseTable(int iNo)
{
    if (iNo < 0)
    {
        iNo = -iNo;
    }
    int iCnt = 0;
    for (iCnt = 10; iCnt >= 1; iCnt--)
    {
        printf("%d\t", (iNo * iCnt));
    }
}
int main()
{
    int iValue = 0;
    printf("Enter the number : ");
    scanf("%d", &iValue);

    ReverseTable(iValue);
    return 0;
}