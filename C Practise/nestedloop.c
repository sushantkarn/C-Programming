// Learning about neastes loop
#include <stdio.h>
int main()
{
    int n;
    printf("Enter any number: ");
    scanf("%d", &n);

    if (n >= 0)
    {
        printf("It is positive no \n");
        if (n % 2 == 0)
        {
            printf("The given number is even number \n");
        }
        else
        {
        }
            printf("The given number is odd number \n");
    }
    else
    {
        printf("It is negative number");
    }

    return 0;
}