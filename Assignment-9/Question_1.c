/*
    Write a program which accept radius of circle from
    user and calculate its area.
    Consider Value of PI as 3.14 
    (Area = PI * Radius * Radius)

    Input : 5.3
    Output : 88.2026
*/
#include<stdio.h>

double CircleArea(float fRadius)
{
    const float PI = 3.14;
    double Area = 0.0;
    Area = PI * fRadius * fRadius;
    return Area;
}
int main()
{
    float fValue = 0.0f;
    double dRet = 0.0;

    printf("Enter Radius\n");
    scanf("%f",&fValue);

    dRet = CircleArea(fValue);

    printf("%.4f",dRet);

    return 0;
}