#include <stdio.h>

int SumNonFact(int iNo)
{
    if (iNo < 0)
    {
        iNo = -iNo;
    }
    int iCnt = 0,iSum = 0;

    for (iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if ((iNo % iCnt) != 0)
        {
            iSum+=iCnt;            
        }
    }
    return iSum;
}
int main()
{
    int iValue = 0, iRet = 0;
    printf("Enter the value :");
    scanf("%d", &iValue);

    iRet=SumNonFact(iValue);
    printf("%d",iRet);
    return 0;
}
// time complexity O(n) where n is the input number
// because we are using a for loop which runs n times.