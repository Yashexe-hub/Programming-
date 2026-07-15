////////////////////////////////////////////////////////
//
//  Include Required Header Files
//
////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h>

/////////////////////////////////////////////////////////
//
//  Function Name:  CheckEvenOdd
//  Input :         Int
//  Output :        Int
//  Description :   Checks whether the number is even or odd
//  Date :          10/05/2026   
//  Author :        Yash Dhanraj Thakur  
//
////////////////////////////////////////////////////////

bool CheckEvenOdd(int iNo)
{
    int iRemainder = 0;

    if(iNo % 2 == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

////////////////////////////////////////////////////////
//
//  Application to check whether the number is even or odd
//
////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;
    bool bRet = false;
    
    printf("Enter number to check whether it is Odd or Even : ");
    scanf("%d",&iValue);

    bRet = CheckEvenOdd(iValue);

    if(bRet)
    {
        printf("%d is Even \n",iValue);
    }
    else
    {
        printf("%d is Odd \n",iValue);
    }

    return 0;
}

////////////////////////////////////////////////////////
//
//  Input  :   5
//  Output :  odd
//
////////////////////////////////////////////////////////