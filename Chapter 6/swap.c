#include <stdio.h>
void swap(int *a, int *b);
int main()
{
    int a = 3, b = 4;
    printf("The value of x and y before swap is %d and %d\n", a, b);
    swap(&a, &b);
    printf("The value of x and y after swap is %d and %d\n", a, b);

    return 0;
}
void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
