#include <stdio.h>

void StrCpyCap(char *src, char *dest)
{
    // Filter
    while(*src != '\0')
    {
        if(*src >= 'A' && *src <= 'Z')
        {
            *dest = *src;
            dest++;
        }
       src++;
       
    } 
    
}

int main()
{
    char arr[30] = "Marvellous Multi OS";
    char brr[30];   // Empty string

    StrCpyCap(arr, brr);

    printf("%s\n",brr);
    return 0;
}