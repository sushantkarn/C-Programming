#include <stdio.h>
int main()
{
    int i = 37;
    int *ptr = &i;
    printf("The value of i is: %u\n", ptr);
    ptr++;
    printf("The value of i is: %u\n", ptr);
    ptr--;
    printf("The value of i is: %u\n", ptr);
    ptr = ptr + 1;
    printf("The value of i is: %u\n", ptr);
    ptr = ptr + 2;
    printf("The value of i is: %u\n", ptr);

    return 0;
}