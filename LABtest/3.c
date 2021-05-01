#include <stdio.h>
int main()
{
    int n, start=0 , end=0,i;
  scanf("%d",&n);
  int a[n];
  for (i = 0; i < n; i++)
  {
      scanf("%d",&a[i]);
  }
  for (i = 0; i < n; i++)
  {
      if (a[i] < a[i+1])
      {
          if (i <= start) 
            start = i;
          if ((i+1) >= end )
            end = (i+1);
      }
      
  }
  printf("%d %d\n",start,end);
}