#include <stdio.h>
int main()
{
    FILE *ptr;
    int num1, num2;
    ptr = fopen("sushantkarn.txt", "r");
    if (ptr == NULL)
    {
        printf("File does not exist\n");
    }
    else
    {
        fscanf(ptr, "%d", &num1);
        fscanf(ptr, "%d", &num2);
        fclose(ptr);
        printf("The value of num1 is %d\n", num1);
        printf("The value of num2 is %d\n", num2);
    }

    return 0;
}