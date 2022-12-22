// Write a c program to check whether the number is positive, negative or zero

#include <stdio.h>
int main()
{
  int num;
  printf("Enter the number: ");
  scanf("%d", &num);

  if (num > 0)
  {

    printf("It is positive number %d", num);
  }
  else if (num < 0)
  {
    printf("It is negative number %d", num);
  }
  else if (num == 0)
  {
    printf("It is zero");
  }

  return 0;
}