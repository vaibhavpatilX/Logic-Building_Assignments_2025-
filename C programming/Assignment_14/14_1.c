#include<stdio.h>

void Pattern(int iRow,int iCol)
{
    int iCnt = 0,jCnt= 0;
    int iNum = 1;

    for(iCnt = 0;iCnt < iRow;iCnt++)
    {
        for(jCnt = 1;jCnt <= iCol;jCnt++)
        {
            if(iNum==10)
            {
                iNum=1;
            }

            printf("%d\t",iNum);
            iNum++;
        }
        printf("\n");
    }
}

int main()
{
    int iValue1 = 0,iValue2 = 0;

    printf("Enter number of rows and columns: ");
    scanf("%d%d",&iValue1,&iValue2);

    Pattern(iValue1,iValue2);

    return 0;
}