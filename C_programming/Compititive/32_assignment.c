//Write a program which accept number from user and display below pattern

//Input : 5
//Output : * * * * * # # # # # 

#include<stdio.h>

int DollartoINR(int iNo)
{
    int iRupee = 70;
    int iAns = 0;
    
    iAns = iRupee * iNo;
}

int main()
{
    int iValue = 0;
    int iRet = 0;
    
    printf("Enter number of USD : ");
    scanf("%d",&iValue);

    iRet = DollartoINR(iValue);

    printf("Value in INR is %d",iRet);

    return 0;

}