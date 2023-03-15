#include <stdio.h>
int main()
{
    FILE *ptr;
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);
    ptr = fopen("table.txt", "w");
    for (int i = 0; i < 10; i++)
    {
        fprintf(ptr, "%d * %d = %d\n", num, i + 1, num * (i + 1));
    }
    fclose(ptr);

    return 0;
}