//Write a program which accept number from user and return diffrence between summationn of all its factors and non factors

//input : 12
//output : -34 (16-50)

#include<stdio.h>

int FactDiff(int iNo)
{
    int iCnt = 0;
    int iFact = 0;
    int iNonFact = 0;
    int iAns = 0;

    if(iNo <= 0)
    {
        iNo = -iNo;
    }
    for(iCnt = (iNo / 2);iCnt >= 1; iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            iFact = iFact + iCnt;
        }
    }

    for(iCnt = 1; iCnt <= iNo ;iCnt++)
    {
        if((iNo % iCnt) != 0)
        {
            iNonFact = iNonFact + iCnt;
        }
    }
    iAns = iFact - iNonFact;

    return iAns;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number : ");
    scanf("%d", &iValue);

    iRet = FactDiff(iValue);

    printf("%d",iRet);
    return 0;
}