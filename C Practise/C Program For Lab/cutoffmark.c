// C program to calculate the medical and engineering cut-off marks for a student.
#include <stdio.h>
int main()
{
    int physics, chemistry, mathematic, biology;
    printf("Enter the  mark in physsics: ");
    scanf("%d", &physics);
    printf("Enter the  mark in chemistry: ");
    scanf("%d", &chemistry);
    printf("Enter the  mark in mathematic: ");
    scanf("%d", &mathematic);
    printf("Enter the  mark in biology: ");
    scanf("%d", &biology);

    float engineering_cutoff = (physics + chemistry + mathematic) / 3;
    float medical_cutoff = (physics + chemistry + biology) / 3;

    printf("Engineering cutoff is: %.2f", engineering_cutoff);
    printf("Medical cutoff is: %.2f", medical_cutoff);

    return 0;
}
