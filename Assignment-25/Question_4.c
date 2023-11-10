/*
    Accept Character from user and check whether it is special
    symbol or not(!,@,#,$,%,&,*)
*/
#include<stdio.h>
#include<stdbool.h>

bool ChkSpecial(char ch)
{
    if((ch=='!') || (ch=='@') || (ch=='#') || (ch=='$') || (ch=='%') || (ch=='&') ||  (ch=='*'))
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

    bRet = ChkSpecial(cValue);

    if(bRet)
    {
        printf("It is special character\n");
    }
    else
    {
        printf("It is Not special character\n");
    }
    return 0;
}