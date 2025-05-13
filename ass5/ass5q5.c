#include <stdio.h>

int FactDiff(int iNo)
{
    if (iNo < 0)
    {
        iNo = -iNo;
    }
    int iCnt = 0,iFactSum = 0,iNonFactSum = 0;

    for (iCnt = 1; iCnt < iNo; iCnt++)
    {
        if ((iNo % iCnt) == 0)
        {
            iFactSum+=iCnt;            
        }
        else{
            
            iNonFactSum+=iCnt;
        }
    }
    return (iFactSum - iNonFactSum);
}
int main()
{
    int iValue = 0, iRet = 0;
    printf("Enter the value :");
    scanf("%d", &iValue);

    iRet=FactDiff(iValue);
    printf("%d",iRet);
    return 0;
}
// time complexity O(n) where n is the input number
// because we are using a for loop which runs n times.