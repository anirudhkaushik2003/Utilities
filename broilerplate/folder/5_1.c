#include <stdio.h>

int determinant(int n, int a[][n]);
void subarray(int n, int a[n][n], int temp[n][n], int p, int q)
{
    int i = 0, j = 0;
    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col < n; col++)
        {
            if (row != p && col != q)
            {
                temp[i][j++] = a[row][col];

                if (j == n - 1)
                {
                    j = 0;
                    i++;
                }
            }
        }
    }
}
int determinant(int n, int a[n][n])
{
    int sum = 0, sign = 1;
    int temp[n][n];

    for (int f = 0; f < n; f++)
    {
        subarray(n, a, temp, 0, f);
        sum += a[0][f] * determinant(n - 1, temp);
        sign = -sign;
    }

    return sum;
}

int main()
{
    int N, i, j;

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