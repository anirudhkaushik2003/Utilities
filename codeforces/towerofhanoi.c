#include <stdio.h>
int towerofhanoi(int n)
{
    int a;
    if (n == 1)
        return 1;
    a = (2*towerofhanoi(n - 1)) + 1;
    return a;
}
int main()
{
    printf("Enter number of disks: ");
    int n;
    scanf("%d", &n);
    printf("%d\n", towerofhanoi(n));
}