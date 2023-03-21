// C program to solve Towers of Hanoi using recursion
void tower(int, char, char, char);
#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number of sisk: ");
    scanf("%d", &n);
    printf("The sequence of moved in Towers of Hanoi is: ");
    tower(n, 'A', 'C', 'B');

    return 0;
}
void tower(int n, char A, char C, char B)
{
    if (n == 1)
    {
        printf("Move disk 1 from %c to %c\n", A, C);
        return 0;
    }
    else
    {
        tower(n - 1, 'A', 'B', 'C');
        printf("Move the disk %d from %c to %c", n, A, C);
        tower(n - 1, 'B', 'C', 'A');
    }
}