// Decrement operator
// --i (Pre decrement)
// i-- (post decrement)
#include <stdio.h>
int main()
{
    int i = 1;
    printf("%d \n", i--); // use then increase
    printf("Decrement to %d", i);

    printf("%d \n", --i); // increase then use
    printf("Decrement to %d", i);
    return 0;
}