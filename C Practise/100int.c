// write a c program to find the sum of first 100 integers!
#include <stdio.h>
int main()
{
    int num, sum = 0;
    for (int i = 1; i <= 100; i++)
    {
        sum += i;        
    }
    printf("The the sum of first 100 integers is: %d", sum);

        return 0;
}