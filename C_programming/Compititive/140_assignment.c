#include<stdio.h>

void DisplaySchedule(char chDiv)
{
    if(chDiv == 'A')
    {
        printf("Your exam at 7am ");
    }
    else if(chDiv == 'B')
    {
        printf("Your exam at 8:30am ");
    }
    else if(chDiv == 'C')
    {
        printf("Your exam at 9:20am ");
    }
    else
    {
        printf("Your exam at 10:30am ");
    }
}

int main()
{
    char cValue = '\0';

    printf("Enter the character : ");
    scanf("%c", &cValue);

    DisplaySchedule(cValue);

    return 0;
}