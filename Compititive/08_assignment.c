//Accept one number from user if number is less than 10 then print "hello" ptherwise print "Demo"

#include<stdio.h>

int Display(int iNo)
{
    if(iNo < 10)
    {
        printf("Hello");
    }
    else
    {
        printf("Demo");
    }
}
int main()
{
    int iValue = 0;

    printf("Enter Value : ");
    scanf("%d",&iValue);

    Display(iValue);
    return 0;
}