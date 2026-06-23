#include <stdio.h>
#include <stdbool.h>

void Reverse(char *str)
{
    char *start = NULL;

    start = str;

    while(*str != '\0')
    {
        str++;
    }

    str--;
    while(str >= start)
    {
        printf("%c",*str);
        str--;
    }
    printf("\n");
}

int main()
{
    char arr[20];

    printf("Enter string: ");
    scanf("%[^'\n']s", arr);

    Reverse(arr);

    return 0;
}