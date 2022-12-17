// Take a number(n)
// from user &output its cube(n *n *n).

#include <stdio.h>
#include <math.h>
int main()
{
    int n;
    printf("Enetr any number: ");
    scanf("%d", &n);

    int cube = pow(n, 3);

    printf("Cube of number is: %d", cube);

    return 0;
}