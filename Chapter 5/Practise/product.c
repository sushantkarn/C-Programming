#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter 1st number: ");
    scanf("%d", &a);
    printf("Enter 2nd number: ");
    scanf("%d", &b);
    printf("Enter 3rd number: ");
    scanf("%d", &c);
    printf("The product of three number is: %d", product(a, b, c));

    return 0;
}
int product(int a, int b, int c)
{
    int product;
    product = a * b * c;
    return product;
}