#include <stdio.h>
int main()
{
    int arr[10];
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);
    for (int i = 0; i < 10; i++)
    {
        arr[i] = num * (i + 1);
        printf("%d * %d = %d\n", num, i + 1, arr[i]);
    }

    return 0;
}