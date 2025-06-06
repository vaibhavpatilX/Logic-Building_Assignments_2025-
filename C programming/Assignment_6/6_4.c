//Time Complexity = O(1) //It is Constant //If a loop iterates a fixed number of times, such as 10 times
#include<stdio.h>

void Table(int iNo)
{
    int iCnt = 1;
    int iTable = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }
    printf("Table of %d is  ",iNo);

    for(iCnt = 1; iCnt <= 10;iCnt++)
    {
        iTable = iNo * iCnt;
        printf("%d\t",iTable);
    }
    printf("\n");
}

int main()
{
    int iValue = 0;

    printf("Enter number: ");
    scanf("%d",&iValue);

    Table(iValue);

    return 0;
}