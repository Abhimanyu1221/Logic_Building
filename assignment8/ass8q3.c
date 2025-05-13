// accept n from user and find its factorial

#include <stdio.h>
int  Factorial(int iNo)
{
    if (iNo < 0)
    {
        iNo = -iNo;
    }
    int iCnt = 0, iFact = 1;
    for (iCnt = 1; iCnt <= iNo; iCnt++)
    {
        iFact*=iCnt;
    }
    return iFact;
}
int main()
{
    int iValue = 0, iRet=1;
    printf("Enter the number : ");
    scanf("%d", &iValue);

    iRet=Factorial(iValue);
    printf("Factorial of %d is : %d\n", iValue, iRet);
    return 0;
}