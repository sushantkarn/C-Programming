// Addition of number of pointer
#include <stdio.h>
int main()
{
    int i, j, *ptr1, *ptr2;
    i = 6;
    j = 7;

    ptr1 = &i;
    ptr2 = &j;

    printf("The adress of ptr1 is: %u\n", ptr1);
    ptr1++;
    printf("The adress value of ptr1 after increament is: %u\n", ptr1);

    return 0;
}