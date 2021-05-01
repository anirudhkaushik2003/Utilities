#include <stdio.h>
#include <string.h>
#include <stdbool.h>
int N;
int readNames(char names[][100])
{
    int i = 0;
    while (scanf("%s", &names[i][0]) == 1)
    {
        i = i + 1;
        if (i == N)
            break;
    }

    return i;
}
void printNames(char names[N][100], int n)
{
    int j;
    for (int i = 0; i < n; ++i)
    {
        for (j = 0; j < n; j++)
        {
            if (strcmp(&names[i][0], &names[j][0]) == 0 && j != i)
            {
                i++;
            }
        }
        printf("%s\n", &names[i][0]);
    }
}
void swap(char *str1, char *str2)
{
    char temp[100 + 1];
    strcpy(temp, str1);
    strcpy(str1, str2);
    strcpy(str2, temp);
}
void sortNames(char names[][100], int n)
{
    for (int i = 0; i < n; i++)
    {
        bool anyswap = false;
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (strcmp(&names[j][0], &names[j + 1][0]) > 0)
            {
                swap(&names[j][0], &names[j + 1][0]);
                anyswap = true;
            }
        }
        if (!anyswap)
            break;
    }
}
int main(void)
{

    scanf("%d", &N);
    char names[N][100];
    

    readNames(names);
    sortNames(names, N);
    printNames(names, N);


    return 0;
}
