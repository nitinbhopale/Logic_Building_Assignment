/*
    Accept N numbers from user and display all such numbers
    which contains 3 digits in it.

    Input : N : 6
            Elements: 8225 665 3 76 953 858
    Output : 665  953  858

*/
#include<stdio.h>
#include<stdlib.h>

void Digits(int Arr[], int iLength)
{
    int len = 0;
    int temp = 0;
    for(int i =0;i<iLength;i++)
    {
        len = 0;
        temp = Arr[i]; 
        while(Arr[i]!=0)
        {
            Arr[i]=Arr[i]/10;
            len++;
        }
        if(len==3)
        {
            printf("%d ",temp);
        }
    }
}

int main()
{
    int iSize = 0, iCnt = 0;
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

    Digits(p, iSize);

    free(p);

    return 0;
}