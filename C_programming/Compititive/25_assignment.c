// Write a Program which accept N and print 5 multiples of N.
// Input: 4
// Output: 4 8 12 16 20

#include <stdio.h>

void MultipleDisplay(int iNo)
{
    int iCnt = 0;
    int iMulti = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1;iCnt <= 5;iCnt++)
    {
        iMulti = iCnt * iNo;
        printf("%d ", iMulti);
    }
    printf("\n");
}

int main()
{
    int iValue = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    MultipleDisplay(iValue);

    return 0;
}