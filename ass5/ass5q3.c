#include <stdio.h>

void NonFact(int iNo)
{
    if (iNo < 0)
    {
        iNo = -iNo;
    }
    int iCnt = 0;

    for (iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if ((iNo % iCnt) != 0)
        {
           printf("%d\t",iCnt);            
        }
    }
}
int main()
{
    int iValue = 0;
    printf("Enter the value :");
    scanf("%d", &iValue);

    NonFact(iValue);

    return 0;
}
// time complexity O(n) where n is the input number
// because we are using a for loop which runs n times.