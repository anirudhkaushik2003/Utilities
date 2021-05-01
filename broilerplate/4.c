#include <stdio.h>
void swap(int *i, int *j)
{
    int temp;
    temp = *i;
    *i = *j;
    *j = temp;
}

void bubble_sort(int a[], int n)
{
    int i, j;
    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (a[j] > a[j + 1])
                swap(a + j, a + j + 1);
        }
    }
}
int main()
{
    int n, k, i, j;
    scanf("%d %d", &n, &k);
    int a[n], b[k+1], c[k];
    for (j = 0; j < k; j++)
    {
        c[j] = 0;
    }
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    bubble_sort(a, n);
    if (k % 2 == 0)
    {
        for (j = 0, i = 0; i < k+1, j < n; i++)
        {
            b[i] = a[j];

            j += 2;
        }
    }
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < k; j++)
        {
            if (j + 1 == k)
            {
                if (a[i] >= b[j] && a[i] <= b[j + 1])
                {
                    c[j]++;
                }
            }
            else
            {
                if (a[i] >= b[j] && a[i] < b[j + 1])
                {
                    c[j]++;
                }
            }
        }
    }
    for (j = 0; j < k; j++)
    {
        printf("%d ", c[j]);
    }
    printf("\n");
}