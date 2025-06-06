//Time Complexity = Can't be calculated

#include<stdio.h>

double PI = 3.14;

double CirCleArea(float fRadius)
{
    if(fRadius < 0)
    {
        fRadius = -fRadius;
    }
    return PI * fRadius * fRadius;
    
}

int main()
{
    float fValue = 0.0;
    double dRet = 0.0;

    printf("Enter radius: ");
    scanf("%f",&fValue);

    dRet = CirCleArea(fValue);

    printf("Area of Circle is : %.4lf\n",dRet);

    return 0;
}