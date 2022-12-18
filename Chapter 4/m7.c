// Keep taking number as input untill the user input the multiple of 7
#include <stdio.h>
int main()
{
    int n;
    do
    {
        printf("Enter number: ");
        scanf("%d", &n);
        printf("%d\n", n);

        if (n % 7 == 0) // multiple of seven
        {
            break;
        }

    } while (1);

    printf("Thank you!");

    return 0;
}