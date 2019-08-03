#include<stdio.h>
int main()
{
  int l,r,num, arr[20];
  scanf("%d", &num);
  for(int i=0;i<=num;i++)	
    arr[i]=i;
  r=num;
  l=0;
  while(r>l)
  {
    int n=(r+l)/2;
    if( arr[n]*arr[n]>num)
    {
        r=n/2;
    }
    else if( arr[n]*arr[n]<num)
    {
        l=n+1;
    }
  }
  printf("%d", arr[r]);
}
