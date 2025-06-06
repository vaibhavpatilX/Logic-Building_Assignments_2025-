/*
Input : iRow = 6 iCol = 6
Output : *  *   *   *   *   *
         *  #   #   #   *   *
         *  #   #   *   $   *
         *  #   *   $   $   *
         *  *   $   $   $   *
         *  *   *   *   *   *
*/

//Incomplete

#include<stdio.h>

void Pattern(int iRow,int iCol)
{
    int iCnt = 0,jCnt = 0;

    printf("Pattern:\n");
    for(iCnt = 1;iCnt <= iRow;iCnt++)
    {
        for(jCnt = iCol;jCnt >= 1;jCnt--)
        {
            if((iCnt == 1) || (jCnt == iCol) || (iCnt == iRow) || (jCnt == 1) || (iCnt == jCnt))
            {
                printf("*\t");
            }
            else if(iCnt >= jCnt)
            {
                printf("$\t");
            }
            else
            {
                printf("#\t");
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