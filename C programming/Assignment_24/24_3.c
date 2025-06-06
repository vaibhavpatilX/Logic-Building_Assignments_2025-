/*
Write a program which accept string from user and count number of
small characters.

Input : “Marvellous”

Output : 9

*/

#include<stdio.h>

int Difference(char *str)
{
    int iCntCap = 0,iCntSmall = 0;

    if(str == NULL)
    {
        printf("Invalid Input..!\n");
        return -1;
    }

    while(*str != '\0')
    {
        if((*str >= 'A') && (*str <= 'Z'))
        {
            iCntCap++;
        }
        else if((*str >= 'a') && (*str <= 'z'))
        {
            iCntSmall++;
        }
        str++;
    }
    return iCntSmall - iCntCap;
}

int main()
{
    char arr[20];
    int iRet = 0;

    printf("Enter String: ");
    scanf("%[^'\n']s",arr);

    iRet = Difference(arr);

    printf("\nDifference between frequency of small and Capital characters are : %d\n",iRet);

    return 0;
}