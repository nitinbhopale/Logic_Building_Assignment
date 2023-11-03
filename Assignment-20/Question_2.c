/*
    Accept number of rows and number of columns from user and 
    display below pattern

    Input : iRow = 4    iCol = 5

    Output :    2   4   6   8   10
                1   3   5   7   9
                2   4   6   8   10
                1   3   5   7   9
*/

#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int Num = 0;
    for(int i =1;i<=iRow;i++)
    {
        if(i%2!=0)
        {
            Num = 2;
        }
        else
        {
            Num = 1;
        }
        for(int j = 1 ; j<= iCol;j++)
        {
            printf("%d\t",Num);
            Num = Num + 2;
        }
        printf("\n");
    }
}
int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter number of rows and columns\n");
    scanf("%d %d",&iValue1, &iValue2);

    Pattern(iValue1, iValue2);

    return 0;
}