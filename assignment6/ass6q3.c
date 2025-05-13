 #include<stdio.h>
 #define KM 1000
int KMtoMeter(int iNo)
{
    return iNo*KM;
}

 int main()
 {
    int iValue = 0,iRet = 0;
    printf("Enter number in kilometer:");
    scanf("%d",&iValue);
    iRet = KMtoMeter(iValue);
    printf("%d Km = %d meter",iValue,iRet);
    return 0;
 }