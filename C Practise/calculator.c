// develope the calculator program
#include <stdio.h>
int main()
{
    int calculator, num, num1, num2;
    printf("Enter the operation you want to perform 1. Addition \n  2. Subtract \n 3. Multiplication \n 4. Division \n 5. square \n ");
    scanf("%d", &calculator);

    switch (calculator)
    {
    case 1:
        printf("Enter the first number: ");
        scanf("%d", &num1);
        printf("Enter the second number : ");
        scanf("%d", &num2);
        printf("Enter the sum is : %d", num1 + num2);
        break;
    case 2:
        printf("Enter the first number : ");
        scanf("%d", &num1);
        printf("Enter the second number : ");
        scanf("%d", &num2);
        printf("Enter the subtraction is : %d", num1 - num2);
        break;
    case 3:
        printf("Enter the first number : ");
        scanf("%d", &num1);
        printf("Enter the second number : ");
        scanf("%d", &num2);
        printf("Enter the multiplication is : %d", num1 * num2);
        break;
    case 4:
        printf("Enter the first number : ");
        scanf("%d", &num1);
        printf("Enter the second number : ");
        scanf("%d", &num2);
        printf("Enter the division is : %d", num1 / num2);
        break;
    case 5:
        printf("Enter the number : ");
        scanf("%d", &num);
        printf("Enter the square of no is : %d", num * num);
        break;

    default:
        printf("Invalid input");
    }

    return 0;
}