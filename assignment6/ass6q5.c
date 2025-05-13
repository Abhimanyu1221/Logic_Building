 #include<stdio.h>
 #define SQF 0.092903
double SquareMeter(int iNo)
{
    return ((iNo)*SQF);
}

 int main()
 {
    int  iValue = 0;
    double dRet = 0.0;
    printf("Enter number in square feet :");
    scanf("%d",&iValue);
    dRet = SquareMeter(iValue);
    printf("%d Sq feet = %f Sq meter",iValue,dRet);
    return 0;
 }