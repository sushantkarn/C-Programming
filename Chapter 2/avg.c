//write a program to print average of 3 numbers
#include<stdio.h>
int main(){
    int x,y,z;
    printf("Enter the numbers: \n");
    scanf("%d %d %d", &x,&y,&z);
    printf("The average of the numbers is %d", (x+y+z)/3);

    return 0;
}