// An object undergoes uniformly accelerated motion. The initial velocity (u) of the object and the acceleration (a) are known. Write a C program to find the velocity (v) of the object after time t
#include <stdio.h>
int main()
{ 
    float u,t,a,v;

printf("Enter initial velocity: ");
scanf("%f", &u);
printf("Enter accleration due to gravety: ");
scanf("%f", &a);
printf("Enter time in sec: ");
scanf("%f", &t);

v = (a * t) + u;
printf("The final velocity is: %f", v);



    return 0;
}