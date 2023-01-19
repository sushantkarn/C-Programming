// vowel consonant
#include <stdio.h>
int main()
{
    char chr, lowercase_vowel, uppercase_vowel;

    printf("Enter the character: ");
    scanf("%c", &chr);

    uppercase_vowel = (chr == 'A' || chr == 'E' || chr == 'I' || chr == 'O' || chr == 'U');
    lowercase_vowel = (chr == 'a' || chr == 'e' || chr == 'i' || chr == 'o' || chr == 'u');

    if (uppercase_vowel || lowercase_vowel)
    {
        printf("It is vowel");
    }
    else
    {
        printf("It is consonant");
    }

    return 0;
}