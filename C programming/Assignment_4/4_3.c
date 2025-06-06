#include<stdio.h>

void FactRev(int iNo)
{
    int iCnt = 0;
    
    printf("Non Factors of %d : ",iNo);
    for(iCnt = 1;iCnt <= iNo;iCnt++)
    {
        if(iNo % iCnt != 0)
        {
            printf("%d\t",iCnt);
        }
    }
    printf("\n");
    
}

int main()
{
    int iValue = 0;

    printf("Enter number: ");
    scanf("%d",&iValue);

    FactRev(iValue);
    
    return 0;
}