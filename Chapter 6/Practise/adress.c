#include <stdio.h>
int main()
{
    int a = 5;
    int *ptr;
    ptr = &a;
    printf("The adress of the variable a is: %u\n", ptr);
    printf("The value of the a is: %d", *ptr);

    return 0;
}
