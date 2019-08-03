#include<stdio.h>
struct elem
{
  int value;
  int index;
};
int main()
{
  int n;
  scanf("%d", &n);
  struct elem arr[10];
  for(int i=0;i<n;i++)
  {
    scanf("%d", &arr[i].value);
    arr[i].index=i;
  }
  for(int i=0;i<n;i++)
    for(int j=i+1;j<n;j++)
    {
      if(arr[i].value>arr[j].value)
      {
        int temp=arr[i].value;
        arr[i].value=arr[j].value;
        arr[j].value=temp;
        temp=arr[i].index;
        arr[i].index=arr[j].index;
        arr[j].index=temp;
      }
    }
  int min=arr[0].index;
  int max=0;
  for(int i=1;i<n;i++)
  {
    if(arr[i].index-min>max)
      max=arr[i].index-min;
    if(arr[i].index<min)
      min=arr[i].index;
  }
  printf("%d", max); 
}
