#include<stdio.h>
int main()
{
  int arr[20], i, j, n, max=0, left=0, limit, l=0, r=0, right=0,num;
  scanf("%d", &n);
  for(i=0;i<n;i++)
    scanf("%d", &arr[i]);
  scanf("%d", &limit);
  num==limit;
  while(r<n)
  {
    if(arr[r]==1)
      r++;
    else if(arr[r]==0 && num)
    {
      r++;
      num--;
    }
    else if(arr[r]==0)
    {
      while(arr[l]!=0)
      {
        l++;}
        if(num<limit)
          num++;
      
    }
    if(r-l>max)
    {
      max=r-l;
      right=r;
      left=l;
    }
    if(left>right)
      right=left;
  }
  printf("%d", max);
  return 0;
}
