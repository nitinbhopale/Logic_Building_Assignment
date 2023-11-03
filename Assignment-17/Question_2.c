/*
    Accept number from user and display below pattern
    
    Input : 5
    Output : 5  #   4   #   3   #   2   #   1   #
*/

#include<stdio.h>

void Pattern(int iNo)
{
    for(int i=iNo;i>0;i--)
    {
        printf("%d\t#\t",i);
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