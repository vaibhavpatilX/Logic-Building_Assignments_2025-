#include<stdio.h>

void Pattern(int iRow,int iCol)
{
    int iCnt = 0,jCnt = 0;

    printf("Pattern:\n");
    for(iCnt = 1;iCnt <= iRow;iCnt++)
    {
        for(jCnt = 1;jCnt <= iCol;jCnt++)
        {
            if(jCnt < iCnt)
            {
                printf("\t");
            }
            else
            {
                printf("%d\t",jCnt);
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