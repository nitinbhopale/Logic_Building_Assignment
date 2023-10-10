/*
    Accept one character from user and check whether that character
    is vowel (a,e,i,o,u) or not
    
    Input : E   Output : TRUE
    Input : d   Output : FALSE
*/

#include<stdio.h>
#include<stdbool.h>

bool ChkVowel(char cValue)
{
    
    if(cValue == 'A' || cValue == 'a' || cValue == 'e' || cValue == 'E' || cValue == 'i' || cValue == 'I' || cValue == 'o' || cValue=='O' || cValue=='u' || cValue == 'U')
    {
        return true;
    }
    else 
    {
        return false;
    }
}
int main()
{
    char cValue = '\0';
    bool bRet = false;

    printf("Enter Character\n");
    scanf("%c",&cValue);

    bRet = ChkVowel(cValue);

    if(bRet == true)
    {
        printf("It is vowel\n");
    }
    else 
    {
        printf("It is not Vowel");
    }
    return 0;
}