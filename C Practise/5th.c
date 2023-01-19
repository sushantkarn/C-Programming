// Write a c program to convert the Fahrenheit in a Celsius and vice versa
#include <stdio.h>
int main()
{
    float Fahrenheit, Celsius;
    printf("Enter the value in Fahrenheit: ");
    scanf("%f", &Fahrenheit);
    Celsius = ((Fahrenheit - 32) * 5) / 9;
    printf("Temperature in Celsius is : %f", Celsius);

    printf("\n Enter the value in Celsius: ");
    scanf("%f", &Celsius);
    Fahrenheit = ((Celsius * 9) / 5) + 32;
    printf("\n\n Temperature in Fahrenheit is : %f", Fahrenheit);

    return (0);
}