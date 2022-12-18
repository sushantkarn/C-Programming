// Print the sum of n natural number
#include <stdio.h>
int main()
{
    int n;
    printf("Enter your desire no: ");
    scanf("%d", &n);

    int sum = 0;
    for (int i = 1, j = n; i <= n && j >= 1; i++, j--)
    {
        sum += i;
        printf("%d \n", j);
    }

    printf("Sum is %d", sum);

    // for (int i = 1; i >= 1; i--)
    // {
    //     printf("%d \n", i);
    // }

    return 0;
}