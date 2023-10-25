/*
    Write a program which accept number from user and return the count of odd
    digits.

    Input : 2395
    Output : 3
*/
#include<stdio.h>

int CountOdd(int iNo)
{
    int cntOdd = 0;
    int iDigit = 0;
    if(iNo<0)
    {
        iNo = -iNo;
    }
    while(iNo!=0)
    {
        iDigit = iNo%10;
        iNo = iNo/10;
        if(iDigit%2!=0)
        {
            cntOdd++;
        }
    }
    return cntOdd;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number\n");
    scanf("%d",&iValue);

    iRet = CountOdd(iValue);

    printf("%d",iRet);
    return 0;
}