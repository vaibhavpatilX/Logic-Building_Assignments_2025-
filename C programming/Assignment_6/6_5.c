//Time Complexity = O(1) //It is Constant //If a loop iterates a fixed number of times, such as 10 times
#include<stdio.h>

void TableRev(int iNo)
{
    int iCnt = 1;
    int iTableRev = 1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }
    printf("Table of %d in Reverse is  ",iNo);

    for(iCnt = 10; iCnt >= 1;iCnt--)
    {
        iTableRev = iNo * iCnt;
        printf("%d\t",iTableRev);
    }
    printf("\n");
}

int main()
{
    int iValue = 0;

    printf("Enter number: ");
    scanf("%d",&iValue);

    TableRev(iValue);

    return 0;
}