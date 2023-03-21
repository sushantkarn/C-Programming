// C program to capitalize the first word of each sentence using builtin functions
#include <stdio.h>
#include <string.h>
int main()
{
    char str[100];
    int length = 0;
    int i;
    printf("Enter the string: ");
    gets(str);
    length = strlen(str);
    for (i = 0; i < length; i++)
    {
        if (i == 0 || i == (length - 1))
        {
            str[i] = toupper(str[i]);
        }
        else if (str[i] == ' ')
        {
            str[i - 1] = toupper(str[i - 1]);
            str[i + 1] = toupper(str[i + 1]);
        }
    }
    printf("String after capitilized: %s", str);

    return 0;
}
