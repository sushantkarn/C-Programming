// Find the average of three numbers
#include<stdio.h>
int main(){

    int a,b,c;
    printf("Enter the first number: ");
    scanf("%d", &a);
    printf("Enter the second number: ");
    scanf("%d", &b);
    printf("Enter the third number: ");
    scanf("%d", &c);
  

  int avg =(a+b+c)/3;
  printf("The average of theree number is: %d", avg);


    return 0;
}