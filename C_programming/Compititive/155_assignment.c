#include <stdio.h>

int CountWhiteSpaces(char *str)
{
    int iCount = 0;

    while(*str != '\0')
    {
        if(*str == ' ')
        {
            iCount++;           
        }
            
        str++;
    }
    return iCount;
}

int main()
{
    char arr[50];
    int iRet = 0;

    printf("Enter string: ");
    scanf("%[^'\n']s", arr);

    iRet = CountWhiteSpaces(arr);

    printf("Number of white spaces are : %d\n",iRet);
    return 0;
}
