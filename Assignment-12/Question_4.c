/*
    Write a program which accept number from user and return 
    multiplication of all digits.

    Input : 2395
    Output : 270

    Input : 1018
    Output : 8
*/

#include<stdio.h>

int MultDigits(int iNo)
{
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    int Mult = 1;
    int iDigit = 0;
    
    while(iNo!=0)
    {
        iDigit = iNo%10;
        if(iDigit==0)
        {
            iDigit = 1;
            Mult = Mult * iDigit;
        }
        else 
        {
            Mult = Mult * iDigit;
        }
        iNo = iNo/10;
    }
    return Mult;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number\n");
    scanf("%d",&iValue);

    iRet = MultDigits(iValue);

    printf("%d",iRet);

    return 0;
}