// write a c program to check whether a character is alphabet or not
#include <stdio.h>
int main()
{
  char ch;
  printf("Enter the letter: ");
  scanf("%d", &ch);

  if (ch >= 'A' && ch <= 'Z')
  {
    printf("The character is alphabet");
  }
  else
  {
    printf("The character is nota alphabet ");
  }

  return 0;
}