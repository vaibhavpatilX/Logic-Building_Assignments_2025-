/*
Input : iRow = 6 iCol = 6
Output :    1   2   3   4   5
            1   2           5
            1       3       5
            1           4   5
            1   2   3   4   5
*/

//Incomplete

#include<stdio.h>

void Pattern(int iRow,int iCol)
{
    int iCnt = 0,jCnt = 0;

    printf("Pattern:\n");
    for(iCnt = 1;iCnt <= iRow;iCnt++)
    {
        for(jCnt = 1;jCnt <= iCol;jCnt++)
        {
            if((iCnt == 1) || (jCnt == 1) || (jCnt == iCol) || (iCnt == iRow) || (iCnt == jCnt))
            {
                printf("%d\t",jCnt);
            }
            else
            {
                printf("\t");
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