// C program to find greatest of two numbers using ternary operator
#include <stdio.h>
int main()
{
    int num1, num2, greatest;
    printf("Enter the 1st number: ");
    scanf("%d", &num1);
    printf("Enter the 2nd number: ");
    scanf("%d", &num2);
    (num1 > num2) ? printf("The greates number is %d", num1) : printf("The greatest number is %d", num2);

    return 0;
}