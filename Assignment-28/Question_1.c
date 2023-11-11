/*
    Write a program which accept string from user and accept one character.
    Check Whether that character is present in string or not.

    Input : "Marvellous Multi OS"
             e
    Output : True

    Input : Marvellous Multi OS
            W
    Output : false
*/

#include<stdio.h>
#include<stdbool.h>

bool ChkChar(char *str, char ch)
{
    bool ChkChar = false;

    while(*str != '\0')
    {
        if(*str==ch)
        {
            ChkChar = true;
            break;
        }
        str++;
    }
    return ChkChar;
}
int main()
{
    char arr[20];
    char cValue;
    bool bRet = false;

    printf("Enter String\n");
    scanf("%[^\n]s",arr);

    printf("Enter the character\n");
    scanf(" %c",&cValue);

    bRet = ChkChar(arr,cValue);

    if(bRet)
    {
        printf("Character found\n");
    } 
    else
    {
        printf("Character Not found\n");
    }
    return 0;
}   