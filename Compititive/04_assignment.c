//Accept one number and check whether  it is Divisble by 5 or not.

#include<stdio.h>

typedef int BOOL;
#define TRUE 1
#define FALSE 0

int CheckDivisble(int iNo)
{
    if((iNo % 5) == 0 )
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}
int main()
{
    int iValue = 0;
    BOOL bRet = FALSE;

    printf("Enter Number : ");
    scanf("%d",&iValue);

    bRet = CheckDivisble(iValue);

    if(bRet == TRUE)
    {
        printf("Divisble by 5");
    }
    else
    {
        printf("Not Divisble by 5");
    }
    return 0;
}