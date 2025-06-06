#include<stdio.h>

int CountDiff(int iNo)
{
    int iDigit = 0;
    int iEven = 0;
    int iOdd = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }
    
    while(iNo > 0)
    {
        iDigit = iNo % 10;
        if((iDigit % 2 )== 0)
        {
            iEven = iDigit + iEven;
        }
        else
        {
            iOdd = iDigit + iOdd;
        }
        
        iNo = iNo / 10;
    }
    return iEven - iOdd;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number: ");
    scanf("%d",&iValue);

    iRet = CountDiff(iValue);

    printf("\nDifference Between Summation of Even digits And Summation of Odd digits of Number %d are %d\n",iValue,iRet);

    return 0;
}