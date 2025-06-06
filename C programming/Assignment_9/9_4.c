#include<stdio.h>

int CountFour(int iNo)
{
    int iCnt = 0;

    while(iNo > 0)
    {
        int iDigit = iNo % 10;
        if(iDigit == 4)
        {
            iCnt++;
        }
        iNo = iNo / 10;
    }
    return iCnt;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number: ");
    scanf("%d",&iValue);

    iRet = CountFour(iValue);

    printf("Frequency of 4 in the number %d is %d times\n",iValue,iRet);

    return 0;
}