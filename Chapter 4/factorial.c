// Print the factorial of number n
#include <stdio.h>
int main()
{
    int n;
    printf("Enter number: ");
    scanf("%d", &n);

    int factor = 1;
    for (int i = 1; i <= n; i++)
    {
        factor = factor * i;
    }

    printf("%d", factor);
    return 0;
}