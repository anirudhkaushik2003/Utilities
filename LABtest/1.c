#include <stdio.h>
int main()
{
  int n,w,m,i,j;
  scanf("%d %d",&n,&w);

  int a[n] ;
  m = n - w + 1;
  int b[m];
  for (i=0;i<n;i++)
  {
      a[i] = 0;
      
  }
  for (i=0;i<m;i++)
  {
      b[i] = 0;
      
  }
  for (i=0;i<n;i++)
  {
      scanf("%d",&a[i]);
      
  }
  for (j=i=0;j<(w+i);j++)
      {
        b[i] += a[j];
      }
   
  for (i=1;i<m;i++)
  {
      
      b[i] = b[i-1] -a[i-1] + a[w+i-1];
  }

  for (i=0;i<m;i++)
  {
       printf("%d ",b[i]);
  }
  printf("\n");
 
}