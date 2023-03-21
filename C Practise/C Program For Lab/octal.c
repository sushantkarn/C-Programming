// C program to convert a decimal number into an octal number using user - defined functions.
void tooctal(int n, int octal[]);
#include <stdio.h>
int main()
{
    int n, octal[50];
    printf("Enter the number wanted to convert: ");
    scanf("%d", &n);
    tooctal(n, octal);

    return 0;
}

void tooctal(int n, int octal[])
{
    int i;
    for (i = 0; n > 0; i++)
    {
        octal[i] = n % 8;
        n = n / 8;
    }
    printf("The octal number of given number is: ");
    for (i = i - 1; i >= 0; i--)
    {
        printf("%d", octal[i]);
    }
    printf("\n");
}