#include<stdio.h>

int DollarToINR(int iNo)
{
    int iDollar = 0;

    iDollar = iNo * 70;
    
    return iDollar;
}

int main()
{
    int iValue = 0,iRet = 0;

    printf("Enter number of USD: ");
    scanf("%d",&iValue);

    iRet = DollarToINR(iValue);

    printf("Value of %d USD into INR is %d",iValue,iRet);
    return 0;
}