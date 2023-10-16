/*
    Write a program which accept total marks & obtained
    marks from user and calculate percentage

    Input : 1000 745
    Output : 74.5%
*/

#include<stdio.h>

float Percetage(int totMarks, int ObtainMarks)
{
    float fRet = 0.0f;

    fRet = ((float)ObtainMarks/(float)totMarks) * 100;
    
    return fRet;
}
int main()
{
    int iValue1 = 0, iValue2 = 0;
    float fRet = 0.0f;

    printf("Please enter total marks\n");
    scanf("%d",&iValue1);

    printf("Please Enter Obtained Marks\n");
    scanf("%d",&iValue2);

    fRet = Percetage(iValue1, iValue2);

    printf("The Percentage: %.2f ",fRet);
    return 0;
}