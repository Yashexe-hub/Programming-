#include <stdio.h>

int FirstCharacter(char *str, char ch)
{
    int iCnt = 0;
    int iReturn = -1;

    while(*str != '\0')
    {
        if(*str == ch)
        {
            iReturn = iCnt;  
            break;         
        }
            
        str++;
        iCnt++;
    }
    return iReturn;
}

int main()
{
    char arr[50];
    char cValue = '\0';
    int iRet = 0;

    printf("Enter string: \n");
    scanf("%[^'\n']s", arr);

    printf("Enter the character: \n");
    scanf(" %c",&cValue);

    iRet = FirstCharacter(arr, cValue);

    printf("Character location is %d\n",iRet);
    return 0;
}