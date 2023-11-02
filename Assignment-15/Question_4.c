/*
    Accept N numbers from user and accept Range, Display 
    all elements from that range

    Input : N : 6
            Start : 66
            End : 90
            Elements: 85    66  3   76  93  88
    Output : 66 76 88

    Input : N : 6
            Start  : 30
            End : 50
            Elements: 85  66  3  76  93  88
    Output : 
*/

#include<stdio.h>
#include<stdlib.h>

void Range(int Arr[], int iLength, int iStart, int iEnd)
{
    for(int i=0;i<iLength;i++)
    {
        if(Arr[i]>iStart && Arr[i]<iEnd)
        {
            printf("%d\t",Arr[i]);
        }
    }
}

int main()
{
    int iSize = 0,iStart = 0,iEnd = 0, iCnt = 0;

    int *p = NULL;
   

    printf("Enter Number of elements\n");
    scanf("%d",&iSize);

    printf("Enter the starting Point\n");
    scanf("%d",&iStart);

    printf("Enter the Ending Point\n");
    scanf("%d",&iEnd);

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

    Range(p, iSize, iStart, iEnd);
    free(p);
    return 0;
}