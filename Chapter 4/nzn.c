// Print the number from 0 to 9 if n is given by user
#include <stdio.h>
int main()
{
    int n;
    printf("Enter your desire no: ");
    scanf("%d", &n);

    int i = 0;
    while (i <= n)
    {
        printf("%d \n", i);
        i++;
    }

    return 0;
}