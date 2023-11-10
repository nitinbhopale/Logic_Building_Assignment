/*
    Accept Character from user adn check whether it is small  
    or not (a-z)

    Input : f
    Output : TRUE

    Input : D
    Output : FALSE
*/

#include<stdio.h>
#include<stdbool.h>

bool ChkSmall(char ch)
{
    if(ch>='a' && ch<='z')
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

    bRet = ChkSmall(cValue);

    if(bRet==true)
    {
        printf("It is Small case Character\n");
    }
    else
    {
        printf("It is not Small case character\n");
    }
    return 0;
}