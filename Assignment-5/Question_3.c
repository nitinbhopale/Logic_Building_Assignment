/*
    Write a program which accept two numbers and check whether numbers are
    equal or not.

    Input : 10 10
    Output:Equal

    Input:10 12
    Output: Not Eqaul

    Input:  10 -10
    Output : Not Equal 

*/

#include<stdio.h>

typedef int BOOL;

#define TRUE 1
#define FALSE 0

BOOL ChkEqual(int iNo1, int iNo2)
{
    BOOL ret = FALSE;
    if(iNo1==iNo2)
    {
        ret = TRUE;
    }
    return ret;
}

int main()
{
    int iValue1 = 0,iValue2 = 0;
    BOOL bRet = FALSE;

    printf("Please Enter two numbers\n");
    scanf("%d %d",&iValue1,&iValue2);
    bRet = ChkEqual(iValue1, iValue2);
    
    if(bRet == TRUE)
    {
        printf("Equal");
    } else 
    {
        printf("Not Equal");
    }
    return 0;
}