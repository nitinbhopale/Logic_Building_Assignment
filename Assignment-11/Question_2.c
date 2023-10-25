/*
    Write a program which accept number from user and check
    whether it contains 0 in it or not.

    Input : 2395
    Output: There is no Zero 

    Input : 1018
    Output : It contains Zero 
*/

#include<stdio.h>

#define TRUE 1 
#define FALSE 0

typedef int BOOL;

BOOL ChkZero(int iNo)
{
    BOOL zero = FALSE;
    int iDigit = 0;
    while(iNo!=0)
    {
        iDigit = iNo%10;
        iNo = iNo/10;
        if(iDigit==0)
        {
            zero = TRUE;
            break;
        }
    }
    return zero;
}

int main()
{
    int iValue = 0;
    BOOL bRet = FALSE;

    printf("Enter Number\n");
    scanf("%d",&iValue);

    bRet = ChkZero(iValue);

    if(bRet==TRUE)
    {
        printf("It Contains Zero");
    } 
    else 
    {
        printf("There is no Zero");
    }
    return 0;
}
