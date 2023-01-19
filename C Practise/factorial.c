// write a c program to find the facteriol of a number
#include <stdio.h>
int main()
{
    int num, fact = 1;
    printf("Enter the number: ");
    scanf("%d", &num);

    int i = 1;
    while (i <= num)
    {
        fact = i * fact;
        i++;
    }

    printf("The factorail of number %d is: %d", num, fact);
    return 0;
}