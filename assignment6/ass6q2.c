#include<stdio.h>
double RectArea(float fWidth, float fHeight) 
{
    double dArea ;
    dArea= fWidth * fHeight;
    return dArea ;

} 
int main()
{
    float fValue1 = 0.0, fValue2 = 0.0;
    double dRet = 0.0;
    printf("Enter width");
    scanf("%f", &fValue1);
    printf("Enter height");
    scanf("%f", &fValue2);
    dRet = RectArea(fValue1, fValue2);
    printf(" The area of rectangle is %0.3f", dRet);
    return 0;
}