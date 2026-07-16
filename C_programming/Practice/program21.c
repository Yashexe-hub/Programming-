#include<stdio.h>

int CalculateTicketPrice(int iAge)
{
    //Input filter
    if(iAge < 0)
    {

        return -1;
    }
    if(iAge >= 0 && iAge <=5)
    {
        return 0;
    }
    else if (iAge >= 6 && iAge <= 18)
    {
        return 500;
    }
    else if ( iAge >= 19 && iAge <=51)
    {
        return 900;
    }
    else
    {
        return 500;
    }
    
}

int main()
{
    
    int iValue = 0;
    int iRet = 0;


    printf("Please eneter your age to calculate ticket price : \n");
    scanf("%d",&iValue);

    iRet = CalculateTicketPrice(iValue);

    printf("Your ticket price will be %d rupees",iRet);

    return 0;
}