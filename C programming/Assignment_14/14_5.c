#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int iCnt = 0,jCnt = 0,iNum = 0;

    if(iRow <= 0 || iCol <= 0)
    {
        printf("Invalid input! \nPlease enter positive Number.\n");
        return;
    }

    for(iCnt = 0;iCnt < iRow;iCnt++)    
    {
        for(jCnt = 0,iNum = 1 + iCnt;jCnt < iCol;jCnt++,iNum++)
        {
            printf("%d\t",iNum);
         
        }
        //iNum= iNum+1;
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