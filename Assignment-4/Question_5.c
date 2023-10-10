/*
    Write a program which accept number from user and return difference 
    between summation of all its factors and non factors.

    Input  : 12
    Output : -34 (16-50)

    Input : 10
    Output: -29 (8-37)
*/

#include<stdio.h>

int FactDiff(int iNo)
{
    int iCnt = 0;
    int AddFact = 0;
    int AddNonFact = 0;

    for(iCnt = 1 ; iCnt < iNo; iCnt++)
    {
        if(iNo%iCnt==0)
        {
            AddFact = AddFact + iCnt;
        } 
        else 
        {
            AddNonFact = AddNonFact + iCnt;
        }
    }
    return AddFact-AddNonFact;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the Number\n");
    scanf("%d",&iValue);

    iRet = FactDiff(iValue);

    printf("%d",iRet);
    return 0;
}
