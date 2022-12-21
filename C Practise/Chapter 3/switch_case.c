// Learning about switch case
#include <stdio.h>
int main()
{
    int num;
    printf("Enter your rating: ");
    scanf("%d", &num);

    switch (num)
    {
    case 1:
        printf("You rating is %d", num);
        break;

    case 2:
        printf("You rating is %d", num);
        break;

    case 3:
        printf("You rating is %d", num);
        break;

    case 4:
        printf("You rating is %d", num);
        break;

    case 5:
        printf("You rating is %d", num);
        break;

    default:
        printf("Invalid rating");
        break;
    }

    return 0;
}