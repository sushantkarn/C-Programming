// Write a c program to check whether the given number is Armstrong or not.

#include <stdio.h>
#include <math.h>

int main()
{
    int num, originalNum, remainder, n = 0, result = 0;

    printf("Enter an integer: ");
    scanf("%d", &num);

    originalNum = num;

    // Find the number of digits in the number
    while (originalNum != 0)
    {
        originalNum /= 10;
        ++n;
    }

    originalNum = num;

    // Check if the number is an Armstrong number
    while (originalNum != 0)
    {
        remainder = originalNum % 10;
        result += pow(remainder, n);
        originalNum /= 10;
    }

    if (result == num)
    {
        printf("%d is an Armstrong number.\n", num);
    }
    else
    {
        printf("%d is not an Armstrong number.\n", num);
    }

    return 0;
}
