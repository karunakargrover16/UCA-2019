#include<stdio.h>
struct interval
{
  int start;
  int end;
};
int max(int a, int b)
{
  if(a>b)
    return a;
  return b;
}
int main()
{
  struct interval s[10];
  struct interval res[10];
  int i,j,n,count=0;
  scanf("%d", &n);
  for(int i=0;i<n;i++)
  {
    scanf("%d %d", &s[i].start, &s[i].end);
  }
  for(i=0;i<n;i++)
    for(j=i+1;j<n;j++)
    {
      if(s[i].start>s[j].start)
      {
        int temp=s[i].start;
        s[i].start=s[j].start;
        s[j].start=temp;
        temp=s[i].end;
        s[i].end=s[j].end;
        s[j].end=temp;
      }
    }
  res[0]=s[0];
  count++;
  for(i=1;i<n;i++)
  {
    if(s[i].start<=res[count-1].end)
    {
      res[count-1].end=max(res[count-1].end, s[i].end);
    }
    else
    {
      res[count]=s[i];
      count++;
    }
  }
  for(i=0;i<count;i++)
    printf("{ %d, %d} ", res[i].start, res[i].end);
  return 0;
}
