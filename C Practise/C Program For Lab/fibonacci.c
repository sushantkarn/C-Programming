// C program for performing the Fibonacci series.
#include <stdio.h>
int main()
{
    int i, n, arr[100];
    printf("Enter the size of aray: ");
    scanf("%d", &n);
    printf("Enter the values of array: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("The fibonacci series is: ");
    for (i = 2; i < n; i++)
    {
        arr[i] = arr[i - 2] + arr[i - 1];
    }
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}