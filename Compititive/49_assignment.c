//Write a program which accept range from user and return addition of all even  numbers in between that range. (Range should contains positive numbers only)

//Input : 23 30
//output :  108

//input : -10 2
//output : invalid range

#include<stdio.h>

int RangeEvenSum(int iStart, int iEnd)
{
    int iCnt = 0;
    int iAns = 0;

    if(iEnd < iStart)
    {
        printf("Invalid Input\n");
        return 1;
    }
    
    for(iCnt = iStart;iCnt <= iEnd;iCnt++)
    {
        if((iCnt % 2) == 0)
        {
            iAns = iAns + iCnt;
        }

    }
    printf("\n");

    return iAns;
}

int main()
{
    int iValue1 = 0, iValue2 = 0, iRet = 0;

    printf("Enter starting point : ");
    scanf("%d",&iValue1);

    printf("Enter Ending point :");
    scanf("%d",&iValue2);

    iRet = RangeEvenSum(iValue1,iValue2);

    printf("Addition is %d",iRet);


    return 0;

}