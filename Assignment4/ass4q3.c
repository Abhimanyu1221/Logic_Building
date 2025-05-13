#include <stdio.h>

int EvenFactorial(int iNo)
{
    if(iNo<0)
    {
        iNo=-iNo;
    }
    int iCnt = 0;
    int imult=1;
    for(iCnt=1;iCnt<=iNo;iCnt++)
    {
        if((iCnt%2 ) == 0)
        { 
            imult*=iCnt;
        }
    }
    return imult;
}
int main()
{
    int iValue = 0, iRet = 0;
    printf("Enter the value :");
    scanf("%d", &iValue);

    iRet = EvenFactorial(iValue);
    printf("Even factorial of number is  %d ",iRet);

    return 0;
}

// time complexity O(n) where n is the input number because we are using a for loop which runs n times.  // space complexity O(1) becaus