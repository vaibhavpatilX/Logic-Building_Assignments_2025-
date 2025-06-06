//Differece Between Summation of Factors and Non Factors

#include<stdio.h>

int FactDiff(int iNo)
{
    int iCnt = 0;
    int iSum1 = 0;
    int iSum2 = 0;

    for(iCnt = 1;iCnt <= iNo;iCnt++)
    {
        if(iNo % iCnt != 0)
        {
            iSum1 = iSum1 + iCnt;
        }
    }

    for(iCnt = iNo/2;iCnt >= 1;iCnt--)
    {
        if(iNo % iCnt == 0)
        {
            iSum2 = iSum2 + iCnt;
        }
    }
    return iSum2-iSum1; 
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number: ");
    scanf("%d",&iValue);

    iRet = FactDiff(iValue);

    printf("Differece Between Summation of Factors and Non Factors of %d : %d",iValue,iRet);

    return 0;
}