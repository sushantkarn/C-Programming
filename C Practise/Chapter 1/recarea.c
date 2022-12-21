// Write a c program to calculate area of rectangle
#include <stdio.h>
int main()
{
    int l, b;
    printf("Enter length: ");
    scanf("%d", &l);
    printf("Enter bredth: ");
    scanf("%d", &b);

    int area = l * b;
    printf("Area of rec is: %d", area);

    return 0;
}