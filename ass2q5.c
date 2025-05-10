//Accept number from user and check whether number is even or odd. 
#include<stdio.h> 
#define TRUE 1 
#define FALSE 0 
typedef int BOOL; 
BOOL ChkEven(int iNo) 
{ 
// Logic 
if(iNo%2==0)
{
    return TRUE;
}else{
    return FALSE;
}
} 
int main() 
{ 
int iValue = 0; 
BOOL bRet = FALSE; 
printf("Enter number"); 
scanf("%d",&iValue); 
bRet= ChkEven(iValue); 
// Display result 
if(bRet)
{
    printf("The No - %d is even",iValue);
}else{
    printf("The No - %d is odd",iValue);
}
return 0; 
}