// To check the given no is natural no
#include <stdio.h>
int main()
{
    int n;
    printf("Enter any number: ");
    scanf("%d", &n);

    n >= 1 ? printf("It is natural no") : printf("It is not natural no");

    return 0;
}