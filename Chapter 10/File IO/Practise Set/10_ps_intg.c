#include <stdio.h>
int main()
{
    FILE *ptr;
    int a, b, c;
    ptr = fopen("ram.txt", "r");
    fscanf(ptr, "%d %d %d", &a, &b, &c);
    printf("The value of a is %d\n", a);
    printf("The value of b is %d\n", b);
    printf("The value of c is %d\n", c);
    fclose(ptr);
    return 0;
}