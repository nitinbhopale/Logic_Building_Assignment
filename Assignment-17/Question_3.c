/*
    Accept number from user and display below pattern
    
    Input : 5
    Output : 1  *   2   *   3   *   4   *   5   *
*/

#include<stdio.h>

void Pattern(int iNo)
{
    for(int i=1;i<=iNo;i++)
    {
        printf("%d\t*\t",i);
    }
}
int main()
{
    int iValue =0;
    printf("Enter Number of Elements\n");
    scanf("%d",&iValue);

    Pattern(iValue);

    return 0;
}