/*
    Write a program which accept number from user and 
    display below pattern

    Input : 5
    Output : * * * * * # # # # # #
*/

#include<stdio.h>

void Display(int iNo)
{
    if(iNo<0)
    {
        iNo = -iNo;
    }
    int i = 0;
    for(i = 1;i<=iNo;i++)
    {
        printf("*\t");
    }
    for(i = 1;i<=iNo;i++)
    {
        printf("#\t");
    }
}
int main()
{
    int iValue = 0;
    
    printf("Enter number\n");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}