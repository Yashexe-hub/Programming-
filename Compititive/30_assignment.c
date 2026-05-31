//Write a program which accept number from user and display its table in reverse order.
//Input : 2
//Output : 20 18 16 14 12 10 8 6 4 2

#include<stdio.h>

void TableRev(int iNo)
{
    int iCnt = 0;
    int iTable = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 10; iCnt >= 0; iCnt--)
    {
        iTable = iCnt * iNo;
        printf("%d ",iTable);
    }
    printf("\n");
}
int main()
{
    int iValue = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    TableRev(iValue);

    return 0;
}