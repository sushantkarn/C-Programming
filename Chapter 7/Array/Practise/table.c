#include <stdio.h>
int main()
{
    int mult[10];
    for (int i = 0; i < 10; i++)
    {
        mult[i] = 5 * (i + 1);
        printf("5 * %d = %d\n", i + 1, mult[i]);
    }

    return 0;
}