#include <stdio.h>
void display(); // Function prototype
int main()
{
    printf("Initializing display\n");
    display(); // Function Call
    printf("Final display\n");
    return 0;
}
void display() // Function defination
{
    printf("I am working in a function\n");
}