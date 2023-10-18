/*
    Accept amount in US dollar and return it corresponding 
    value in Indian Currency Consider 1$ as 70 rupees.

    Input : 10
    Output: 700

    Input : 3
    Output : 270
*/

#include<stdio.h>

int DollarToINR(int iNo)
{
    int rupe = 0 ;
    rupe= iNo * 70 ;
    return rupe;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number of USD\n"); 
    scanf("%d",&iValue);

    iRet = DollarToINR(iValue);

    printf("Value in INR is %d",iRet);

    return 0;
}