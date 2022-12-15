// A year approximately consists of 3.156 × 10^7 seconds.
// SWrite a C program that accepts your
// Age in years and convert it into equivalent number of seconds
#include<stdio.h>
#include<math.h>
int main(){
    float age,s;
    printf("Enter your age: ");
    scanf("%f", &age);

    s = age * 3.156 * pow(10,7);

    printf("Your age in sec is: %f", s);
    return 0;
}