#include <stdio.h>
int main()
{
    FILE *ptr;
    ptr = fopen("sample.txt", "r"); // read fie
    ptr = fopen("sample.txt", "w"); // write in file

    return 0;
}