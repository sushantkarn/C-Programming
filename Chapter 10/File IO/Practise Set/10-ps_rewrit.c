#include <stdio.h>
int main()
{
    FILE *ptr1;
    FILE *ptr2;
    ptr1 = fopen("problem.txt", "r");
    ptr1 = fopen("solution.txt", "w");

    char c = fgetc(ptr1);
    while (c != EOF)
    {
        fputc(c, ptr2);
        fputc(c, ptr2);
        c = fgetc(ptr1);
    }
    fclose(ptr1);
    fclose(ptr2);

    return 0;
}