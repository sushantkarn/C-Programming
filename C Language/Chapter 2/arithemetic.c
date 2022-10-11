//Arithmetic instruction conscpts
#include<stdio.h>
#include<math.h>
int main(){
    int a = 5,b = 2,c = 3;
    int power = pow(a,b);
    printf("The 1st arithmetic operation is: %d \n",a*b-b*c);
    printf("The 2nd arithmetic operation is: %d \n",a*b/b*c);
    printf("The 3rd arithmetic operation is: %d \n",a*(b/b)*c);
    printf("The 4th arithmetic operation is: %d \n",a+b/b*c);
    printf("The 5th arithmetic operation is: %d \n",power);   

return 0;
}
