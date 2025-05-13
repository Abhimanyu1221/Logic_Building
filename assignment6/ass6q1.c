#include <stdio.h>
#define PI 3.14
double CircleArea(float fRadius)
{
    double dArea = 0.0;
    dArea = PI * fRadius * fRadius;

    return dArea;
}

int main()
{

    float fValue = 0.0;
    double dRet = 0.0;

    printf("Enter radius");
    scanf("%f", &fValue);
    dRet = CircleArea(fValue);
    printf("the area of the circle is %0.4f", dRet);
    return 0;
}