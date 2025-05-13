#include <stdio.h>
#define INR 70
int DollarToINR(int iNo)
{
    return (iNo*INR);
}
int main()
{
    int iValue = 0, iRet = 0;
    printf("Enter the value :");
    scanf("%d", &iValue);

    iRet = DollarToINR(iValue);
    printf("%d$ value in INR is : %d\n", iValue, iRet);

    return 0;
}

// time complexity: O(1) because it takes constant time to perform the operation