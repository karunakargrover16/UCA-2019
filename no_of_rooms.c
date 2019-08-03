#include<stdio.h>
struct rooms
{
  int arrival;
  int depart;
};
int main()
{
  struct rooms r[10], res[10];
  int i,j,count=0;
  scanf("%d", &n);
  for(int i=0;i<n;i++)
  {
    scanf("%d %d", &r[i].arrival, &r[i].depart);
  }
  for(i=0;i<n;i++)
    for(j=i+1;j<n;j++)
    {
      if(s[i].arrival>s[j].depart)
      {
        int temp=s[i].arrival;
        s[i].arrival=s[j].arrival;
        s[j].arrival=temp;
        temp=s[i].depart;
        s[i].depart=s[j].depart;
        s[j].depart=temp;
      }
    }
  res[0]=s[0];
  count++;
  for(i=1;i<n;i++)
  {
    if(r[i].arrive>res[count-1].depart)
    {
      res[count-1].depart=r[i].depart;
    }
    else
    {
      res[count]=r[i]; 
      count++;
    }
  }
  for(i=0;i<count;i++)
    printf("{ %d, %d} ", res[i].arrive, res[i].depart);
  return 0;
}
