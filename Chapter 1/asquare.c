//writ a program to calculate area of square
#include<stdio.h>
int main(){
    float side;
    printf("Enter the side: ");
    scanf("%f", &side);

    printf("The area of square is: %f", side * side);
    return 0;
}