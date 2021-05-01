#include <stdio.h>

void INSERTIONSORT(int a[],int n)
{
    int key, i , j;
    for(j=1;j<n;j++)
    {
        key = a[j];
        i = j-1;
        while (i >= 0 && a[i] < key)
        {
            a[i+1] = a[i];
            i = i -1;
        }
        a[i+1] = key;
    }
}

void PrintArray(int a[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
}

int main()
{
    int n,i;
    printf("Enter an array size: ");
    scanf("%d",&n);
    int A[n];
    printf("enter a sequence: ");
    for (i = 0; i<n;i++)
    {
        scanf("%d",&A[i]);
    }
    INSERTIONSORT(A,n);
    PrintArray(A,n);
}