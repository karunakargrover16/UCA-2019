#include<stdio.h>
int main()
{
  int i,j,a[10], b[10], c[10], k=0;
  int m=scanf("%d", &m);
  int n=scanf("%d", &n);
  for(i=0;i<m;i++)
    scanf("%d", &a[i]);
  for(i=0;i<n;i++)
    scanf("%d", &b[i]) ; 
  for(i=0;i<m;i++)
  {
    if(a[0]<b[j])
      i++;
    else if(a[i]==b[j])
    {
      i++;
      j++;
      c[k]=a[i];
      k++;
    }
    else if(a[i]>b[j])
      j++;
  }
  for(i=0;i<k;i++)
    printf("%d ", c[i]);
  return 0;
}
