/*
    Write a program to find odd factorial of given number.

    Input : 5
    Output : 15 (5*3*1)

    Input : -5
    Output : 15 (5*3*1)

*/

#include<stdio.h>

int OddFactorial(int iNo)
{
    if(iNo<0)
    {
        iNo = -iNo;
    }
    int i = 0;
    int fact = 1;
    for(i = 1;i<=iNo;i++)
    {
        if(i%2!=0)
        {
            fact = fact * i;
        }
    }
    return fact;
}

int main()
{
    int iValue = 0,iRet = 0;

    printf("Enter number\n");
    scanf("%d",&iValue);

    iRet = OddFactorial(iValue);

    printf("Odd Number factors:%d",iRet);
    return 0;
}