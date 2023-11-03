/*
    Accept number from user and display below pattern 

    Input : 5
    Output : A  B C D E 
*/

#include<stdio.h>

void Pattern(int iNo)
{
    char Letter = 'A';
    for(int i=0;i<iNo;i++)
    {
        printf("%c\t",Letter+i);
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