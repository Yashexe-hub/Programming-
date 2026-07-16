////////////////////////////////////////////////////////
//
//  Include Required Header Files
//
////////////////////////////////////////////////////////

#include<stdio.h>

/////////////////////////////////////////////////////////
//
//  Function Name:  CalculateTicketPrice
//  Input :         Int
//  Output :        Int
//  Description :   Give ticket price according to age
//  Date :          10/05/2026   
//  Author :        Yash Dhanraj Thakur  
//
////////////////////////////////////////////////////////


//User defined macro
#define AGE_INVALID -1

int CalculateTicketPrice(int iAge)
{
    //Input filter
    if(iAge < 0)
    {
        return AGE_INVALID;
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

////////////////////////////////////////////////////////
//
//  Application to give ticket price according to age
//
////////////////////////////////////////////////////////

int main()
{
    
    int iValue = 0;
    int iRet = 0;


    printf("Please eneter your age to calculate ticket price : \n");
    scanf("%d",&iValue);

    iRet = CalculateTicketPrice(iValue);

    if(iRet == AGE_INVALID)
    {
        printf("Please enter positive age \n");
    }
    else
    {
        printf("Your ticket price will be %d rupees",iRet);
    }

    return 0;
}


////////////////////////////////////////////////////////
//
//  Input  :   15
//  Output :   500
//
////////////////////////////////////////////////////////