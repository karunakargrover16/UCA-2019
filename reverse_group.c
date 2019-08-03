#include<stdio.h>
void swap(int* a, int* b)
{
  int temp =*a;
  *a = *b;
  *b = temp;
}
int main()
{
  int n, k, i, j, a[20];
  scanf("%d", &n);
  scanf("%d", &k);
  for(i=0;i<n;i++)
    scanf("%d", a+i);
  for(i=0;i<n;i+=k)
  {
    if((i+k)<=n)
    {
      for(j=0;j<k/2;j++)
      {
        swap(a+i+j, a+i+k-1-j);
      }
    }
    else
    {
      for(j=0;j<(n-i)/2;j++)
      {
        swap(a+i+j, a+n-1-j);
      }
    }
  }
  for(i=0;i<n;i++)
    printf("%d ", a[i]);  
}
