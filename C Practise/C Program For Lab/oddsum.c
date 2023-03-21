// C Program to find the sum of odd numbers in an array
#include <stdio.h>
int main()
{
    int i, sum = 0, arr[10];
    printf("Enter 10 numbers: ");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
        if (arr[i] % 2 != 0)
        {
            sum += arr[i];
        }
    }
    if (sum == 0)
    {
        printf("There is no odd number\n");
    }
    else
    {
        printf("The sum of odd numbers is: %d", sum);
    }

    return 0;
}
