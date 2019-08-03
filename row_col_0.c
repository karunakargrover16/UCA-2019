#include<stdio.h>
int main()
{
  int k,i,j,r=1,c=1,n,a[5][5];
  scanf("%d", &n);
  for(i=0;i<n;i++)
    for(j=0;j<n;j++)
      scanf("%d", &a[i][j]);
  for(i=0;i<n;i++)
  {
    if(a[i][0]==0)
      c=0;
    if(a[0][i]==0)
      r=0;
  }
  for(i=1;i<n;i++)
    for(j=1;j<n;j++)
    {
      if(a[i][j]==0)
      a[0][j]=a[i][0]=0;
    }

  for(i=0;i<n;i++)
    if(a[0][i]==0)
      for(j=0;j<n;j++)
        a[j][i]=0;

  for(i=0;i<n;i++)
    if(a[i][0]==0)
      for(j=0;j<n;j++)
        a[i][j]=0;

  if(r==0)  
  {
    for(i=0;i<n;i++)
      a[0][i]=0;
  }

  if(c==0)  
  {
    for(i=0;i<n;i++)
      a[i][0]=0;
  }

  for(i=0;i<n;i++)
    {
      for(j=0;j<n;j++)
      {
        printf("%d ", a[i][j]);
      }
      printf("\n");
    }  
}
