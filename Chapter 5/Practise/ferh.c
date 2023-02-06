#include <stdio.h>
float fahren(feh);
int main()
{
    float feh;
    printf("Enter temperature in fahrenheit: ");
    scanf("%f", &feh);
    printf("Temperature in celsius is: %f", fahren(feh));

    return 0;
}
float fahren(feh)
{
    float a, b;
    b = a * (9 / 5) + 32;
    return b;
}