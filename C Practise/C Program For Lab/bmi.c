// C program to calculate the body mass index using the height & weight of 4 members using a two - dimensional array.

#include <stdio.h>

int main()
{
    int i, j;
    float height[4][4], weight[4][4], bmi[4][4];
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            printf("Enter the height (in meter) for friend %d: ", j + 1);
            scanf("%f", &height[i][j]);
            printf("Enter the weight (in KG) for friend %d: ", j + 1);
            scanf("%f", &weight[i][j]);
            bmi[i][j] = weight[i][j] / (height[i][j] * height[i][j]);
            printf("The body mass index of friend %d is: %f\n", j + 1, bmi[i][j]);
        }
    }

    return 0;
}
