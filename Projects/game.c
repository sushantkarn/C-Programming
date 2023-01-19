// This is rndom rumber gussing gam using c program
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int number, guess, nguess = 1;
    srand(time(0));
    number = rand() % 100 + 1; // This line is to generte the number betweeen 1 -100
    // printf("The number is: %d", number);
    // This loop is to run the program untill the guess is correct
    do
    {
        printf("Enter your guess: \n");
        scanf("%d", &guess);
        if (guess > number)
        {
            printf("Lower number please!\n");
        }
        else if (guess < number)
        {
            printf("Higer number please!\n");
        }
        else
        {
            printf("You guess the correct number in %d attemp\n", nguess);
        }
        nguess++;

    } while (guess != number);

    return 0;
}