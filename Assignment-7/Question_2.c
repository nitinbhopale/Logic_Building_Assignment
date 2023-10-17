/*
    Accept single digit number from user and print if into word

    Input : 9
    Output : Nine

    Input : -3
    Output : Three
*/

#include<stdio.h>

void Display(int iNo)
{
    if(iNo<0)
    {
        iNo = -iNo;
    }
    if(iNo>10)
    {
        printf("Enter Only Single Digit Number\n");
    } 
    else 
    {
        switch (iNo)
        {
        case 1 :
            printf("One");
            break;
        case 2 :
            printf("Two");
            break;
        case 3 :
            printf("Three");
            break;
        case 4 :
            printf("Four");
            break;
        case 5 :
            printf("Five");
            break;
        case 6 :
            printf("Six");
            break;
        case 7 :
            printf("Seven");
            break;
        case 8 :
            printf("Eight");
            break;
        case 9 :
            printf("Nine");
            break;
        case 0 :
            printf("Zero");
            break;
        }
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number\n");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;

}