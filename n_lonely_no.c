#include <stdio.h>
//only if every value in array is < size of array
int main()
{
    int a[7]={1,3,2,1,4,2,2};
    int i,m,n=7;
    for(i=0;i<n;i++)
    {
        m=a[i];
        if(m<0)
            m*=-1;
        a[m]=a[m]*-1;
    }
    for(i=0;i<n;i++)
    {
        if(a[i]<0)
        {
            printf("%d",i);
        }
    }
	return 0;
}
