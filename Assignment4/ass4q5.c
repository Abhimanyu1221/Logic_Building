#include <stdio.h>

int FactorialDiff(int iNo)
{
    if(iNo<0)
    {
        iNo=-iNo;
    }
    int iCnt = 0;
    int iEvenmult = 1,iOddmult = 1;
    for(iCnt=1;iCnt<=iNo;iCnt++)
    {
        if((iCnt%2) == 0)
        {
            iEvenmult*=iCnt;
        }
        else{
             iOddmult*=iCnt;
        }
    }
    return (iEvenmult - iOddmult);
}
int main()
{
    int iValue = 0, iRet = 0;
    printf("Enter the value :");
    scanf("%d", &iValue);

    iRet = FactorialDiff(iValue);
    printf(" factorial  difference of the number is  %d ",iRet);

    return 0;
}
// time complexity O(n) where n is the input number 
// because we are using a for loop which runs n times.  