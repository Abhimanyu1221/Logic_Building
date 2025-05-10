// Accept one number from user and print that number of * on screen.
#include<stdio.h>
void Display(int iNo)
{
    int iCnt = 0;
    // Write Updater
    while (iCnt <iNo)
    {
        printf(" * ");
        iCnt++; // increase the count to update the count of * printed
    }
}
int main()
{
    int iValue = 0;
    printf("Enter number");
    scanf("%d",&iValue);
    Display(iValue);//call the function with the user given value
    return 0;
}