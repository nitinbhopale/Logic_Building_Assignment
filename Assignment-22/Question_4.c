/*
    Accept number of rows and number of columns from user and display below pattern

    Input: iRow = 6, iCol = 6

    Output :    *   *   *   *   *   *
                *   *               *
                *       *           *
                *           *       *
                *               *   *
                *   *   *   *   *   *

*/

#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    for(int i=1;i<=iRow;i++)
    {
        for(int j=1;j<=iCol;j++)
        {
            if(i==j || i==1 || j==1 || i==iRow || j==iCol)
            {
                printf("*\t");
            } 
            else 
            {
                printf(" \t");
            }
            
        }
        printf("\n\n");
    }
}

int main()
{
    int iValue1 = 0 , iValue2 = 0;

    printf("Enter the number of rows and columns\n");
    scanf("%d %d",&iValue1, &iValue2);

    Pattern(iValue1,iValue2);

    return 0;

}