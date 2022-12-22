// write a c program to check whether number is divisible by 5  and 11 or not
#include <stdio.h>
int main()
{
  int num;
  printf("Enter the number: ");
  scanf("%d", &num);

  if (num % 5 == 0)
  {
    printf("The number is divisible by 5");
  }
  else if (num % 11 == 0)
  {
    printf("The number is divisible by 11");
  }
  else
  {

    printf("It is not divisable by 5 nor with 11");
  }

  return 0;
}