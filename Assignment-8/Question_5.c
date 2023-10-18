/*
    Write a program which returns difference between 
    Even Factorial and odd factorial of given number.

    Input : 5
    Output : -7     (8 - 15)

    Input : 5
    Output : -7     (8-15)
*/

#include<stdio.h>

int FactorialDiff(int iNo)
{
    if(iNo<0)
    {
        iNo = -iNo;
    }
    int EvenFact = 1;
    int OddFact = 1;
    int i = 0;
    for(i=1;i<=iNo;i++)
    {
        if(i%2==0)
        {
            EvenFact = EvenFact*i;
        } else 
        {
            OddFact = OddFact*i;
        }
    }
    int diff = EvenFact-OddFact;
    return diff;
}

int main()
{
    int iValue = 0, iRet = 0;
    
    printf("Enter number\n");
    scanf("%d",&iValue);

    iRet = FactorialDiff(iValue);

    printf("Factorial Difference is %d",iRet);
    return 0;
}