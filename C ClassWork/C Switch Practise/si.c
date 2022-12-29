#include <stdio.h>
int main()
{
    int p, t, r;
    float i;
    printf("Enter the value of p: ");
    scanf("%d", &p);
    printf("Enter the value of t: ");
    scanf("%d", &t);
    printf("Enter the value of r: ");
    scanf("%d", &r);

    float intrest = (p * t * r) / 100;
    i = (p * t * r) / 100;

    switch (i == intrest)
    {
    case 1:
        printf("Simple Intrest is: %f", intrest);
    }

    return 0;
}