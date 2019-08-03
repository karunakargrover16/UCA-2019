#include<stdio.h>
int main()
{
  int i, j, a1[20], a2[20], prev=0;
  int n, max=0, arr[100];
  scanf("%d",&n);
  for(i=0;i<n;i++)
    scanf("%d", a1+i);
  for(i=0;i<n;i++)
    scanf("%d", a2+i);
  for(i=0;i<n;i++)
    if(a2[i]>max)
      max=a2[i];
  for(i=0;i<=max;i++)
    arr[i]=0;
  for(i=0;i<n;i++)
  {
    arr[a1[i]]++;
    arr[a2[i]+1]--;
  }
  for(i=0;i<max+1;i++)
  {
    if(prev+arr[i]>max)
      max=prev+arr[i];
    prev=prev+arr[i];
  }

  printf("%d\n", max);
}
