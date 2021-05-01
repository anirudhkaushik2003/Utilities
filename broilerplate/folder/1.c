#include <stdio.h>
void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
int main()
{
    int i, N;
    int count = 0;
    scanf("%d", &N);
    int a[N], b[N];
    for (i = 0; i < N; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 1; i < N; i++)
    {
        if ((i + 1) % 2 == 0)
        {
            if (a[i] < a[i - 1])
            {
                swap(&a[i], &a[i - 1]);
                count++;
            }
        }
        else
        {
            if (a[i] > a[i - 1])
            {
                swap(&a[i], &a[i - 1]);
                count++;
            }
        }
    }
    if (count == 0)
    {
        printf("IMPOSSIBLE\n");
    }
    else
    {
        for (i = 0; i < N; i++)
        {
            printf("%d ", a[i]);
        }
        printf("\n");
    }
}