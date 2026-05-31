//Write a program which accept number from user and display below pattern

//Input : 5
//Output : * * * * * # # # # # 

#include<stdio.h>

void Display(int iNo)
{
    int iCnt1 = 0;
    int iCnt2 = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt1 = 0; iCnt1 < iNo; iCnt1++)
    {
        printf("* ");
    }

    for(iCnt2 = 0; iCnt2 < iNo; iCnt2++)
    {
        printf("# ");
    }

}

int main()
{
    int iValue = 0;
    
    printf("Enter number : ");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;

}