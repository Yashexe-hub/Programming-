#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int i = 0;
    int j = 0;
    int iNum1 = 1;
    int iNum2 = -1;

    for(i = 1; i <= iRow; i++)
    {
        iNum1 = 1;
        iNum2 = -1;
        for(j = 1; j <= iCol; j++)
        {
           if((i % 2 ) != 0)
           {
            printf("%d\t", iNum1);
            iNum1++;
           }
           else
           {
            printf("%d\t", iNum2);
            iNum2--;
           }
        }
        printf("\n");
    }
}
int main()
{
    int iValue1 = 0;
    int iValue2 = 0;

    printf("Enter number of Rows : ");
    scanf("%d",&iValue1);

    printf("Enter number of columns : ");
    scanf("%d",&iValue2);

    Pattern(iValue1, iValue2);

    return 0;
}