//Time Complexity Cant be Calculated in this Application Due to No Loop in this program

#include<stdio.h>

void Number(int iNo)
{
    if(iNo <= 50)
    {
        printf("small\n");
    }
    else if((iNo > 50) && (iNo <= 100))
    {
        printf("medium\n");
    }
    else
    {
        printf("large\n");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number: ");
    scanf("%d",&iValue);

    Number(iValue);

    return 0;
}