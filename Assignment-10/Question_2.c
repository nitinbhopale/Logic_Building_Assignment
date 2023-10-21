/*
    Write a program which accept range from user 
    and display all even numbers in between that range

    Input : 23 35
    Output : 24 26 28 30 32 34
*/

#include<stdio.h>

void RangeDisplayEven(int iStart, int iEnd)
{
    if(iEnd<iStart)
    {
        printf("Invalid Range");
    } 
    else 
    {
        int i = 0;
        for(i=iStart;i<=iEnd;i++)
        {
            if(i%2==0)
            {
                printf("%d ",i);
            }
        }
    }
}
int main()
{
    int iValue1 = 0, iValue2= 0;

    printf("Enter Starting Point\n");
    scanf("%d",&iValue1);

    printf("Enter Ending Point\n");
    scanf("%d",&iValue2);

    RangeDisplayEven(iValue1,iValue2);
    return 0;
}