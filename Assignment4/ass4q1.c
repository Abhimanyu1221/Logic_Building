#include<stdio.h>
void Display(int iNo)
{
    int iCnt = 0;
    for(iCnt=1;iCnt<=iNo;iCnt++)
    {
        printf("*\t");
    }
    for(iCnt=1;iCnt<=iNo;iCnt++)
    {
        printf("#\t");
    }
}
int main()
{
    int iValue = 0;
    printf("Enter the value :");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}

// time complexity of this code is O(n) where n is the input number
// for first for O(n) 
// for second for O(n)
// so total time complexity is O(n)+O(n) = O(2n) = O(n)