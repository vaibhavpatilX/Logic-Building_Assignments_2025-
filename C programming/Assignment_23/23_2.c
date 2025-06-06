/*
Accept character from user. If character is small display its
corresponding capital character, and if it small then display its
corresponding capital. In other cases display as it is.

Input : Q
Output : q

Input : m
Output : M

Input : 4
Output : 4

Input : %
Output : %

*/

#include<stdio.h>

void Display(char ch)
{
    if((ch > 'A') && (ch < 'Z') )
    {
        ch = ch + 32;
        printf("%c\n",ch);
    }
    else if((ch > 'a') && (ch < 'z') )
    {
        ch = ch - 32;
        printf("%c\n",ch);
    }
    else
    {
        printf("%c",ch);
    }
}

int main()
{
    char cValue = '\0';

    printf("Enter the character: ");
    scanf("%c",&cValue);

    Display(cValue);

    return 0;
}