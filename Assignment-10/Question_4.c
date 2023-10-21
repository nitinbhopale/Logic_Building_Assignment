/*
    Write a program which accept range from user and return addition of all even
    numbers in between that range
    (Range Should contains positive numbers only)
    
    Input : 23  30
    Output : 108
*/

#include<stdio.h>

int RangeSum(int iStart, int iEnd)
{
    int iSum = 0;
    int i = 0;
        for(i = iStart;i<=iEnd;i++)
        {
            if(i%2==0)
            {
                iSum = iSum + i;
            }
        }
    
    return iSum;
}

int main()
{
    int iValue1 = 0, iValue2 = 0, iRet = 0;

    printf("Enter Starting Point\n");
    scanf("%d",&iValue1);

    printf("Enter Ending Point\n");
    scanf("%d",&iValue2);

    iRet = RangeSum(iValue1, iValue2);
    
    if(iValue1<0 || iValue2<0)
    {
        printf("Invalid Range");
    } 
    else  if(iValue2 <iValue1)
    {
        printf("Invalid Range");
    }
    else 
    {
        printf("Addition is %d",iRet);
    }
    return 0;
}