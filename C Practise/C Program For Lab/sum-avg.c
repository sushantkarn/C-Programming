// C program to find a sum and an average of 10 numbers using for loop
#include <stdio.h>

int main()
{
    int sum = 0, avg, n = 10, i, arr[10];

    printf("Enter 10 numbers: ");

    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    avg = sum / n;

    printf("The sum of 10 numbers is: %d\n", sum);
    printf("The average of 10 numbers is: %d\n", avg);

    return 0;
}
