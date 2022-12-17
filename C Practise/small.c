// Write a program to print the smallest number of two.
#include <stdio.h>
int main()
{
    int a, b;
    printf("Enter the first number: ");
    scanf("%d", &a);
    printf("Enter the second number: ");
    scanf("%d", &b);

    if (a > b)
    {
        printf("The smallest number is %d", b);
    }
    else
    {
        printf("The smallest number is %d", a);
    }

    return 0;
}