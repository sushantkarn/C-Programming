#include <stdio.h>
// Sum is a function which takes a and b as a input and return intger value.
// Function prototype decleration (Here a and b are3 parameters)
int sum(int a, int b);
int main()
{
    int c;
    c = sum(2, 4); // Function call (Here 2 and 4 are arguments)
    printf("The value of c is %d", c);

    return 0;
}
int sum(int a, int b) // Function defination
{
    int result;
    result = a + b;
    return result;
}