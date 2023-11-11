/*
    Write a program which accept string from user reverse that string
    in place.

    Input : abcd
    Output : dcba

    Input : abba
    Output : abba
*/
#include<stdio.h>


void StrRevX(char *str)
{
    
    int len = 0;
    int j = 0;
    while(str[j] !='\0')
    {
        j++;
        len++;
    }

    int lst = len-1;
    char temp = '\0';
    for(int i=0;i<len/2;i++)
    {
        temp = str[i];
        str[i] = str[lst];
        str[lst] = temp;
        lst--;
    }
    printf("%s",str);
}
int main()
{
    char arr[20];

    printf("Enter the string\n");
    scanf("%[^\n]s",arr);

    StrRevX(arr);
}