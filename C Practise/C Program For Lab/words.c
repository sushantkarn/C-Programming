// C program to find the total number of words in a sentence using built - in functions.
#include <stdio.h>
#include <string.h>
int main()
{
    int i, toatalword = 0;
    char str[100];
    printf("Enter any string: ");
    gets(str);
    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == ' ' || str[i] == '\n' || str[i] == '\t')
        {
            toatalword++;
        }
    }
    printf("Total number of words is: %d", toatalword + 1);

    return 0;
}