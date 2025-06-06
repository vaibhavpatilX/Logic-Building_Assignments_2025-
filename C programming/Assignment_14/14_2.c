#include<stdio.h>

void Pattern(int iRow,int iCol)
{
    int iCnt = 0,jCnt = 0;
    int iNum = 0,iNum1 = 0;

    for(iCnt = 0;iCnt < iRow;iCnt++)
    {
        iNum = 1;
        iNum1 = 1;
        for(jCnt = 0;jCnt < iCol;jCnt++)
        {
            if((iCnt % 2) == 0)
            {
                printf("%d\t",2*iNum);
                iNum++;
            }
            else
            {
                printf("%d\t",iNum1);
                iNum1 = iNum1+2;
            }
        }
        printf("\n");
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter number of rows and columns: ");
    scanf("%d%d",&iValue1,&iValue2);

    Pattern(iValue1,iValue2);

    return 0;
}