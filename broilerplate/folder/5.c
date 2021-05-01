#include <stdio.h>
int cofactor = 0;
int determinant(int n, int a[][n]);
int N;
void subarray(int n, int a[N][N], int M[N][N], int I, int J)
{
    int i = 0, j = 0;

    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col < n; col++)
        {
            if (row != I && col != J)
            {
                M[i][j++] = a[row][col];
                
                if (j == n - 1)
                {
                    j = 0;
                    i++;
                }
            }
            else
                continue;
        }
    }
}
int determinant(int n, int a[N][N])
{
    int M[n][n];
    int I, J, j, i;
    int det = 0;
    if (n == 2)
    {
        det = a[0][0] * a[1][1] + a[0][1] * a[1][0];
    }
    else
    {
        for (i = 0, j = 0; j < n; j++)
        {

            subarray(n, a, M, 0, j);
            det += (a[i][j] * determinant(n - 1, M));
        }
    }
    
    return det;
}

int main()
{
    int  i, j;
    scanf("%d", &N);
    int a[N][N];
    for (i = 0; i < N; i++)
    {
        for (j = 0; j < N; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("%d\n", determinant(N, a));
}