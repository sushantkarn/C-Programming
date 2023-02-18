#include <stdio.h>
#include <math.h>
int areasq(int length, int areasqr);
int areasq(int length, int areasqr)
{

    areasqr = pow(length, 2);
    return areasqr;
}
int main()
{
    int length, area_square;
    printf("Enter the length: ");
    scanf("%d", &length);
    areasq(length, area_square);
    printf("Area of square is %d", area_square);
    return 0;
}