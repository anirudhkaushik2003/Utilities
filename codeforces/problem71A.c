#include <stdio.h>
int main()
{
  int i, j = 0, n, val = 0,k=0,p=0;
  
  scanf("%d", &n);
  n = n+1;
  char a[n][110];
  for (i = 0; i < n; i++)
  {
    for (j = 0; j < 110; j++)
    {
      a[i][j] = '.';
    }
  }
  for (i = 0; i < n; i++)
  {
    for (j = 0; j < 110; j++)
    {
      scanf("%c",&a[i][j]);
      if (a[i][j] == '\n')
        break;
    }
  }
  for (i = 0; i < n; i++)
  {
    for (j = 0; j < 110; j++)
    {
      if (a[i][j] == '\n')
      {
        if (j > 10)
        {
          val = j - 2;
          printf("%c%d%c", a[i][0], val, a[i][j - 1]);
          break;
        }
        else
        {
          for(k=0;k<j;k++)
          {
            printf("%c",a[i][k]);
          }
        }
        
      }
    }
    printf("\n");
  }
}