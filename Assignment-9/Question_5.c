/*
    Write a program which accept area in square feet and 
    convert it into square meter.
    (1 square feet = 0.0929 Square meter)

    Input : 5
    Output : 0.464515

*/

#include<stdio.h>

double SquareMeter(int iValue)
{
    double SqMeter = 0.0;
    SqMeter = iValue * 0.0929;
    return SqMeter;
}

int main()
{
    int iValue = 0;
    double dRet = 0.0;

    printf("Enter area in Square feet\n");
    scanf("%d",&iValue);

    dRet = SquareMeter(iValue);

    printf("%lf",dRet);
    return 0;
}