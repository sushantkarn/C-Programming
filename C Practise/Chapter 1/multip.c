/*
Write a program to calculate the area of circle and
modify the same program to calculate the volume
of cylinder given its radius and hight
*/

#include <stdio.h>
int main()
{
    float r, h;
    float pi = 3.14;
    printf("Enter radius: ");
    scanf("%f", &r);
    printf("Enter height: ");
    scanf("%f", &h);

    float area = pi * r * r;
    float volume = pi * r * r * h;
    printf("Area of circle: %f\n", area);
    printf("Volume of cylinder: %f", volume);

    return 0;
}