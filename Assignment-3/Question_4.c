/*
    Accept one character from user and convert case of that character

    Input : a   Output : A
    Input : D   Output : d
*/
#include<stdio.h>

void DisplayConvert(char CValue)
{
   if(CValue > 64 && CValue < 91)
   {
        printf("%c",CValue+32);
   }  
   else if(CValue > 96 && CValue < 123)
   {
        printf("%c",CValue-32);
   }
}
int main()
{
    char cValue = '\0';
    printf("Enter Character\n");
    scanf("%c",&cValue);
    DisplayConvert(cValue);
    return 0;
}