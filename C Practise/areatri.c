// Find area of a triangle whose sides are a, b and c
#include <stdio.h>
#include <math.h>
int main()
{
    float a, b, c, s, area;
    printf("Enter the first side of triangle: ");
    scanf("%f", &a);
    printf("Enter the second side of triangle: ");
    scanf("%f", &b);
    printf("Enter the third side of triangle: ");
    scanf("%f", &c);

    s = (a + b + c) / 2;
    area = sqrt(s * (s - a) * (s - b) * (s - c));

    printf("Area of triangle is: %f", area);

    return 0;
}