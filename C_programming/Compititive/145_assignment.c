#include <stdio.h>

void Display(int ch)
{
    if(ch >= 1 && ch <= 127)
    {
        printf("Character\tDecimal\tOctal\tHexadecimal\n");
        printf("%c\t\t%d\t%o\t%X\n", ch, ch, ch, ch);
    }
    else
    {
        printf("Invalid ASCII value\n");
    }
}

int main()
{
    char cValue = 0;

    printf("Enter the character: ");
    scanf("%c", &cValue);

    Display(cValue);

    return 0;
}