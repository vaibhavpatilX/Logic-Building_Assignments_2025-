#include<stdio.h>

void Pattern(int iRow,int iCol)
{
    char ch = 'A';
    int iCnt = 0,jCnt = 0;

    for(iCnt = 0;iCnt < iRow;iCnt++,ch++)
    {
        for(jCnt =0;jCnt < iCol;jCnt++)
        {
            printf("%c\t",ch);        
        }

        printf("\n");
    }
    
}

int main()
{
    int iValue1 = 0,iValue2 = 0;

    printf("Enter number of Rows and Columns : ");
    scanf("%d%d",&iValue1,&iValue2);

    Pattern(iValue1,iValue2);

    return 0;
}