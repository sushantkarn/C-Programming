//write a program to calculate area of a circle
#include<stdio.h>
int main(){
    float pi=3.14;
    float radius;
    printf("Enter the radius: ");
    scanf("%f", &radius);

    printf("Area of circle is: %f", pi * radius * radius);
    return 0;
}