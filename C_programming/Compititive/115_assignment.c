#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int iCnt = 0;
    int i = 0;
    int j = 0;
    int iNum = 0;

    for(i = 1, iNum = 1; i <= iRow; i++)
    {
        for(j = 1; j <= iCol; j++, iNum++)
        {
            printf("%d\t",iNum);
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