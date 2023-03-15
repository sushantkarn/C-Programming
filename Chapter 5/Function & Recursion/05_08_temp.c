#include <stdio.h>
float temp(float x);
int main()
{
    float c, f;
    printf("Enter the temperature in celcius: ");
    scanf("%f", &c);
    f = temp(c);
    printf("The temperature in fahrenheit is: %.3f", f);
    return 0;
}
float temp(float x)
{
    float temperture;
    temperture = (x * 1.8) + 32;
    return temperture;
}