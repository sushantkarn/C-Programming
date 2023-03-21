// C program to convert a decimal number into a binary number using user - defined functions.
void tobinary(int n, int binary[]);
#include <stdio.h>
int main()
{
    int n, binary[50], i;
    printf("Enter the number to convert: ");
    scanf("%d", &n);
    tobinary(n, binary);
    return 0;
}

void tobinary(int n, int binary[])
{
    int i;
    for (i = 0; n > 0; i++)
    {
        binary[i] = n % 2;
        n = n / 2;
    }
    printf("The binary number of given number is: ");
    for (i = i - 1; i >= 0; i--)
    {
        printf("%d", binary[i]);
    }
    printf("\n");
}
