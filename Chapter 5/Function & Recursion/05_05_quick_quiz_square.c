#include <stdio.h>
#include <math.h>
int main()
{
    int length;
    printf("Enter the length: ");
    scanf("%d", &length);
    printf("The area of square is %.2f", pow(length, 2));

    return 0;
}
