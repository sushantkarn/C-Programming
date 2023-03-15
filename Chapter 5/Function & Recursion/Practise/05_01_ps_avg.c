#include <stdio.h>
int average(int a, int b, int c);
int main()
{
    int num1, num2, num3;
    float avg;
    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the first number: ");
    scanf("%d", &num2);
    printf("Enter the first number: ");
    scanf("%d", &num3);
    avg = average(num1, num2, num3);
    printf("The average value is: %.2f", avg);

    return 0;
}
int average(int a, int b, int c)
{
    float avg;
    avg = (a + b + c) / 3;
    return avg;
}