#include <stdio.h>
#include "mergesort_for_strings.c"
int main()
{
    int i, n;
    printf("Enter an array size: ");
    scanf("%d", &n);
    char *a[n];
    printf("Enter an array: ");
    for (i = 0; i < n; i++)
    {
        scanf("%s", a[i]);
    }
    mergesort(a, 0, n - 1);
    printarray(a, n);
}
