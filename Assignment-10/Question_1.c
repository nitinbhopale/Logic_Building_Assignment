/*
    Write a program which accept range from user and display all numbers in 
    between that range.

    Input : 23 35
    Ouput : 23 24 25 26 27 28 29 30 31 32 33 34 35

    Input : 10 18
    Ouput : 10 11 12 13 14 15 16 17 18
*/

#include<stdio.h>

void RangeDisplay(int iStart, int iEnd)
{
    if(iEnd<iStart)
    {
        printf("Invalid Range");
    } else 
    {
        int i = 0;
        for(i = iStart;i<=iEnd;i++)
        {
            printf("%d ",i);
        }
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter Starting Point\n");
    scanf("%d",&iValue1);

    printf("Enter Ending Point\n");
    scanf("%d",&iValue2);

    RangeDisplay(iValue1, iValue2);

    return 0;
}