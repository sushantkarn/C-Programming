// C program to perform Linear Search (get numbers of the user’s choice)
#include <stdio.h>

int main()
{
    int size, key, i, arr[100];
    printf("Enter the size of array: ");
    scanf("%d", &size);
    printf("Enter the values of array: ");
    for (i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter the element you want to find: ");
    scanf("%d", &key);
    for (i = 0; i < size; i++)
    {
        if (arr[i] == key)
        {
            printf("The index is found in %d\n", i);
            return 0;
        }
    }
    printf("Index is not in the array\n");
    return 0;
}
