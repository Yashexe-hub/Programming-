//Write a program to find odd Factorial of given number

//Input : 5
//Output : 15 (5 * 3 * 1)

#include<stdio.h>

int OddFactorial(int iNo)
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
        if((iCnt % 2) != 0)
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

    iRet = OddFactorial(iValue);

    printf("Odd Factorial of number is %d",iRet);

    return 0;

}