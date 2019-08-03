#include<stdio.h>
int main()
{
  int i, j, n, arr[5][5];
  scanf("%d", &n);
  for(i=0;i<n;i++)
    for(j=0;j<n;j++)
      scanf("%d", &arr[i][j]);
  for(i=0;i<n;i++)
    for(j=i;j<n-1-i;j++)
    {
      int temp=arr[i][j];
      arr[i][j]=arr[n-1-j][i];
      arr[n-1-j][i]=arr[n-1-i][n-1-j];
      arr[n-1-i][n-1-j]=arr[j][n-1-i];
      arr[j][n-1-i]=temp;
    }
  for(i=0;i<n;i++)
    {
      for(j=0;j<n;j++)
      {
        printf("%d ", arr[i][j]);
      }
      printf("\n");
    }  
}
