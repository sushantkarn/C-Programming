#include <stdio.h>
int fibonacci(int num);
int main()
{
    int num;
    printf("Enter the number of elements: ");
    scanf("%d", &num);
    printf("The %d element in fibonacci series is: %d", num, fibonacci(num));
    return 0;
}
int fibonacci(int num)
{

    int result;
    for (int i = 0; i <= num; i++)
    {
        result = i + fibonacci(num - 1);
    }
    return result;
}