#include <stdio.h>
int avg(int a, int b, int c);
int main()
{
    int a, b, c;
    float average;
    printf("Enter the first number: ");
    scanf("%d", &a);
    printf("Enter the second number: ");
    scanf("%d", &b);
    printf("Enter the third number: ");
    scanf("%d", &c);
    average = avg(a, b, c);
    printf("The average of theree number is: %.2f", average);

    return 0;
}
int avg(int a, int b, int c)
{
    float average;
    average = (a + b + c) / 3;
    return average;
}