/* Question: 2. Accept single digit number from user and print it into word */

#include <stdio.h>

void Number(int iNo)
{
    if (iNo < 0 || iNo > 9)
    {
        printf("Invalid input");
    }
    else if (iNo == 0)
    {
        printf("Zero");
    }
    else if (iNo == 1)
    {
        printf("One");
    }
    else if (iNo == 2)
    {
        printf("Two");
    }
    else if (iNo == 3)
    {
        printf("Three");
    }
    else if (iNo == 4)
    {
        printf("Four");
    }
    else if (iNo == 5)
    {
        printf("Five");
    }
    else if (iNo == 6)
    {
        printf("Six");
    }
    else if (iNo == 7)
    {
        printf("Seven");
    }
    else if (iNo == 8)
    {
        printf("Eight");
    }
    else if (iNo == 9)
    {
        printf("Nine");
    }
}
int main()
{
    int iValue = 0;

    printf("Enter the number : ");
    scanf("%d", &iValue);

    Number(iValue);

    return 0;
}