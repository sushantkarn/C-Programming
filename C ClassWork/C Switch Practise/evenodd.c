#include <stdio.h>
int main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);

    int even = num % 2 == 0;

    switch (even)
    {
    case 0:
        printf("%d is odd number", num);
        break;
    case 1:
        printf("%d is even number", num);
        break;

    default:
        printf("Wrong input");
    }

    return 0;
}