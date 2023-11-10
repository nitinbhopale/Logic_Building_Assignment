/*
    Accept Character from user adn check whether it is digit  
    or not (A-Z)

    Input : 7
    Output : TRUE

    Input : d
    Output : FALSE
*/

#include<stdio.h>
#include<stdbool.h>

bool ChkDigit(char ch)
{
    if(ch>='0' && ch<='9')
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

    printf("Enter the Character\n");
    scanf("%c",&cValue);

    bRet = ChkDigit(cValue);

    if(bRet==true)
    {
        printf("It is Digit\n");
    }
    else
    {
        printf("It is not Digit\n");
    }
    return 0;
}