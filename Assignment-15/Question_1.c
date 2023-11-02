/*
    Accept N numbers from user and accept one another number as NO,
    Check whether NO is present or not

    Input : N : 6
            NO: 66
            Elements: 85    66  3   66  93  88
    Output : TRUE
*/

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool Check(int Arr[], int iLength, int iNo)
{
    bool Chk = false;
    for(int i=0;i<iLength;i++)
    {
        if(iNo==Arr[i])
        {
            Chk = true;
            break;
        }
    }
    return Chk;
}

int main()
{
    int iSize = 0, iCnt = 0, iValue = 0;

    int *p = NULL;
    bool bRet = false;

    printf("Enter Number of elements\n");
    scanf("%d",&iSize);

    printf("Enter the Number\n");
    scanf("%d",&iValue);

    p = (int *)malloc(iSize * sizeof(int));

    if(p==NULL)
    {
        printf("Unable to allocate memory");
        return -1;
    }

    printf("Enter %d elements\n", iSize);

    for(iCnt = 0;iCnt<iSize;iCnt++)
    {
        printf("Enter Element : %d = ",iCnt+1);
        scanf("%d",&p[iCnt]);
    }

    bRet = Check(p, iSize, iValue);

    if(bRet==true)
    {
        printf("Number is present");
    } 
    else 
    {
        printf("Number is not present");
    }
    free(p);
    return 0;
}