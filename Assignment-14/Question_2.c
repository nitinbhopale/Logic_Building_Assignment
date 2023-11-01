/*
    Accept N numbers from user and return difference 
    between frequency of even number and odd numbers.

    Input N : 7
          Elements: 85  66  3   80  93  88 90
    Output : 1 (4-3)
*/

#include<stdio.h>
#include<stdlib.h>

int Frequency(int Arr[], int iLength)
{
    int EvenFreq = 0;
    int OddFreq = 0;
    for(int i=0;i<iLength;i++)
    {
        if(Arr[i]%2==0)
        {
            EvenFreq++;
        } 
        else
        {
            OddFreq++;
        }
    }
    return (EvenFreq-OddFreq);
}

int main()
{
    int iSize = 0, iRet = 0, iCnt = 0;
    int *p = NULL;

    printf("Enter number of Elements\n");
    scanf("%d",&iSize);

    p = (int *)malloc(iSize * sizeof(int));

    if(p==NULL)
    {
        printf("Unable to allocate memory");
        return -1;
    }

    printf("Enter %d elements \n",iSize);

    for(iCnt = 0;iCnt <iSize;iCnt++)
    {
        printf("Enter Element  %d : ",iCnt+1);
        scanf("%d",&p[iCnt]);
    }

    iRet = Frequency(p, iSize);

    printf("Result is : %d",iRet);

    free(p);

    return 0;

}