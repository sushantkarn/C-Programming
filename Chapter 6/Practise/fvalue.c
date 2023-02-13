#include <stdio.h>
void printadd(int x);
void printadd(int x)
{
    printf("The address of variable x is: %u\n", &x);
}
int main()
{
    int i = 5;
    printf("The value of the variable i is: %d\n", i);
    printadd(i);
    printf("The address of the variable i is: %u\n", &i);

    return 0;
}
