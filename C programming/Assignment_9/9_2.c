#include<stdio.h>

#define TRUE 1
#define FALSE 0;

typedef int BOOL;

BOOL ChkZero(int iNo)
{
    while(iNo > 0)
    {
        int iDigit = iNo % 10;
        if(iDigit == 0)
        {
            return 1;
            break;
        }
        else
        {
            return FALSE;
        }
        iNo = iNo / 10;
    }
}

int main()
{
    int iValue = 0;
    BOOL bRet = FALSE;

    printf("Enter number: ");
    scanf("%d",&iValue);

    bRet = ChkZero(iValue);

    if(bRet == TRUE)
    {
        printf("\nIt contains Zero");
    }
    else
    {
        printf("\nThere is no Zero");
    }

    return 0;
}