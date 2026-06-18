#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int i = 0;
    int j = 0;
    int iNum = 1;
    char ch = '\0';

    for(i = 1; i <= iRow; i++)
    {
        ch = 'a';
        iNum = 1;
        for(j = 1; j <= iCol; j++)
        {
           if((i % 2 ) != 0)
           {
            printf("%c\t",ch);
            ch++;
           }
           else
           {
            printf("%d\t", iNum);
            iNum++;
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