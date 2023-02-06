#include <stdio.h>
#include <math.h>
void area();
int main()
{
    int side;
    printf("Enter the side: ");
    scanf("%d", &side);
    printf("The value os area is : %f", pow(side, 2));

    return 0;
}
