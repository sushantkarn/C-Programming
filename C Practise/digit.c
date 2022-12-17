// // Write a program to check if given no is digit or not .
#include <stdio.h>
int main()
{
    char ch;
    printf("Enetr the value: ");
    scanf("%c", &ch);

    if (ch >= '0' && ch <= '9')
    {
        printf("The given input is %c digit", ch);
    }
    else
    {
        printf("The given input is %c character", ch);
    }
    return 0;
}
