/*
    Accept N numbers from user and accept one another number as NO,
    return index of Last occurence of that NO

    Input : N : 6
            NO: 66
            Elements: 85    66  3   66  93  88
    Output : 3

    Input : N : 6
            NO : 12
            Elements: 85  11  3   15  11  111
    Output : -1
*/

#include<stdio.h>
#include<stdlib.h>

int LastOcc(int Arr[], int iLength, int iNo)
{
    int index = -1;
    for(int i =0;i<iLength;i++)
    {
        if(Arr[i]==iNo)
        {
            index = i;
        } 
    }
    return index;
}

int main()
{
    int iSize = 0,iRet = 0, iCnt = 0, iValue = 0;

    int *p = NULL;
   

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

    iRet = LastOcc(p, iSize, iValue);

    if(iRet == -1)
    {
        printf("There is no such number");
    }
    else 
    {
        printf("Last Occurrence of number is %d",iRet);
    }
    free(p);
    return 0;
}