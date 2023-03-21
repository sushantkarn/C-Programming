// C Program to find the sum of even numbers in an array
#include <stdio.h>
int main()
{
    int i, sum = 0, arr[10];
    printf("Enter the number (1-10): ");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
        if (arr[i] % 2 == 0)
        {
            sum += arr[i];
        }
    }
    if (sum == 0)
    {
        printf("There is no even number.\n");
    }

    else
    {
        printf("The sum of even number is: %d", sum);
    }

    return 0;
}