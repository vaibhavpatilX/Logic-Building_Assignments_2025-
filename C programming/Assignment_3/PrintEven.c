#include<stdio.h>


void PrintEven(int iNo)
{
    int i = 1;
    int iCnt =1;
    
    while(iCnt<=iNo) 
	{
        if(i %2 == 0)
        {
            iCnt = iCnt+1;
            printf("%d\t",i);
        }
        i++;
    }
}
int main()
{
    int iValue = 0;
    
    printf("Enter number\n");
    scanf("%d",&iValue);

    PrintEven(iValue);
    return 0;
}