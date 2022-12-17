// Write a program to print the average of 3 numbers.
#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter the first no: ");
    scanf("%d", &a);
    printf("Enter the second no: ");
    scanf("%d", &b);
    printf("Enter the third no: ");
    scanf("%d", &c);

    int avg = (a + b + c) / 3;

    printf("Average of three no is : %d", avg);

    return 0;
}