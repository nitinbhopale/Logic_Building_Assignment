/*
    Accept N numbers from user and display summation of digits of each numbers.


    Input : N : 6
            Elements: 8225 665 3 76 953 858
    Output : 17 17 3 13 17 21 

*/
#include<stdio.h>
#include<stdlib.h>

void DigitsSum(int Arr[], int iLength)
{
    int len = 0;
    int sum = 0;
    for(int i =0;i<iLength;i++)
    {
        len = 0;
        sum = 0;
        while(Arr[i]!=0)
        {
            sum = sum + (Arr[i]%10);
            Arr[i]=Arr[i]/10;
        }
        printf("%d\t",sum);
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

    DigitsSum(p, iSize);

    free(p);

    return 0;
}