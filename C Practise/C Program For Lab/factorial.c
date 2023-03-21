// C program to display the factorial of a given number using recursive functions
#include <stdio.h>

int factorial(int x);

int main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);
    printf("The factorial of %d is %d\n", num, factorial(num));

    return 0;
}

int factorial(int x)
{
    printf("Calling factorial(%d)\n", x);
    if (x == 1 || x == 0)
    {
        return 1;
    }
    else
    {
        return x * factorial(x - 1);
    }
}
