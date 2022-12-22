// write a c program to find maximum between two numbers
#include <stdio.h>
int main()
{
  int a, b, c;
  printf("Enter the first no: ");
  scanf("%d", &a);
  printf("Enter the second no: ");
  scanf("%d", &b);
  printf("Enter the third no: ");
  scanf("%d", &c);

  if (a > b && a > c)
  {
    printf("The greater no is: %d", a);
  }
  else if (b > a && b > c)
  {
    printf("The greater no is: %d", b);
  }
  else
  {
    printf("The greater no is: %d", c);
  }

  return 0;
}
