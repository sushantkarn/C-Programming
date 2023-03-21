// c program to display even and odd numbers separately between 50 and 100
#include <stdio.h>
int main()
{
    int even = 0, odd = 0;
    printf("Even number between 50 - 100 is: \n");
    for (int i = 50; i <= 100; i++)
    {
        if (i % 2 == 0)
        {
            printf("%d\n", i);
            even++;
        }
    }
    printf("Odd number between 50 - 100 is: \n");
    for (int i = 50; i <= 100; i++)
    {
        if (i % 2 != 0)
        {
            printf("%d\n", i);
            odd++;
        }
    }
    printf("Total number of odd number is: %d\n", odd);
    printf("Total number of even number is: %d\n", even);
    return 0;
}