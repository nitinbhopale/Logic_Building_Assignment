/*
    Write a program which accept string from user and accept one character.
    Return index of first occurence of that character.

    Input : "Marvellous Multi OS"
             M
    Output : 0

    Input : Marvellous Multi OS
            W
    Output : -1
*/

#include<stdio.h>

int FirstChar(char *str, char ch)
{
    int iCnt = -1;

    while(*str != '\0')
    {
        iCnt++;
        if(*str==ch)
        {
            return iCnt;
            break;
        }
        else
        {
            return -1;
        }
        str++;
    }  
}
int main()
{
    char arr[20];
    char cValue;
    int iRet = 0;

    printf("Enter String\n");
    scanf("%[^\n]s",arr);

    printf("Enter the character\n");
    scanf(" %c",&cValue);

    iRet = FirstChar(arr,cValue);

    printf("Character Location is %d", iRet);

    return 0;
}   