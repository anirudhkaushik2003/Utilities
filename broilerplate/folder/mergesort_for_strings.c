#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void merge(char *a[], int l, int m, int r)
{
    int i, j, k;
    int n1 = m - l + 1;
    int n2 = r - m;
    char **L[n1];
    char **R[n2];
    for (i = 0; i < n1; i++)
    {
        L[i] = &a[l + i];
    }
    for (j = 0; j < n2; j++)
    {
        R[j] = &a[m + 1 + j];
    }
    i = 0;
    j = 0;
    k = l;
    while (i < n1 && j < n2)
    {
        if (strcmp(*L[i], *R[j]) <= 0)
        {
            a[k] = *L[i];
            i++;
        }
        else
        {
            a[k] = *R[j];
            j++;
        }
        k++;
    }
    while (i < n1)
    {
        a[k] = *L[i];
        i++;
        k++;
    }
    while (j < n2)
    {
        a[k] = *R[j];
        j++;
        k++;
    }
}

void mergesort(char *a[], int l, int r)
{
    if (l < r)
    {

        int m = l + (r - l) / 2;

        mergesort(a, l, m);
        mergesort(a, m + 1, r);

        merge(a, l, m, r);
    }
}

void printarray(char *a[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("%s ", a[i]);
    }
    printf("\n");
}
int main()
{
    int i, n;
    printf("Enter an array size: ");
    scanf("%d", &n);
    char *a[3] = {"cn", "an", "bn"};

    printarray(a, n);
    mergesort(a, 0, n - 1);
    printarray(a, n);
}
