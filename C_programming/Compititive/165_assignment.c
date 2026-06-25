
#include <stdio.h>

void StrCatX(char *src, char *dest)
{
    // Filter
    while(*src != '\0')
    {
          src++;
    }

    *src = ' ';

    while (*dest != '\0')
    {
        src++;

        *src = *dest;
        
        dest++;
    }
    
    
}

int main()
{
    char arr[100] = "Marvellous Infosystems";
    char brr[30] = "Logic Building";

    StrCatX(arr, brr);

    printf("%s\n",arr);
    return 0;
}