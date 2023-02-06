#include <stdio.h>
void add(); // Function Declaration
int main()
{
    add(); // Function Calling
    return 0;
}
void add() // Function Definition
{
    int a, b, c;
    printf("\nEnter The Two values:");
    scanf("%d %d", &a, &b);
    c = a + b;
    printf("Addition: %d", c);
}