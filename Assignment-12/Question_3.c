/*
    Write a program which accept number from user and return the 
    count of digits in between 3 and 7

    Input : 2395
    Output : 1

    Input : 1018
    Output : 0
*/
#include<stdio.h>
int CountRange(int iNo)
{
    if(iNo<0)
    {
        iNo = -iNo;
    }
    int Cnt = 0;
    int iDigit = 0;
    while(iNo!=0)
    {
        iDigit = iNo%10;
        iNo = iNo/10;
        if(iDigit > 3 && iDigit < 7)
        {
            Cnt++;
        }

    }
    return Cnt;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number\n");
    scanf("%d",&iValue);

    iRet = CountRange(iValue);

    printf("%d",iRet);

    return 0;
}