//Write a program which accept range from user and display all even numbers in between that range.

//Input : 23 35
//output :  24  26  28 30  32  34 

#include<stdio.h>

void RangeDisplayEven(int iStart, int iEnd)
{
    int iCnt = 0;

    if(iEnd < iStart)
    {
        printf("Invalid Input\n");
        return;
    }

    for(iCnt = iStart;iCnt <= iEnd;iCnt++)
    {
        if((iCnt % 2) == 0)
        {
            printf("%d ",iCnt);
        }
    }
    printf("\n");
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter starting point : ");
    scanf("%d",&iValue1);

    printf("Enter Ending point :");
    scanf("%d",&iValue2);

    RangeDisplayEven(iValue1,iValue2);

    return 0;

}