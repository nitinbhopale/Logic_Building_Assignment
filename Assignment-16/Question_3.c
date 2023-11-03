/*
    Accept N numbers from user and return the difference between
    largest and smallest number.

    Input : N : 6
            Elements : 85   66  3   66  93  88
    Output : 90 (93-3)

*/
#include<stdio.h>
#include<stdlib.h>

int Difference(int Arr[], int iLength)
{
    int iMax = Arr[0];
    int iMin = Arr[0];
    for(int i = 0;i<iLength;i++)
    {
        if(Arr[i] > iMax)
        {
            iMax = Arr[i];
        }
        if(Arr[i] < iMin)
        {
            iMin = Arr[i];
        }
    }
    return (iMax-iMin); 
}

int main()
{
    int iSize = 0, iCnt = 0, iRet = 0;
    int *p = NULL;

    printf("Enter Number of Elements\n");
    scanf("%d",&iSize);

    p = (int *)malloc(iSize * sizeof(int));

    if(p==NULL)
    {
        printf("Unable to allocate memory");
        return -1;
    }

    printf("Element %d elements\n",iSize);

    for(iCnt = 0;iCnt<iSize;iCnt++)
    {
        printf("Enter Element : %d => ",iCnt+1);
        scanf("%d",&p[iCnt]);
    }

    iRet = Difference(p, iSize);

    printf("Difference is : %d",iRet);

    free(p);

    return 0;
}