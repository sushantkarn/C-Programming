// Providing gardes to students
#include <stdio.h>
int main()
{

    int mark;
    printf("Enter your mark : \n");
    scanf("%d", &mark);

    if (mark >= 0 && mark <= 20)
    {
        printf("You grade is E");
    }
    else if (mark >= 20 && mark <= 30)
    {
        printf("You grade is D");
    }
    else if (mark >= 30 && mark <= 40)
    {
        printf("You grade is D+");
    }
    else if (mark >= 40 && mark <= 50)
    {
        printf("You grade is C");
    }
    else if (mark >= 50 && mark <= 60)
    {
        printf("You grade is C+");
    }
    else if (mark >= 60 && mark <= 70)
    {
        printf("You grade is B");
    }
    else if (mark >= 70 && mark <= 80)
    {
        printf("You grade is B+");
    }
    else if (mark >= 80 && mark <= 90)
    {
        printf("You grade is A");
    }
    else if (mark >= 90 && mark <= 100)
    {
        printf("You grade is A+");
    }
    else
    {
        printf("You are fail");
    }

    return 0;
}