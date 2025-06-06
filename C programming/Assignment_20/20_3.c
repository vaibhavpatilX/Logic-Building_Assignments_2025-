/*
Accept N numbers from user and accept one another number as NO ,
return index of last occurrence of that NO.

Input : N : 6
NO: 66
Elements :85 66 3 66 93 88

Output : 3

Input : N : 6
NO: 93
Elements :85 66 3 66 93 88

Output : 4

Input : N : 6
NO: 12
Elements :85 11 3 15 11 111

Output : -1
*/


#include<stdio.h>
#include<stdlib.h>

int LastOcc(int Arr[],int iLength,int iNo)
{
    int iCnt = 0,iCount = -1;

    for(iCnt = 0;iCnt < iLength;iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            iCount = iCnt;
        }   
    }
    return iCount;
    
}

int main()
{
    int iSize = 0,iCnt = 0,iValue = 0,iRet = 0;

    int *p = NULL;

    printf("Enter number of elements: ");
    scanf("%d",&iSize);

    printf("Enter the number: ");
    scanf("%d",&iValue);

    p = (int*) malloc(iSize * sizeof(int));

    if(p == NULL)
    {
        printf("Unable to allocate memory");
        return -1;
    }

    printf("Enter %d elements: \n",iSize);

    for(iCnt = 0;iCnt < iSize;iCnt++)
    {
        printf("Enter element : %d : ",iCnt+1);
        scanf("%d",&p[iCnt]);
    }
    
    iRet = LastOcc(p,iSize,iValue);

    if(iRet == -1)
    {
        printf("\nThere is no such %d number\n",iValue);
    }
    else
    {
        printf("\nLast Occurence of %d number is %d\n",iValue,iRet);
    }
    
    free(p);
    return 0;
}