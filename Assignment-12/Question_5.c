/*
    Write a program which accept number from user and return difference between
    summation of even digits and summation of odd digits.

    Input : 2395
    Output : -15 (2-17)

    Input : 1018
    Output : 6 (8-2)
*/
#include<stdio.h>

int CountDiff(int iNo)
{
    if(iNo<0)
    {
        iNo = -iNo;
    }
    int iDigit= 0;
    int CntEven = 0;
    int CntOdd = 0;

    while(iNo!=0)
    {
        iDigit = iNo % 10;
        iNo = iNo/10;
        if(iDigit%2==0)
        {
            CntEven = CntEven + iDigit;
        } 
        else 
        {
            CntOdd = CntOdd + iDigit;
        }
    }
    return (CntEven-CntOdd);
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number\n");
    scanf("%d",&iValue);

    iRet = CountDiff(iValue);

    printf("%d",iRet);

    return 0;
}