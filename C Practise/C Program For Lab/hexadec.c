// C program to convert a decimal number into a hexadecimal number using user - defined functions
void tohexa(int n, char hexa[]);
#include <stdio.h>
int main()
{
    int n;
    char hexa[50];
    printf("Enter the number to convert: ");
    scanf("%d", &n);
    tohexa(n, hexa);
    return 0;
}

void tohexa(int n, char hexa[])
{
    int i = 0, reminder, quotient = n, j = 0;
    while (quotient != 0)
    {
        reminder = quotient % 16;
        if (reminder < 10)
        {
            hexa[j++] = 48 + reminder;
        }
        else
        {
            hexa[j++] = 55 + reminder;
        }
        quotient = quotient / 16;
    }
    printf("The hexadecimal number of given number is: ");
    for (i = j - 1; i >= 0; i--)
    {
        printf("%c", hexa[i]);
    }
    printf("\n");
}
