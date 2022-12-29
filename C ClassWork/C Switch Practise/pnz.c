#include <stdio.h>
int main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);

    switch (num > 0)
    {
    case 1:
        printf("%d is positive number", num);
        break;
    case 0:
        switch (num < 0)
        {
        case 1:
            printf("%d is negative number", num);
            break;
        case 0:
            printf("%d is zero", num);
            break;
        }
    }

    return 0;
}