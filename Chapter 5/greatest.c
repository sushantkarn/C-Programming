#include <stdio.h>
void greates(); // function decleration
int main()
{
    greates(); // function call
    return 0;
}
void greates() // function decleration
{
    int a, b;
    printf("Enter the no: ");
    scanf("%d %d", &a, &b);
    if (a > b)
    {
        printf("%d is a greatest number", a);
    }
    else
    {
        printf("%d is a greatest number", b);
    }
}