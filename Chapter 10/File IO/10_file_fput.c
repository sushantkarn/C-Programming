#include <stdio.h>
int main()
{
    FILE *ptr;
    ptr = fopen("putmycode.txt", "w");
    fputc('c', ptr);
    fclose(ptr);

    return 0;
}