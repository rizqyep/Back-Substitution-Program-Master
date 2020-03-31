#include <stdio.h>
#include <stdlib.h>

int main()
{
    //matriks
    int a[100][100], i, j, vectorb[10], n, sigma = 0, vectorx[10];
    scanf("%d", &n);
    printf("\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("Input Matrix Row[%d]Column[%d]= ", i + 1, j + 1);
            scanf("%d", &a[i][j]);
        }
    }
    printf("\nMatrix :\n");
    printf("\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    printf("\n\n");

    //vector

    for (i = 0; i < n; i++)
    {
        printf("Input vector B Row-%d =", i + 1);
        scanf("%d", &vectorb[i]);
    }
    printf("\nvector B\n");
    for (i = 0; i < n; i++)
    {
        printf("%d\n", vectorb[i]);
    }
    printf("\n");

    vectorx[n - 1] = vectorb[n - 1] / a[n - 1][n - 1];
    for (i = n - 1; i >= 0; i--)
    {
        for (j = i + 1; j < n; j++)
        {
            sigma += a[i][j] * vectorx[j];
            vectorx[i] = (float)(vectorb[i] - sigma) / a[i][i];
        }
    }
    printf("Vector X : [");
    for (i = 0; i < n; i++)
    {
        printf("%d", vectorx[i]);
        if (i < n - 1)
        {
            printf(",");
        }
    }
    printf("]");

    return 0;
}
