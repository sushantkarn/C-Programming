// Write a C program to find roots of a quadratic equation using switch case.

#include <stdio.h>
#include <math.h>

int main()
{
    int a, b, c;
    float root1, root2, d;
    printf("Enter the coefficients a, b and c: \n");
    scanf("%d %d %d", &a, &b, &c);

    d = b * b - 4 * a * c;
    switch (d > 0)
    {
    case 1:
        root1 = (-b + sqrt(d)) / (2 * a);
        root2 = (-b - sqrt(d)) / (2 * a);
        printf("Two distinct and real roots exists: %.2f and %.2f", root1, root2);
        break;

    case 0:
        root1 = root2 = -b / (2 * a);
        printf("Two equal and real roots exists: %.2f and %.2f", root1, root2);
        break;
    }

    return 0;
}