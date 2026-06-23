#include <stdio.h>

int Difference(char *str)
{
    int iSmallCount = 0;
    int iCapitalCount = 0;
    int iDifference = 0;

    while (*str != '\0')
    {
        if(*str >= 'A' && *str <= 'Z')
        {
            iCapitalCount++;
        }

        if(*str >= 'a' && *str <= 'z')
        {
            iSmallCount++;
        }

        str++;
    }
    
    iDifference = iSmallCount - iCapitalCount;

    return iDifference;
}

int main()
{
    char arr[20];
    int iRet = 0;

    printf("Enter string: ");
    scanf("%[^'\n']s", arr);

    iRet = Difference(arr);

    printf("Difference between small and capital are :%d\n",iRet);

    return 0;
}