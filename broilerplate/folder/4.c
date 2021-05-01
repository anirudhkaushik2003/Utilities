#include <stdio.h>
#include <string.h>
#include <stdbool.h>
int N, M, count;
int readNames(char names[][15],int n)
{
    int i = 0;
    while (scanf("%s", &names[i][0]) == 1)
    {
        i = i + 1;
        if (i == n)
            break;
    }

    return i;
}
void printNames(char names[N][15], int n, char names2[M][15], int m)
{
    int j;
    for (int i = 0; i < n; ++i)
    {
        for (j = 0; j < m; j++)
        {
            if (strcmp(&names[i][0], &names2[j][0]) == 0)
            {
                count++;
            }
        }
    }
}

int main(void)
{

    scanf("%d", &N);
    scanf("%d", &M);
    char names[N][15];
    readNames(names,N);
    char names2[M][15];

    readNames(names2,M);

    printNames(names, N, names2, M);
    printf("%d\n", count);

    return 0;
}
