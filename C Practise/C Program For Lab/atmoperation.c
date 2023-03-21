// C program to emulate various operations of an ATM using control structures.
#include <stdio.h>

int main()
{
    int task, deposit, balance = 10000, pin = 1234, pin1, newpin, withdrawal;
    do
    {
        printf("\nEnter the task you want to perform.\n1)Deposit money\n2)Balance Check\n3)Withdraw money\n4)Pin Change\n 5)Exit\n");
        scanf("%d", &task);

        switch (task)
        {
        case 1:
            printf("Enter the pin: ");
            scanf("%d", &pin1);
            if (pin == pin1)
            {
                printf("Enter the amount you want to deposit: ");
                scanf("%d", &deposit);
                printf("You have successfully deposited Rs.%d\n", deposit);
                balance += deposit;
            }
            else
            {
                printf("You entered the wrong pin.\n");
            }
            break;
        case 2:
            printf("Enter the pin: ");
            scanf("%d", &pin1);
            if (pin == pin1)
            {
                printf("Your balance is: %d\n", balance);
            }
            else
            {
                printf("You entered the wrong pin.\n");
            }
            break;
        case 3:
            printf("Enter the pin: ");
            scanf("%d", &pin1);
            if (pin == pin1)
            {
                printf("Enter the amount you want to withdraw: ");
                scanf("%d", &withdrawal);
                if (withdrawal <= balance)
                {
                    printf("You have successfully withdrawn Rs.%d\n", withdrawal);
                    balance -= withdrawal;
                }
                else
                {
                    printf("Insufficient balance.\n");
                }
            }
            else
            {
                printf("You entered the wrong pin.\n");
            }
            break;
        case 4:
            printf("Enter the pin: ");
            scanf("%d", &pin1);
            if (pin == pin1)
            {
                printf("Enter your new pin: ");
                scanf("%d", &newpin);
                pin = newpin;
                printf("Your PIN has been changed successfully.\n");
            }
            else
            {
                printf("You entered the wrong pin.\n");
            }
            break;
        case 5:
            printf("Exiting...\n");
            break;
        default:
            printf("Wrong value.\n");
            break;
        }
    } while (task != 5);

    return 0;
}
