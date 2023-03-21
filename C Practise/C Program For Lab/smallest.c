// C program to find the smallest of three numbers using functions
int smallest(int x, int y, int z);
#include <stdio.h>
int main()
{
    int num1, num2, num3, num;
    printf("Enter the 1st number: ");
    scanf("%d", &num1);
    printf("Enter the 2nd number: ");
    scanf("%d", &num2);
    printf("Enter the 3rd number: ");
    scanf("%d", &num3);
    num = smallest(num1, num2, num3);
    printf("The smallest number is: %d", num);

    return 0;
}
int smallest(int x, int y, int z)
{

    if (x < y && x < z)
    {

        return x;
    }
    else if (y < x && y < z)
    {
        return y;
    }
    else if (z < x && z < y)
    {
        return z;
    }
}