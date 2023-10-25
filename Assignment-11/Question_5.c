/*
    Write a program which accept number from user and count frequency of such
    a digits which are less than 6

    Input : 2395
    Ouput : 3

    Input : 1018
    Output : 1018

*/

#include<stdio.h>

int Count(int iNo)
{
    int cnt = 0;
    int iDigit = 0;
    while(iNo!=0)
    {
        iDigit = iNo%10;
        if(iDigit<6)
        {
            cnt++;
        }
        iNo = iNo/10;
    }
    return cnt;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number\n");
    scanf("%d",&iValue);

    iRet = Count(iValue);
    printf("%d",iRet);
    return 0;
}