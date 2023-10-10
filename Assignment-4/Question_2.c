/*
    Write a program which accept number from user and display its 
    factors in decresing order

    Input : 12 
    Output : 6  4   3   2   1

    Input  : 10
    Output : 5  2   1
*/

#include<stdio.h>

void FactRev(int iNo)
{
    int iCnt = iNo/2 ;
    while(iCnt>=1)
    {
        if(iNo%iCnt==0)
        {
            printf("%d\t",iCnt);
        }
        iCnt--;
    }
}
int main()
{
    int iValue = 0;

    printf("Enter Number\n");
    scanf("%d",&iValue);

    FactRev(iValue);

    return 0;
}