// write a c program to display the sum of odd and even element  in array
#include <stdio.h>

int main()
{
    int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int odd_sum = 0, even_sum = 0;

    // Calculate the sum of the odd elements
    for (int i = 1; i < 10; i += 2)
    {
        odd_sum += a[i];
    }

    // Calculate the sum of the even elements
    for (int i = 0; i < 10; i += 2)
    {
        even_sum += a[i];
    }

    // Print the results
    printf("Sum of odd elements: %d\n", odd_sum);
    printf("Sum of even elements: %d\n", even_sum);

    return 0;
}
