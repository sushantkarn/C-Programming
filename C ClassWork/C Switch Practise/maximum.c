#include <stdio.h>
int main()
{
    int num1, num2;
    printf("Enter the 1st number: ");
    scanf("%d", &num1);
    printf("Enter the 2st number: ");
    scanf("%d", &num2);

    int c = num1 > num2;

    switch (c)
    {
    case 0:
        printf("%d is maximum no", num2);
        break;
    case 1:
        printf("%d is maximum no", num1);
        break;

    default:
        printf("Wrong input");
    }

    return 0;
}