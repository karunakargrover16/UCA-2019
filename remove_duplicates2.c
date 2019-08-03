#include<stdio.h>
int main()
{
  int n,arr[20],i,j=0,ct=0;
  scanf("%d", &n);
  for(i=0;i<n;i++)
    scanf("%d", &arr[i]);
//  SOLUTION 1
/*  for(i=1;i<n;i++)
  {
    if(arr[i]!=arr[j])
    {
      j++;
      arr[j]=arr[i];
      ct=0;
    }
    else if(arr[i]==arr[j] && ct==0)
    {
      j++;
      arr[j]=arr[i];
      ct++;
    }
  }
  j++;
  for(i=0;i<j;i++)
    printf("%d ", arr[i]);*/
//  SOLUTION 2
  for(i=0;i<n;i++)
  {
    if(arr[i]==arr[j] && arr[i+1]==arr[j] && arr[i+2]==arr[j])
      continue;
    else
    {
      arr[j]=arr[i];
      j++;
    }
  }
  for(i=0;i<j;i++)
    printf("%d ", arr[i]);
}
