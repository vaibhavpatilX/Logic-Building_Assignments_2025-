#include<stdio.h>

void Pattern(int iRow,int iCol)
{
    char ch1 = 'A',ch2 = 'a';
    int iCnt = 0,jCnt = 0;

    for(iCnt = 0;iCnt < iRow;iCnt++)
    {
        for(jCnt =0,ch1 = 'A',ch2 = 'a';jCnt < iCol;jCnt++,ch2++,ch1++)
        {
            
            if((iCnt % 2) == 0)
            {
                printf("%c\t",ch1);
            }
            else
            {
                printf("%c\t",ch2);
            }
        
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