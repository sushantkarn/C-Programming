// Simple Interest and the Maturity Amount
#include<stdio.h>
int main(){
   float p,t,r,i;
printf("Enter the principle: ");
scanf("%f", &p);
printf("Enter the time: ");
scanf("%f", &t);
printf("Enter the rate: ");
scanf("%f", &r);

i=(p*t*r)/100;
printf("Intest is: %f", i);

float amount = p+i;
printf("\nAmount is: %f", amount);

    return 0;
}