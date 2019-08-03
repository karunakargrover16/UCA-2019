#include<stdio.h>
int main()
{
  int i,j,arr[20],n,max=0,sum=0;
  scanf("%d", &n);
  for(i=0;i<n;i++)
    scanf("%d", &arr[i]);
  sum=arr[0];
  max=arr[0];
  for(i=0;i<n;i++)
  {
    if(sum+arr[i]>arr[i])
      sum+=arr[i];
    else
      sum=arr[i];
    if(sum>max)
      max=sum;
  }
  printf("%d", max);
}
