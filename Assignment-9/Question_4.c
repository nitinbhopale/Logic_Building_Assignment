/*
    Write a program which accept temperature in Fahrenheit and 
    convert it into celsius. 
    1 Celsius = (Fahrenheit-32) * (5/9)

    Input : 10
    Output : -12.2222   (10-32)*(5/9)

*/
#include<stdio.h>

double FhtoCs(float fTemp)
{
    double Cel = 00.00;
    Cel = ((fTemp-32)*((float)5/9));
    return Cel;
}

int main()
{
    float fValue = 0.0;
    double dRet = 0.0;

    printf("Enter Temperature in Fahrenheit\n");
    scanf("%f",&fValue);

    dRet = FhtoCs(fValue);

    printf("%.5f",dRet);
    return 0;
}