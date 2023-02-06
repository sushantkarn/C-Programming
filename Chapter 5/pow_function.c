#include <stdio.h>
#include <math.h>
int power(int a, int b);
int main()
{
    int c;
    c = pow(2, 2);
    printf("The value of c is: %d", c);

    return 0;
}
int power(int a, int b)
{
    int result;
    result = pow(a, b);
    return result;
}