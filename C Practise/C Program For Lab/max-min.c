// C program to find the maximum and minimum elements using a one - dimensional array.
#include <stdio.h>
int main()
{
    int size, max, min, arr[100], i;
    printf("Enter the size of array: ");
    scanf("%d", &size);
    printf("Enter the value of array: ");
    for (i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    min = arr[0];
    max = arr[0];
    for (i = 0; i < size; i++)
    {
        if (arr[i] > max)
        {

            max = arr[i];
        }
        if (arr[i] < min)
        {

            min = arr[i];
        }
    }
    printf("The maximum value is %d\n", max);
    printf("The minimum value is %d\n", min);
    return 0;
}