// C program to display whether a given number is Armstrong or not
#include <stdio.h>
#include <math.h>

int main()
{
    int num, cnt, mul = 1, reminder, count = 0, result = 0;
    printf("Enter the number: ");
    scanf("%d", &num);
    int temp = num;
    while (temp != 0)
    {
        temp = temp / 10;
        count++;
    }
    cnt = count;
    temp = num;
    while (temp != 0)
    {
        reminder = temp % 10;
        while (cnt != 0)
        {
            mul = mul * reminder;
            cnt--;
        }
        result = result + mul;
        cnt = count;
        mul = 1;
        temp = temp / 10;
    }
    if (result == num)
    {
        printf("The given number is armstrong number\n");
    }
    else
    {
        printf("The given number is not armstrong number\n");
    }

    return 0;
}