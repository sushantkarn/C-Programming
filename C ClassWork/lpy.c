// write a c program to check whether a year is leap year or not
#include <stdio.h>
int main()
{
  int num;
  printf("Enter the days on the year: ");
  scanf("%d", &num);

  if (num == 366)
  {
    printf("The year is leap year");
  }
  else
  {
    printf("The year is not leap year");
  }

  return 0;
}