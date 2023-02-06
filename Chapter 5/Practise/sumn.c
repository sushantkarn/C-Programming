#include <stdio.h>
int calculation(int x);
int main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);
    printf("The sum of number is: %d", calculation(num));

    return 0;
}
int calculation(int x)
{
    int sum = 0;
    for (int i = 1; i <= x; i++)
    {
        sum += i;
    }
    return sum;
}