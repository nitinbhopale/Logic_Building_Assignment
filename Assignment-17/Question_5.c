/*
    Accept number from user and display below pattern
    
    Input : 8
    Output : 2   4   6   8   10  12  14  16   
*/

#include<stdio.h>

void Pattern(int iNo)
{
    for(int i=1;i<=(iNo*2);i++)
    {
        if((i%2)==0)
        {
            printf("%d\t",i);
        }
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