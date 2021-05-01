#include <stdio.h>
struct Part
{
    int roll;
    char name[25];
    int marks;
};
void swap(struct Part *i, struct Part *j)
{
    struct Part temp;
    temp = *i;
    *i = *j;
    *j = temp;
}

void bubble_sort(struct Part a[], int n)
{
    int i, j;
    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (a[j].roll > a[j + 1].roll)
                swap(&a[j], &a[j + 1]);
        }
    }
}
int main()
{
    int i, n;

    scanf("%d", &n);
    struct Part data[n];
    for (i = 0; i < n; i++)
    {
        scanf("%d", &data[i].roll);
    }
    for (i = 0; i < n; i++)
    {
        scanf("%s", data[i].name);
    }
    for (i = 0; i < n; i++)
    {
        scanf("%d", &data[i].marks);
    }
    bubble_sort(data, n);
    for (i = 0; i < n; i++)
    {
        printf("%d %s %d\n",data[i].roll,&data[i].name[0],data[i].marks);
    }
}