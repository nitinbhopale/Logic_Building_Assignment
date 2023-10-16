/*
    Write a program which accept one number from user and 
    check whether that number is greater than 100 or not

    Input : 101
    Output : Greater

    Input : 39 
    Output : Smaller

*/

#include<stdio.h>

typedef int BOOL;

#define TRUE 1
#define FALSE 0

BOOL ChkGreater(int iNo)
{
    BOOL ret = FALSE;
    if(iNo>100)
    {
        ret = TRUE;  
    }
    return ret;
}
int main()
{
    int iValue = 0;
    BOOL bRet = FALSE;
    printf("Please Enter Number\n");
    scanf("%d",&iValue);
    bRet = ChkGreater(iValue);
    if(bRet==TRUE)
    {
        printf("Greater");
    } else 
    {
        printf("Smaller");
    }
    return 0;
}