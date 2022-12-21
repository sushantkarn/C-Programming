/*
Write a program to calcualte the simple intrest
when princaple, rate and time should be taken
from the user
*/
#include <stdio.h>
int main()
{
    int p, t, r;
    printf("Enter princaple: ");
    scanf("%d", &p);
    printf("Enter time: ");
    scanf("%d", &t);
    printf("Enter rate: ");
    scanf("%d", &r);

    int i = (p * t * r) / 100;
    printf("Simple intrest is: %d", i);

    return 0;
}