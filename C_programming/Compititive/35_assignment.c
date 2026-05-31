//Write a program to find odd Factorial of given number

//Input : 5
//Output : -7 (8 - 15)

#include<stdio.h>

int FactorialDiff(int iNo)
{
    int iCnt = 0, iMulti1 = 0, iMulti2 = 0, iAns = 0;

    if (iNo < 0)
    {
        iNo = -iNo;
    }
    iMulti1 = 1;

    for(iCnt = iNo;iCnt >= 2;iCnt--)
    {
        if((iCnt % 2) == 0)
        {
            iMulti1 = iMulti1 * iCnt;
        }
    }

    iMulti2 = 1;
    for(iCnt = iNo;iCnt >= 2;iCnt--)
    {
        if((iCnt % 2) != 0)
        {
            iMulti2 = iMulti2 * iCnt;
        }
    }
    iAns = iMulti1 - iMulti2;
    return iAns ;
}

int main()   
{
    int iValue = 0;
    int iRet = 0;
    
    printf("Enter number : ");
    scanf("%d",&iValue);

    iRet = FactorialDiff(iValue);

    printf("Diffrence of both Factorial is %d",iRet);

    return 0;

}