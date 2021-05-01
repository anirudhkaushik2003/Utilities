#include <stdio.h>
#include "bubblesort.c"
int main()
{
    int i, n;
    printf("Enter an array size: ");
    scanf("%d", &n);
    int a[n];
    printf("Enter an array: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    bubble_sort(a, n);
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
}