// write a program to print multiples of 5 in a given set a array elements
#include <stdio.h>

int main(void)
{
    int arr[] = {10, 15, 23, 30, 45, 50};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("The multiples of 5 in the array are: ");
    for (int i = 0; i < size; i++)
    {
        if (arr[i] % 5 == 0)
        {
            printf("%d ", arr[i]);
        }
    }
    printf("\n");

    return 0;
}
