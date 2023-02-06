#include <stdio.h>
float average(int a, int b, int c);

int main()
{
    int a = 2, b = 3, c = 4;
    printf("The average value is: %f", average(a, b, c));

    return 0;
}
float average(int a, int b, int c)
{
    float result;
    result = (float)(a + b + c) / 3;
    return result;
}