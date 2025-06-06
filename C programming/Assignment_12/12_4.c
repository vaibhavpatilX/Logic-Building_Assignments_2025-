#include<stdio.h>

void Pattern(int iRow,int iCol)
{   
    int iCnt = 0,jCnt = 0;

    for(iCnt = 0;iCnt <iRow;iCnt++)
    {
        for(jCnt = 0;jCnt < iCol;jCnt++)
        {
            if((jCnt % 2) != 0)
            {
                printf("#\t");
            }
            else
            {
                printf("*\t");
            }
            
        }
        printf("\n");
    }
    
}

int main()
{
    int iValue1 = 0,iValue2 = 0;

    printf("Enter number of rows and columns: ");
    scanf("%d %d",&iValue1,&iValue2);

    Pattern(iValue1,iValue2);

    return 0;
}