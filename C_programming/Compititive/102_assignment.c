#include<stdio.h>

void Pattern(int iNo)
{
    int iCnt = 0;
    char ch = '\0';

    for(iCnt = 5, ch = '#'; iCnt >= 1; iCnt--)
    {
            printf("%d\t",iCnt );
            printf("%c\t",ch);
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