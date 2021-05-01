#include <stdio.h>
int main()
{
    int a[2]={4,0}, *p = &a[0], *q;
    printf("%p %p\n",&a[0],&a[1]);
    printf("p = %p\n",&p);
    a[0] = 5;
    a[1] = 9;
    printf("%p %p\n",&a[0],&a[1]);
    printf("a[0] = %d\n",a[0]); 
    q = p;
    *p = 1;
    printf("p = %d\n",*p);
    printf("q = %d\n",*q);
    printf("a[0] = %d\n",a[0]);
}