#include <stdio.h>

void DisplayDigits(char *str)
{
    while(*str != '\0')
    {
        if(*str >= '0' && *str <= '9')
        {
            printf("%c",*str);   
        }
            
        str++;
    }
    printf("\n");
}

int main()
{
    char arr[50];

    printf("Enter string: ");
    scanf("%[^'\n']s", arr);

    DisplayDigits(arr);

    return 0;
}
