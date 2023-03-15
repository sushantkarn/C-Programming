#include <stdio.h>
int main()
{
    FILE *ptr;
    int c;
    ptr = fopen("getc.txt", "r");
    c = fgetc(ptr);
    while (c != EOF)
    {
        printf("%c", c);
        c = fgetc(ptr);
    }

    return 0;
}