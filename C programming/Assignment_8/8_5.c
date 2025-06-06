//Time Complexity = Can't be calculated
//1  square feet = 0.0929
#include<stdio.h>

double SquareMeter(int iValue)
{   
    double dsqFeet = 0.0;
    dsqFeet = iValue * 0.0929;
    return dsqFeet;
    
}

int main()
{
    int iValue = 0.0;
    double dRet = 0.0f;

    printf("Enter area in squarefeet: ");
    scanf("%d",&iValue);

    dRet = SquareMeter(iValue);

    printf("\nSquareFeet to SquareMeter is : %lf \n",dRet);

    return 0;
}