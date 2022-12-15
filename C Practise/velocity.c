// The velocity of an object is given in km/hr. Write a C program to convert the given velocity from km/hr to m/sec
#include<stdio.h>
int main(){
 
 int a;
 printf("Enter the value in km/hr: ");
 scanf("%d", &a);

 int s = (a*1000)/3600;
 printf("The value in m/sec: %d", s);
    return 0;
}