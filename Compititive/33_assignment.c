//Write a program to find even Factorial of given number

//Input : 5
//Output : 8 (4 * 2)

#include<stdio.h>

int EvenFactorial(int iNo)
{
    int iCnt = 0;
    int iMulti = 0;

    if (iNo < 0)
    {
        iNo = -iNo;
    }
    iMulti = 1;

    for(iCnt = iNo;iCnt >= 2;iCnt--)
    {
        if((iCnt % 2) == 0)
        {
            iMulti = iMulti * iCnt;
        }
    }

    return iMulti;
}

int main()   
{
    int iValue = 0;
    int iRet = 0;
    
    printf("Enter number : ");
    scanf("%d",&iValue);

    iRet = EvenFactorial(iValue);

    printf("Even Factorial of number is %d",iRet);

    return 0;

}