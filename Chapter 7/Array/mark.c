#include <stdio.h>
int main()
{
    int mark[5];

    for (int i = 0; i < 5; i++)
    {
        printf("Enter  the mark of student %d: ", i + 1);
        scanf("%d", &mark[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        printf("The mark of student %d is: %d\n", i + 1, mark[i]);
    }

    return 0;
}