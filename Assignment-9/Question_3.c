/*
    Write a program which accept distance in kilometer
    and convert it into meter.
    1 kilometer = 1000 meter 

    Input : 5 
    Output : 5000
*/

#include<stdio.h>

int KMtoMeter(int iNo)
{
    int meter = 0;
    meter = iNo * 1000;
    return meter;
}
int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter Distance\n");
    scanf("%d",&iValue);

    iRet = KMtoMeter(iValue);
    printf("%d",iRet);
    return 0;
}