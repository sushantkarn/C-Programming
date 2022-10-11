//write a program to calcualte perimeter of rectangle
#include<stdio.h>
int main(){
    int a,b;
    printf("Enter the length: ");
    scanf("%d", &a);

    printf("Enter the bredth: ");
    scanf("%d", &b);

    printf("Perimeter of rectangle is: %d", 2*(a + b));
    return 0;
}