/*
    Accept N numbers from user check whether that numbers
    contains 11 in it or not.

    Input   N : 6
            Element : 85 66 11 80 93 88

    Output: 11 is present

    Input   N : 6
            Element : 85 66 3 80 93 88
    
    Output : 11 is Absent
    
*/

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool Check(int Arr[], int iLength)
{
    bool chk = false;
    for(int i=0;i<iLength;i++)
    {
        if(Arr[i]==11)
        {
            chk = true; 
            break;
        }
    }
    return chk;
}
int main()
{
    int iSize = 0, bRet = false, iCnt = 0;
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

    bRet = Check(p, iSize);

    if(bRet==true)
    {
        printf("11 is Present");
    } 
    else {
        printf("11 is Absent");
    }

    free(p);

    return 0;

}