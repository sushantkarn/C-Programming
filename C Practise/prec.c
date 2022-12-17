// Write a program to calculate perimeter of rectangle.
// Take sides, a & b, from the user.

#include <stdio.h>
int main()
{
    int a, b;
    printf("Enter the length: ");
    scanf("%d", &a);
    printf("Enter the bredth: ");
    scanf("%d", &b);

    int p = 2 * (a + b);
    printf("Perimeter of rectangle is: %d", p);

    return 0;
}