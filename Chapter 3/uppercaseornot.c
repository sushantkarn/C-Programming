#include <stdio.h>
int main()
{
    char i;
    printf("Enetr the character: ");
    scanf("%c", &i);

    if (i >= 'A' && i <= 'Z')
    {
        printf("It is upper case");
    }
    else
    {
        printf("It is lower case");
    }
    return 0;
}