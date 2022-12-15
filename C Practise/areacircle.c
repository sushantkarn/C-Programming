
// Find the area and circumference of a circle with radius r
#include <stdio.h>
#include <math.h>>
int main()
{
    float r, p, area;
    float pi = 3.14;
    printf("Enter the radiud of circle: ");
    scanf("%f", &r);

    p = 2 * pi * r;
    area = pi * pow(r, 2);

    printf("Area of circle is: %f", area);
    printf("\nCircumference of circle is: %f", p);

    return 0;
}
