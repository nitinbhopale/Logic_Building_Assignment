/*
    Write a program to find factorial of given number

    Input : 5
    Output : 120 (5*4*3*2*1)
*/
#include<stdio.h>

int Factorial(int iNo)
{
    if(iNo<0)
    {
        iNo = -iNo;
    }
    int Factorial = 1;
    int i = 0;
    for(i=1;i<=iNo;i++)
    {
        Factorial = Factorial*i;
    }
    return Factorial;
}

int main()
{
    int iValue = 0 , iRet = 0;

    printf("Enter Number\n");
    scanf("%d",&iValue);

    iRet = Factorial(iValue);

    printf("Factorial of number is : %d",iRet);
    return 0;
}