/*
    Accept number of rows and number of columns from user and 
    display below pattern.
    
    Input : iRow = 4    iCol = 4

    Output :    *   *   *   #
                *   *   #   *
                *   #   *   *
                #   *   *   *
*/

#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    for(int i=iRow;i>=1;i--)
    {
        for(int j=1;j<=iCol;j++)
        {
            if(i==j)
            {
                printf("#\t");
            }else
            {
                printf("*\t");
            }
        }
        printf("\n\n");
    }
}
int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter numbers of rows and columns\n");
    scanf("%d %d",&iValue1, &iValue2);

    Pattern(iValue1, iValue2);
    return 0;
}