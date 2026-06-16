#include<stdio.h>

void Pattern(int iNo)
{
    int iCnt = 0;
    char ch1 = '\0';
    char ch2 = '\0';

    for(iCnt = 1, ch1 = '#', ch2 = '*'; iCnt <= iNo; iCnt++)
    {
        printf("%c\t",ch1);
        printf("%d\t",iCnt );
        printf("%c\t",ch2);
    }
}
int main()
{
    int iValue = 0;

    printf("Enter number of elements : ");
    scanf("%d",&iValue);

    Pattern(iValue);

    return 0;
}