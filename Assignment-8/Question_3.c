/*
    Write a program to find even factorial of given number.

    Input : 5
    Output : 8 (4*2)

    Input : -5
    Output : 8 (4*2)

    Input : 10
    Output: 3840 (10*8*6*4*2)
*/

#include<stdio.h>

int EvenFactorial(int iNo)
{
    if(iNo<0)
    {
        iNo = -iNo;

    }
    int i = 0;
    int fact = 1;
    for(i=1;i<=iNo;i++)
    {   
        if(i%2==0)
        {
            fact = fact * i;
        }
    }
    return fact;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter Number\n");
    scanf("%d",&iValue);

    iRet = EvenFactorial(iValue);

    printf("Even factorial of number is %d",iRet);

    return 0;
}
