// LEARNING ABOUT IF ELSE
#include <stdio.h>
int main()
{
    int age;
    printf("Enter the age: ");
    scanf("%d", &age);

    if (age >= 21 && age <= 80)
    {
        printf("You can drive");
    }
    else
    {
        printf("You can not drive");
    }

    return 0;
}
