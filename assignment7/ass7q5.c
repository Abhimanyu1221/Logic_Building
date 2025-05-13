#include <stdio.h>
void MultipleDisplay(int iNo)
{
    if (iNo < 0)
    {
        iNo = -iNo;
    }
    int iCnt = 0, iMult = 0;
    for (iCnt = 1; iCnt <= 5; iCnt++)
    {
        iMult = iNo * iCnt;
        printf("%d\t",iMult);
    }
}
int main()
{
    int iValue = 0;
    printf("Enter the number : ");
    scanf("%d", &iValue);

    MultipleDisplay(iValue);
    return 0;
}