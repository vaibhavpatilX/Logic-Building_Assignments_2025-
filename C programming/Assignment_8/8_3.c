//Time Complexity = Can't be calculated

#include<stdio.h>

int KMtoMeter(int iNo)
{
    return iNo * 1000;
}

int main()
{
    int iValue = 0,iRet = 0;

    printf("Enter distance: ");
    scanf("%d",&iValue);

    iRet = KMtoMeter(iValue);

    printf("%d Kilometre to meter Distance is : %d Meter\n",iValue,iRet);

    return 0;
}