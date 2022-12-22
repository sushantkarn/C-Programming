// write a c program to check whether number is odd or even
#include <stdio.h>
int main()
{
  int num;
  printf("Enter the number: ");
  scanf("%d", &num);

  if (num % 2 == 0)
  {
    printf("The number is even number");
  }
  else
  {
    pritf("The number is odd number");
  }

  return 0;
}