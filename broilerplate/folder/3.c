#include <stdio.h>
long long int window, sum = 0,ssum = 0;
void summation(long long int a[], long long int N, long long int n)
{
    long long int i, j;
    if ((n) <= (N / 2))
    {
        sum = 0;
        for (j = 0; j < (n) * 2; j++)
        {
            sum += a[j];
        }
        ssum += sum;
        i = 0;
        for (; j < N; j++, i++)
        {
            window = a[j] - a[i];
            sum += window;
            ssum += sum;
        }
        n++;
        
        summation(a, N, n);
    }
}
int main()
{
    long long int N, i, j, n;
    scanf("%lld", &N);
    long long int a[N];
    for (i = 0; i < N; i++)
    {
        scanf("%lld", &a[i]);
    }
    n = 1;
    summation(a, N, 1);
    printf("%lld\n", ssum);
}