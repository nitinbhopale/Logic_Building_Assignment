/*
    1. Write a program which accept name from user and print that name

    Input : Piyush Khairnar
    Output : Piyush khairnar
*/

#include<stdio.h>

int main()
{
    char Name[30];
    printf("Please Enter full name\n");
    scanf("%[^\n]s",Name);
    printf("Your name is %s",Name);
    return 0;
}
