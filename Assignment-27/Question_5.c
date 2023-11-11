/*
    Write a program which accept string from user
    and count number of white spaces

    Input : MarvellouS
    Output : 0

    Input : Marvellous Infosystems
    Output : 1
*/

#include<stdio.h>

int CountWhite(char *str)
{
    int iSpaces = 0;
    while(*str != '\0')
    {
       if(*str==' ')
       {
         iSpaces++;
       }
       str++;
    }
    return iSpaces;
}
int main()
{
    char arr[20];
    int iRet = 0;
    printf("Enter the String\n");
    scanf("%[^\n]s",arr);

    iRet = CountWhite(arr);

    printf("%d",iRet);
    return 0;
}