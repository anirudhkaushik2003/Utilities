#include <stdio.h>
#include <ctype.h>

int main()
{
    int i, j, b,k;
    char a[80];
    for (i = 0; i < 80; i++)
    {
        b = toupper(getchar());
        if (isalpha(b) != 0)
            a[i] = b;
        else
        {

            if (b == '\n')
            {

                a[i] = b;

                break;
            }
            else
            {
                i--;
                continue;
            }
        }
    }
    for (k = i; k > 0; k--)
    {
        for (i = k - 1, j = 0; i >= j && j <= i; i--, j++)
        {

            if ((a[i] - a[j]) == '\0')
                continue;
            else
            {
                printf("NO\n");
                return 0;
            }
        }
        printf("YES\n");
    }
    
}