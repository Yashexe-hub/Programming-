//Write a program which accept range from user and display of all numbers in between that range in reverse order. (Range should contains positive numbers only)

//Input : 23 30
//output :  212

//input : -10 18
//output : invalid range

#include<stdio.h>

void RangeDisplayRev(int iStart, int iEnd)
{
    int iCnt = 0;

    if(iEnd < iStart)
    {
        printf("Invalid Input\n");
        return;
    }
    
    for(iCnt = iEnd;iCnt >= iStart;iCnt--)
    {

        printf("%d ",iCnt);

    }
    printf("\n");

}

int main()
{
    int iValue1 = 0, iValue2 = 0, iRet = 0;

    printf("Enter starting point : ");
    scanf("%d",&iValue1);

    printf("Enter Ending point :");
    scanf("%d",&iValue2);

    RangeDisplayRev(iValue1,iValue2);

    

    return 0;

}