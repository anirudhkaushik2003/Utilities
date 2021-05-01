#include <stdio.h>
#include <stdbool.h>

bool prime(int x);
int main()
{
    int t, i, j;
    scanf("%d", &t);
    int arr[t];
    int flag[t];

    for (i = 0; i < t; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < t; i++)
    {
        if (arr[i] == 1 || arr[i] == 2 || arr[i] == 3)
        {
            printf("%d\n", arr[i] - 1);
        }
        else if (arr[i] >= 4 && arr[i] % 2 == 0)
        {
            printf("2\n");
        }
        else if (prime(arr[i]) && arr[i] != 5)
        {
            printf("3\n");
        }
        else if (arr[i] % 3 == 0 && (arr[i] % 2) != 0)
        {
            printf("3\n");
        }
        else if (arr[i] == 5)
        {
            printf("3\n");
        }
        else
        {
            printf("3\n");
        }
    }
}

bool prime(int n)
{

    int i, flag = 0;

    for (i = 2; i <= n / 2; ++i)
    {

        // condition for non-prime
        if (n % i == 0)
        {
            flag = 1;
            break;
        }
    }

    if (flag == 0)
        return true;
    else
        return false;
}
