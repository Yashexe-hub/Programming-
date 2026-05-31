//Write a program which accept number from user and didplay its multiplication of factors.

// Input : 12
// Output : 144       (1*2*3*4*6)

#include<stdio.h>

int MultiFact(int iNo)
{
    int iCnt = 0;
    int iMulti = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= (iNo / 2)== 0; iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            iMulti = iMulti * iNo;
        }
    }
    return iMulti;
}
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number : ");
    scanf("%d", &iValue);

    iRet = MultiFact(iValue);

    printf("%d", iRet);

    return 0;
}