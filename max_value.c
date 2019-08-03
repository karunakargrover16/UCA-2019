#include<stdio.h>
long function(int rows, int cols, int** numbers)
{
  int i,j;
  int arr[6]={0,0,0,0,0,0};
  for(i=0;i<rows;i++)
  {
    val1=*(*(numbers+i)+0);
    val2=*(*(numbers+i)+1);
    val3=*(*(numbers+i)+2);
    arr[val1-1]+=val3;
    arr[val2]-=val3;
  }
  int prev=0;
  long max=0;
  for(i=0;i<6;i++)
  {
    if(arr[i]+prev>max)
    {
      max=arr[i]+prev;
    }
    prev+=arr[i];
  }
  return max;
}
