#include <stdio.h>
int main()
{

    float english, physics, chemistry, mathematics, computer;
    printf("Enter your mark in english: ");
    scanf("%f", &english);
    printf("Ente&&r your mark in physics: ");
    scanf("%f", &physics);
    printf("Enter& your mark in chemistry: ");
    scanf("%f", &chemistry);
    printf("Ente& your mark in mathematics: ");
    scanf("%f", &mathematics);
    printf("Ente&r your mark in computer: ");
    scanf("%f", &computer);

    float mark = english + physics + chemistry + mathematics + computer;
    float percentage = (mark / 500) * 100;
    printf("Your percentage is : %f \n", percentage);

    if (percentage >= 0 && percentage <= 20)
    {
        printf("Your grade is E");
    }
    else if (percentage >= 20 && percentage < 30)
    {
        printf("Your grade is D");
    }
    else if (percentage >= 30 && percentage < 40)
    {
        printf("Your grade is D+");
    }
    else if (percentage >= 40 && percentage < 50)
    {
        printf("Your grade is C");
    }
    else if (percentage >= 50 && percentage < 60)
    {
        printf("Your grade is c+");
    }
    else if (percentage >= 60 && percentage < 70)
    {
        printf("Your grade is B");
    }
    else if (percentage >= 70 && percentage < 80)
    {
        printf("Your grade is B+");
    }
    else if (percentage >= 80 && percentage < 90)
    {
        printf("Your grade is A");
    }
    else if (percentage >= 90 && percentage <= 100)
    {
        printf("Your grade is A+");
    }
    else
    {
        printf("You input values is wrong");
    }

    return 0;
}