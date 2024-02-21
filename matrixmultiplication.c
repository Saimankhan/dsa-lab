#include <stdio.h>

int main()
{
    int m, n, o, p;
    printf("Enter the rows and columns of the first matrix: ");
    scanf("%d %d", &m, &n);
    printf("Enter the rows and columns of the second matrix: ");
    scanf("%d %d", &o, &p);

    int a[m][n];
    int b[o][p];
    int c[m][p];

    if (n != o)
    {
        printf("Invalid matrix form!");
        return 1;
    }
    
    printf("Enter elements of the first matrix:\n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("Enter elements of the second matrix:\n");
    for (int i = 0; i < o; i++)
    {
        for (int j = 0; j < p; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < p; j++)
        {
            c[i][j] = 0;
            for (int k = 0; k < n; k++)
            {
                c[i][j] += a[i][k] * b[k][j];
            }
            
        }   
    }

    printf("The multiplication of the two matrix is:\n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < p; j++)
        {
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
