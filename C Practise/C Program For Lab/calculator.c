// C program to perform various calculator operations.
#include <stdio.h>

int main()
{
    int task, num1, num2;
    do
    {
        printf("Enter your task: \n 1)Addition\n 2)Subtraction\n 3)Multiplication\n 4)Division\n 5)Square\n 6)Modulus\n");
        scanf("%d", &task);
        switch (task)
        {
        case 1:
            printf("Enter the 1st no: ");
            scanf("%d", &num1);
            printf("Enter the 2nd no: ");
            scanf("%d", &num2);
            printf("The sum of two no is:  %d\n", num1 + num2);
            break;
        case 2:
            printf("Enter the 1st no: ");
            scanf("%d", &num1);
            printf("Enter the 2nd no: ");
            scanf("%d", &num2);
            printf("The subtraction of two no is:  %d\n", num1 - num2);
            break;
        case 3:
            printf("Enter the 1st no: ");
            scanf("%d", &num1);
            printf("Enter the 2nd no: ");
            scanf("%d", &num2);
            printf("The multiplication of two no is:  %d\n", num1 * num2);
            break;
        case 4:
            printf("Enter the 1st no: ");
            scanf("%d", &num1);
            printf("Enter the 2nd no: ");
            scanf("%d", &num2);
            if (num2 != 0)
            {
                printf("The division of given no is:  %d\n", num1 / num2);
            }
            else
            {
                printf("Cannot divide by zero\n");
            }
            break;
        case 5:
            printf("Enter the no: ");
            scanf("%d", &num1);
            printf("The square of no is:  %d\n", num1 * num1);
            break;
        case 6:
            printf("Enter the 1st no: ");
            scanf("%d", &num1);
            printf("Enter the 2nd no: ");
            scanf("%d", &num2);
            if (num2 != 0)
            {
                printf("The remainder of given no is:  %d\n", num1 % num2);
            }
            else
            {
                printf("Cannot divide by zero\n");
            }
            break;
        default:
            printf("Invalid task\n");
        }

    } while (task != 5);

    return 0;
}
