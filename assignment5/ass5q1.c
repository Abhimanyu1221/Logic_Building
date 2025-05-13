#include <stdio.h>

int Multfact(int iNo)
{
    if(iNo<0)
    {
        iNo=-iNo;
    }
    int iCnt = 0,iFactmult =1;
    
    for(iCnt=1;iCnt<=(iNo/2);iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            iFactmult*=iCnt;
        }
       
    }
    return iFactmult;
}
int main()
{
    int iValue = 0, iRet = 0;
    printf("Enter the value :");
    scanf("%d", &iValue);

    iRet = Multfact(iValue);
    printf(" %d ",iRet);

    return 0;
}
// time complexity O(n/2) where n is the input number 
// because we are using a for loop which runs n/2 times.  