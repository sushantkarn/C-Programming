#include <stdio.h>
void printTable(int *maulTable, int num, int n)
{
    for (int i = 0; i < n; i++)
    {
        maulTable[i] = num * (i + 1);
        printf("%d * %d = %d\n", num, i + 1, maulTable[i]);
    }
    printf("******************************************************\n\n");
}
int main()
{
    int maulTable[3][10];
    printTable(maulTable[0], 2, 10);
    printTable(maulTable[1], 7, 10);
    printTable(maulTable[2], 9, 10);
    return 0;
}