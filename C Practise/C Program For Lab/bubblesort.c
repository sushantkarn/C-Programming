// C program to sort the list of numbers(get numbers of the user’s choice) in ascending order.
#include <stdio.h>
int main()
{
    int i, j, n, temp, arr[100];
    printf("Enter the size of array: ");
    scanf("%d", &n);
    printf("Enter the value of array: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {

                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    printf("The shorted array is: ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}