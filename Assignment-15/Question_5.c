/*
    Accept N numbers from user and return 
    product of all odd elements.

    Input: N: 6
           Element : 15   66   3   70  10  88
    Output : 45

    Input : N: 6
            Elements : 44   66  72  70  10  88
    Output : 0
*/
#include<stdio.h>
#include<stdlib.h>

int Product(int Arr[], int iLength)
{
    int Mult = 1;
    for(int i = 0;i<iLength;i++)
    {
        if((Arr[i]%2)!=0)
        {
            Mult = Mult * Arr[i];
        }
    }
    if(Mult==1)
    {
        Mult = 0;
    }
    return Mult;
}

int main()
{
    int iSize = 0,iRet = 0, iCnt = 0;

    int *p = NULL;
   

    printf("Enter Number of elements\n");
    scanf("%d",&iSize);

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

    iRet = Product(p, iSize);
    printf("%d",iRet);
    free(p);
    return 0;
}