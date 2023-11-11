/*
    Write a program which accept string from user and return
    difference between frequency of small characters and 
    frequency of capital characters.

    Input : "Marvellous"

    Output : 6 (8-2)
*/

#include<stdio.h>

int CountSmall(char *str)
{
    int iCnt = 0;

    while(*str != '\0')
    {
        if(*str>='a' && *str<='z')
        {
            iCnt++;
        }
        else if(*str>='A' && *str<='Z')
        {
            iCnt--;
        }
        str++;
    }

    return iCnt;
}

int main()
{
    char arr[20];
    int iRet = 0;

    printf("Enter the String\n");
    scanf("%[^\n]s",arr);

    iRet =  CountSmall(arr);

    printf("%d",iRet);
    return 0;
}