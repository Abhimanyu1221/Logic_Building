#include<stdio.h>
double FhtoCs(float iNo)
{
    double celsius;
    celsius = (iNo - 32) * (5.0/9.0);
    return celsius;

}
int main()
{
float fValue = 0.0;
double dRet = 0.0;
printf("Enter temperature in Fahrenheit : ");
scanf("%f",&fValue);
dRet = FhtoCs(fValue);
printf("%f Fahrenheit = %f Celsius",fValue,dRet);
return 0;
}