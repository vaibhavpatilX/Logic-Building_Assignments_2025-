//Time Complexity = 2N

#include<stdio.h>

int FactorialDiff(int iNo)
{
    int iFact1 = 1,iFact2 = 1;
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }
    for(iCnt = iNo;iCnt >= 2;iCnt--)
    {
        if((iCnt % 2) ==0)
        {
            iFact1 = iCnt * iFact1;
        }
    }

        for(iCnt = iNo;iCnt >= 2;iCnt--)
    {
        if((iCnt % 2) !=0)
        {
            iFact2 = iCnt * iFact2;
        }
    }
    return iFact1-iFact2;
}

int main()
{
    int iValue = 0,iRet = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    iRet = FactorialDiff(iValue);

    printf("Factorial Difference is %d",iRet);

    return 0;
}