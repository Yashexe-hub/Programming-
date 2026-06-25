#include <stdio.h>

void StrRevX(char *str)
{
    char *start = NULL;
    char *end = NULL;
    int iTemp = 0;

    start = str;
    while(*str != '\0')
    {
       str++;
    }

    str--;
    end = str;
    
    while(start < end)
    {
       iTemp = *start;
       *start = *end;
       *end = iTemp;

       start++;
       end--;
    }
    
}

int main()
{
    char arr[50];

    printf("Enter string: \n");
    scanf("%[^'\n']s", arr);
    
    StrRevX(arr);

    printf("Modified string is %s\n",arr);
    return 0;
}
