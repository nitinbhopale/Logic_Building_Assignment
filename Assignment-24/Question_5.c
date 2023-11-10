/*
    Accept Division of student from user and depends on the division
    display exam timing. There are 4 divisions in school as A,B,C,D.
    Exam of division A at 7 AM,
    Exam of division B at 8:30 AM,
    Exam of division C at 9:20 AM,
    Exam of division D at 10:30 AM
    (Applications should be case insensitive)
*/

#include<stdio.h>

void DisplaySchedule(char ch)
{
    if(ch>='a' && ch<='d')
    {
        ch = ch-32;
    }

    if(ch=='A')
    {
        printf("Exam of division A at 7 AM");
    } 
    else if(ch=='B')
    {
        printf("Exam of division B at 8:30 AM");
    } 
    else if(ch=='C')
    {
        printf("Exam of division C at 9:20 AM");
    } 
    else if(ch=='D')
    {
        printf("Exam of division D at 10:30 AM");
    } 
    else
    {
        printf("Invalid Division");
    }
}
int main()
{
    char cValue = '\0';

    printf("Enter your Division\n");
    scanf("%c",&cValue);

    DisplaySchedule(cValue);
    return 0;
}