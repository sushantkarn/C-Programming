// C program to perform the addition of two matrices
#include <stdio.h>
int main()
{
    int i, j, matx1[3][3], matx2[3][3], sum[3][3];
    printf("Enter the value of 1st matrix: ");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &matx1[i][j]);
        }
        printf("\n");
    }
    printf("Enter the value of 2nd matrix: ");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &matx2[i][j]);
        }
        printf("\n");
    }
    printf("The sum of two matrix is: \n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            sum[i][j] = matx1[i][j] + matx2[i][j];
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }

    return 0;
}