// write a c program to display the elements in odd index positions (eg: a[1],a[3],a[5]...)and even index positions separately.
#include <stdio.h>

int main()
{
    int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    printf("Elements at even index positions: ");
    for (int i = 1; i < 10; i += 2)
    {
        printf("%d ", a[i]);
    }
    printf("\n");

    printf("Elements at odd index positions: ");
    for (int i = 0; i < 10; i += 2)
    {
        printf("%d ", a[i]);
    }
    printf("\n");

    return 0;
}
