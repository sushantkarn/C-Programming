// Learning about ternary operators

#include <stdio.h>
int main()
{
    int age;
    printf("Enter the age: ");
    scanf("%d", &age);

    (age >= 19 && age <= 80) ? printf("You can drive") : printf("You can not drive");

    return 0;
}
