////Write a program which accept nuumber from user and return summation of all its non factors 

// input : 12
// output: 50

#include<stdio.h>

int SumNonFact(int iNo)
{
    int iCnt = 0;
    int iFact = 0;

    if(iNo <= 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= iNo ;iCnt++)
    {
        if((iNo % iCnt) != 0)
        {
            iFact = iFact + iCnt;
        }
    }
    return iFact;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number : ");
    scanf("%d", &iValue);

    iRet = SumNonFact(iValue);

    printf("%d",iRet);
    return 0;
}