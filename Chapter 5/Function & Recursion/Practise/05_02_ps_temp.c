#include <stdio.h>
float convert(float a);
int main()
{
    int celsius, fahrenheit;
    printf("Enter the temperature in celsius: ");
    scanf("%d", &celsius);
    fahrenheit = convert(celsius);
    printf("The temperatue in fahrenheit is: %.3f", fahrenheit);

    return 0;
}
float convert(float a)
{
    float tempr;
    tempr = (a * 1.8) + 32;
    return tempr;
}