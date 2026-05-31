// Program which accept area in square feet and convert it into square meter.
// (1 square feet = 0.0929 Square meter)
//
// Input: 5
// Output: 0.464515

#include <stdio.h>

#define SquareFeet 0.0929

double SquareMeter(int iValue)
{
    
    double dAns = 0.0;

    if(iValue < 0)
    {
        iValue = -iValue;
    }

    dAns = SquareFeet * iValue;

    return dAns ;
}

int main()
{
    int iValue = 0;
    double dRet = 0.0;

    printf("Enter area in Square feet : ");
    scanf("%d",&iValue);

    dRet = SquareMeter(iValue);

    if(dRet == -1)
    {
        printf("Invalid Input\n");
    }
    else
    {
        printf("Area in square meter : %lf\n", dRet);
    }

    return 0;

}