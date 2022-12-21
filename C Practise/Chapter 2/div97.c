// Write a program to check whether a number is divisable by 97 or not
#include <stdio.h>
int main()
{
    int num;
    printf("Enter number: ");
    scanf("%d", &num);

    printf("The disivility test is: %d", num % 97);

    return 0;
}