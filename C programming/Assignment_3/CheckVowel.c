#include<stdio.h>

typedef int BOOL ;

# define TRUE 1
# define FALSE 0

BOOL ChkVowel (char cChar) 
{

    if( cChar == 'a' || cChar == 'e' || cChar == 'i' || cChar == 'o' || cChar == 'u' || cChar == 'A' || cChar == 'E' || cChar == 'I' || cChar == 'O' || cChar == 'U')
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

int main()
{
    char cValue = '\0'; 
    BOOL bRet = FALSE;

    printf("Enter character\n");
    scanf("%c", &cValue);

    bRet = ChkVowel(cValue);

    if (bRet == TRUE )
    {
        printf("It is Vowel");
    }
    else
    {
        printf("It is not Vowel");
    }
    return 0;
}
