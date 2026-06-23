#include<stdio.h>

void DisplayASCII()
{
    int iCnt = 0;

    printf("Char\tDecimal\tOctal\tHexadecimal\n");
    
    for(iCnt = 0; iCnt <= 127; iCnt++)
    {
        printf("%c\t%d\t%o\t%X\n", iCnt, iCnt, iCnt, iCnt);
    }
}

int main()
{
    DisplayASCII();

    return 0;
}