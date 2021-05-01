#include <stdio.h>
#include <math.h>

int main()
{
    int n,N, i, j, k;
    scanf("%d", &N);
    n = N*N;
    for (i = 1; i * i < n; i++)
    {
        for (j = i + 1; j * j < n; j++)
        {
            for (k = j + 1; k * k <= n; k++)
            {
                if (i * i + j * j == k * k)
                {
                    printf("%d %d %d", i, j, k);
                    printf("\n");
                }
            }
        }
    }
}