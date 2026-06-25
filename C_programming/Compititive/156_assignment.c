
#include <stdio.h>
#include <stdbool.h>

bool CheckCharacter(char *str, char ch)
{
    bool bFlag = false;
    
    while(*str != '\0')
    {
        if(*str == ch)
        {
            bFlag = true;           
        }
            
        str++;
    }
    return bFlag;
}

int main()
{
    char arr[50];
    char cValue = '\0';
    bool bRet = false;

    printf("Enter string: \n");
    scanf("%[^'\n']s", arr);

    printf("Enter the character: \n");
    scanf(" %c",&cValue);

    bRet = CheckCharacter(arr, cValue);

    if(bRet == true)
    {
        printf("Character found\n");
    
    }
    else
    {
        printf("Character not found\n");
    }
    return 0;
}