#include <stdio.h>
int main()
{
    char ch;
    printf("Enter the alphabet: ");
    scanf("%c", &ch);

    switch (ch)
    {
    case 'A':
        printf("It is the vowel");
        break;
    case 'E':
        printf("It is the vowel");
        break;
    case 'I':
        printf("It is the vowel");
        break;
    case 'O':
        printf("It is the vowel");
        break;
    case 'U':
        printf("It is the vowel");
        break;
    case 'a':
        printf("It is the vowel");
        break;
    case 'e':
        printf("It is the vowel");
        break;
    case 'i':
        printf("It is the vowel");
        break;
    case 'o':
        printf("It is the vowel");
        break;
    case 'u':
        printf("It is the vowel");
        break;

    default:
        printf("It is the consonant");
    }

    return 0;
}