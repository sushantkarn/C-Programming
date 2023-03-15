#include <stdio.h>
int main()
{
    FILE *fptr;
    int num = 55;
    fptr = fopen("generate.txt", "w");
    fprintf(fptr, "The value of num is %d", num);
    fclose(fptr);

    return 0;
}