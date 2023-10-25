/*
    Write a program which accept number from user and return 
    the count of even digits

    Input : 2395
    Output : 1

    Input : 1018
    Output : 2
*/

#include<stdio.h>

int CountEven(int iNo)
{
    int cntEven = 0;
    int iDigit = 0;
    if(iNo<0)
    {
        iNo = -iNo;
    }
    while(iNo!=0)
    {
        iDigit = iNo%10;
        iNo = iNo/10;
        if(iDigit%2==0)
        {
            cntEven++;
        }
    }
    return cntEven;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number\n");
    scanf("%d",&iValue);

    iRet = CountEven(iValue);

    printf("%d",iRet);
    return 0;
}