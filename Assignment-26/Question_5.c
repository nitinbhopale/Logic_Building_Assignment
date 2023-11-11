/*
    Write a program which accept string from user and 
    display it in reverse order.

    Input : "Marvellous"
    Output : SuollevraM
*/

#include<stdio.h>


void Reverse(char str[])
{
    int len = 0;
    int iCnt = 0;
    while(str[iCnt] != '\0')
    {
        len++;
        iCnt++;
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
    char str[20];

    printf("Enter the String\n");
    scanf("%[^\n]s",str);

    Reverse(str);
    return 0;
}


