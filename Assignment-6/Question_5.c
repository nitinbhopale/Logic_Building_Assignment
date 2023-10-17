/*
    Write a program which accept N and print first 5 multiples of N.

    Input : 4 
    Output : 4 8 12 16 20
*/

#include<stdio.h>

void MultipleDisplay(int iNo)
{
    int i = 0;
    for(i = 1 ;i <=5;i++)
    {
        printf("%d\t",i*iNo);
    }
}
int main()
{
    int iValue = 0;
    printf("Enter number\n");
    scanf("%d",&iValue);

    MultipleDisplay(iValue);
    
    return 0;
}