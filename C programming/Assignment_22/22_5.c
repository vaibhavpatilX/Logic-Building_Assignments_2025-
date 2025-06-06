/*
Accept division of student from user and depends on the division
display exam timing. There are 4 divisions in school as A,B,C,D. Exam
of division A at 7 AM, B at 8.30 AM, C at 9.20 AM and D at 10.30 AM.
(Application should be case insensitive)

Input : C
Output : Your exam at 9.20 AM
Input : d
Output : Your exam at 10.30 AM

*/

#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

void DisplaySchedule(char ch)
{
    printf("Your Exam at ");
    if(ch =='a' || ch == 'A') 
    {
        printf("7 AM\n");
    }
    else if(ch =='b' || ch == 'B') 
    {
        printf("8:30 AM\n");
    }
    else if(ch =='c' || ch == 'C') 
    {
        printf("9.20 AM\n");
    }
    else if(ch =='d' || ch == 'D') 
    {
        printf("10.30 AM\n");
    }
    else
    {
        printf("Invalid Division!\n");
    }
}

int main()
{
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter the Division: ");
    scanf(" %c",&cValue);

    DisplaySchedule(cValue);

    return 0;
}