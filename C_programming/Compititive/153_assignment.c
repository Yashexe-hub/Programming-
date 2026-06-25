#include <stdio.h>

void strToggleX(char *str)
{
    while(*str != '\0')
    {
        if(*str >= 'A' && *str <= 'Z')
        {
            *str = (char)(*str+32);
        }
        else if(*str >= 'a' && *str <= 'z')
        {
            *str = (char)(*str-32);
        }
            
        str++;
    }
}

int main()
{
    char arr[50];

    printf("Enter string: ");
    scanf("%[^'\n']s", arr);

    strToggleX(arr);

    printf("Modified string is %s\n",arr);
    return 0;
}