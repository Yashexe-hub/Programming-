// Program which accept distance in kilometre and convert it into meter.
// (1 Kilometre = 1000 Meter)


#include <stdio.h>

#define Meter 1000

int KMtoMeter(int iNo)
{
    int iAns = 0;

    iAns = Meter * iNo;

    return iAns;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter distance : ");
    scanf("%d",&iValue);

    iRet = KMtoMeter(iValue);

    printf("Distance in meters is %d meters",iRet);
    return 0;

}