#include <stdio.h>
// intput : 5
// output : A B C D E
void Pattern(int iNo)
{
    if(iNo<0)
    {
        iNo = -iNo;
    }
    int iCnt = 0;
    char ch = 'A';
    for (iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("%c\t", ch++);
    }
}
int main()
{
    int iValue = 0;

    printf("Enter number :\n");
    scanf("%d", &iValue);
    Pattern(iValue);
    return 0;
}