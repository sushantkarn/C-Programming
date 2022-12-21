// Create a program to add two no in c
#include <stdio.h>
int main()
{
    int a, b;
    printf("Enter first no: ");
    scanf("%d", &a);
    printf("Enter second no: ");
    scanf("%d", &b);

    int add = a + b;
    printf("%d", add);

    return 0;
}