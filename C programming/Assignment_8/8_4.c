//Time Complexity = Can't be calculated
//1 celsius = (Fahrenheit - 32)*(5.0/9.0);

#include<stdio.h>

float FhtoCs(float fTemp)
{
    float fCelsius = 0.0;
    fCelsius = (fTemp - 32)*(5.0/9.0);
    return fCelsius;
    
}

int main()
{
    float fValue = 0.0;
    float dRet = 0.0f;

    printf("Enter temperature in Fahrenheit: ");
    scanf("%f",&fValue);

    dRet = FhtoCs(fValue);

    printf("\nFahrenheit to Celsius Temperature is : %lf \n",dRet);

    return 0;
}