// Write a program to check the student is pass or fail
#include <stdio.h>
int main()
{
    int mark;
    printf("Enter the obtain mark(0-100): ");
    scanf("%d", &mark);

    if (mark <= 30)
    {
        printf("You are fail \n");
    }
    else if (mark > 30 && mark <= 100)
    {
        printf("You are pass \n");
    }
    else
    {
        printf("Wrong input");
        if (mark >= 80)
        {
            printf("You are excellent student");
        }
        else
        {
            printf("You are good student");
        }
    }

    // mark >= 30 ? printf("You are pass") : printf("You are fail");

    return 0;
}