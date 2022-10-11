//Take a number from user & output its cube
#include<stdio.h>
int main(){
    float number;
    printf("Enter any random number: ");
    scanf("%f", &number);

    printf("The cube of your number is %f", number*number*number);
    return 0;
}