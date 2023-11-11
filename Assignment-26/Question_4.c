/*
    Write a program which accept string from user and check 
    whether it contains vowels in it or not.

    Input : "Marvellous"
    Output : TRUE

    Input : Demo
    Output : TRUE

    Input : "XYZ"
    output : false
*/
#include<stdio.h>
#include<stdbool.h>

bool ChkVowel(char *str)
{
    bool vowel = false;
    while(*str != '\0')
    {
        if(*str=='a' || *str=='e' || *str=='i' || *str=='o' || *str=='u' || *str=='A' || *str=='E' || *str=='I' || *str=='O' || *str=='U')
        {
            vowel = true;
            break;
        } 
        str++;
    }
    return vowel;
}
int main()
{
    char str[20];
    bool bRet = false;

    printf("Enter the String\n");
    scanf("%[^\n]s",str);

    bRet = ChkVowel(str);

    if(bRet==true)
    {
        printf("Contains Vowel");
    } 
    else
    {
        printf("There is not vowel");
    } 

    return 0;
}