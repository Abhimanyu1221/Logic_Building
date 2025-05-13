#include <stdio.h>

void FactRev(int iNo)
{
    if (iNo < 0)
    {
        iNo = -iNo;
    }
    int iCnt = 0;

    for (iCnt = (iNo / 2); iCnt >= 1; iCnt--)
    {
        if ((iNo % iCnt) == 0)
        {
            printf("%d\t", iCnt);
        }
    }
}
int main()
{
    int iValue = 0;
    printf("Enter the value :");
    scanf("%d", &iValue);

    FactRev(iValue);

    return 0;
}
// time complexity O(n/2) where n is the input number
// because we are using a for loop which runs n/2 times.